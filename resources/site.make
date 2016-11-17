; ===================
; This file is intended as an EXAMPLE.
; Copy it to resources/site.make to include it in your builds.
; ===================

api = 2
core = 7.x

; ===================
; Contributed modules
; ===================

projects[taxonomy_manager][subdir] = "contrib"
projects[taxonomy_manager][version] = "1.0"

projects[references][subdir] = "contrib"
projects[references][version] = "2.1"

projects[simplify][subdir] = "contrib"
projects[simplify][version] = "3.3"

projects[footnotes][subdir] = "contrib"
projects[footnotes][version] = "2.5"
projects[footnotes][patch][] = "https://www.drupal.org/files/footnotes-wysiwyg_fix_js_error_ckeditor-1589130-6.patch"

projects[references][subdir] = "contrib"
projects[references][version] = "2.1"

projects[filefield_paths][subdir] = "contrib"
projects[filefield_paths][version] = "1.0"

projects[taxonomy_manager][subdir] = "contrib"
projects[taxonomy_manager][version] = "1.0"

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
