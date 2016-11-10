/**
 * @file
 * Counter.
 *
 * PHP version 5
 *
 * @category Production
 *
 * @package ErasmusCore/Theme
 *
 * @author EAC WEB <EAC-LIST-C4@nomail.ec.europa.eu>
 *
 * @copyright 2015 European-Commission
 *
 * @license http://ec.europa.eu Europa
 * @link NA
 *
 * Counter stats
 */

(function ($) {
    $.fn.countTo = function (options) {
        options = options || {};

        return $(this).each(
            function () {
                // Set options for current element.
                var settings = $.extend(
                    {}, $.fn.countTo.defaults, {
                        from:            $(this).data('from'),
                        to:              $(this).data('to'),
                        speed:           $(this).data('speed'),
                        refreshInterval: $(this).data('refresh-interval'),
                        decimals:        $(this).data('decimals')
                    }, options
                );

                // How many times to update the value, and how much to increment the value on each update.
                var loops = Math.ceil(settings.speed / settings.refreshInterval),
                increment = (settings.to - settings.from) / loops;

                // References & variables that will change with each update.
                var self = this,
                $self = $(this),
                loopCount = 0,
                value = settings.from,
                data = $self.data('countTo') || {};

                $self.data('countTo', data);

                // If an existing interval can be found, clear it first.
                if (data.interval) {
                    clearInterval(data.interval);
                }
                data.interval = setInterval(updateTimer, settings.refreshInterval);

                // Initialize the element with the starting value.
                render(value);

                function updateTimer() {
                    value += increment;
                    loopCount++;

                    render(value);

                  if (typeof(settings.onUpdate) == 'function') {
                      settings.onUpdate.call(self, value);
                  }

                  if (loopCount >= loops) {
                      // Remove the interval.
                      $self.removeData('countTo');
                      clearInterval(data.interval);
                      value = settings.to;

                    if (typeof(settings.onComplete) == 'function') {
                        settings.onComplete.call(self, value);
                    }
                  }
                }

                function render(value) {
                    var formattedValue = settings.formatter.call(self, value, settings);
                    $self.html(formattedValue);
                }
            }
        );
    };

    $.fn.countTo.defaults = {
        from: 0,
        // The number the element should start at.
        to: 0,
        // The number the element should end at.
        speed: 1000,
        // How long it should take to count between the target numbers.
        refreshInterval: 100,
        // How often the element should be updated.
        decimals: 0,
        // The number of decimal places to show.
        formatter: formatter,
        // Handler for formatting the value before rendering.
        onUpdate: null,
        // Callback method for every time the element is updated.
        onComplete: null
        // Callback method for when the element finishes updating.
    };

  function formatter(value, settings) {
      return value.toFixed(settings.decimals);
  }
}(jQuery));

jQuery(
    function ($) {
        // Custom formatting example.
        $('#count-number').data(
            'countToOptions', {
                formatter: function (value, options) {
                    return value.toFixed(options.decimals).replace(/\B(?=(?:\d{3})+(?!\d))/g, ',', '€');
                }
            }
        );

        // Start all the timers.
        $('.timer').each(count);

        function count(options) {
            var $this = $(this);
            options = $.extend({}, options || {}, $this.data('countToOptions') || {});
            $this.countTo(options);
        }

    }
);
