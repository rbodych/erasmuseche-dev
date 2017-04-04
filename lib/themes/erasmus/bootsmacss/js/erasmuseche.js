(function ($) {
  Drupal.behaviors.firstTimeRemove = {
    attach: function (context, settings) {
      $('#first-time').remove();
    }
  };
});
