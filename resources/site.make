; ===================
; This file is intended as an EXAMPLE.
; Copy it to resources/site.make to include it in your builds.
; ===================

api = 2
core = 7.x

; ===================
; Contributed modules
; ===================

projects[nodeaccess][subdir] = "contrib"
projects[nodeaccess][version] = "1.4"
projects[nodeaccess][patch][] = "https://www.drupal.org/files/issues/nodeaccess-permissions_lost-2565619-3.patch"

projects[feeds_et][subdir] = "contrib"
projects[feeds_et][version] = "1.x-dev"
projects[feeds_et][patch][] = "https://www.drupal.org/files/issues/feeds_et_link_support-2078069-3.patch"

; =========
; Libraries
; =========


; ======
; Themes
; ======
