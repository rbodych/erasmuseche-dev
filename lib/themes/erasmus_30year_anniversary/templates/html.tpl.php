<?php
/**
 * @file
 * Default theme implementation of main page.
 */
?>
<?php
  $theme_path = drupal_get_path('theme', 'erasmus_30year_anniversary');
?>
<!DOCTYPE html>
<html lang="<?php print (isset($language) ? $language->language : '') ?>">
<head>
<meta http-equiv="X-UA-Compatible" content="IE=edge" />
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <?php print $styles; ?>
  <!-- HTML5 element support for IE6-8 -->
  <!--[if lt IE 9]>
    <script src="<?php print url(drupal_get_path('theme', 'ec_resp') . '/scripts/html5shiv.min.js', array('language' => (object) array('language' => FALSE))); ?>"></script>
    <script src="<?php print url(drupal_get_path('theme', 'ec_resp') . '/scripts/respond.min.js', array('language' => (object) array('language' => FALSE))); ?>"></script>
  <![endif]--> 
  <?php print $scripts; ?>
  <link rel="apple-touch-icon" sizes="180x180" href="<?php print url($theme_path . '/assets/images/favicons/apple-touch-icon.png', array('language' => (object) array('language' => FALSE))); ?>">
  <link rel="icon" type="image/png" href="<?php print url($theme_path . '/assets/images/favicons/favicon-32x32.png', array('language' => (object) array('language' => FALSE))); ?>" sizes="32x32">
  <link rel="icon" type="image/png" href="<?php print url($theme_path . '/assets/images/favicons/favicon-16x16.png', array('language' => (object) array('language' => FALSE))); ?>" sizes="16x16">
  <link rel="manifest" href="<?php print url($theme_path . '/assets/images/favicons/manifest.json', array('language' => (object) array('language' => FALSE))); ?>">
  <link rel="mask-icon" href="<?php print url($theme_path . '/assets/images/favicons/safari-pinned-tab.svg', array('language' => (object) array('language' => FALSE))); ?>" color="#5bbad5">
  <meta name="theme-color" content="#ffffff">
</head>
<body class="<?php print $classes; ?>" <?php print $attributes;?>>
  <div id="skip-link">
    <a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
  </div>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
  <script>
    window.fbAsyncInit = function() {
      FB.init({
        appId      : '1856938797923816',
        xfbml      : true,
        version    : 'v2.8'
      });
    };
  
    (function(d, s, id){
       var js, fjs = d.getElementsByTagName(s)[0];
       if (d.getElementById(id)) {return;}
       js = d.createElement(s); js.id = id;
       js.src = "//connect.facebook.net/en_US/sdk.js";
       fjs.parentNode.insertBefore(js, fjs);
     }(document, 'script', 'facebook-jssdk'));
  </script>
</body>
</html>
