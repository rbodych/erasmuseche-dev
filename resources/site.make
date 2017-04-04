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

projects[feeds_et][subdir] = "contrib"
projects[feeds_et][version] = "1.x-dev"
projects[feeds_et][patch][] = "https://www.drupal.org/files/issues/feeds_et_link_support-2078069-3.patch"

projects[focal_point][subdir] = "contrib"
projects[focal_point][version] = "1.0"

projects[field_collection][subdir] = "contrib"
projects[field_collection][version] = "1.0-beta12"

projects[entity_translation][subdir] = "contrib"
projects[entity_translation][version] = "1.0-beta5"

projects[addressfield][subdir] = "contrib"
projects[addressfield][version] = "1.1"

projects[admin_theme][subdir] = "contrib"
projects[admin_theme][version] = "1.0"

projects[bootstrap_fieldgroup][subdir] = "contrib"
projects[bootstrap_fieldgroup][version] = "1.2"

projects[boxes][subdir] = "contrib"
projects[boxes][version] = "1.2"

projects[countries][subdir] = "contrib"
projects[countries][version] = "2.3"

projects[email_registration][subdir] = "contrib"
projects[email_registration][version] = "1.2"

projects[entityreference_autocreate][subdir] = "contrib"
projects[entityreference_autocreate][version] = "1.1"

projects[lang_dropdown][subdir] = "contrib"
projects[lang_dropdown][version] = "1.0-beta2"

projects[metatag][subdir] = "contrib"
projects[metatag][version] = "1.7"

projects[node_view_permissions][subdir] = "contrib"
projects[node_view_permissions][version] = "1.5"

projects[nodeaccess][subdir] = "contrib"
projects[nodeaccess][version] = "1.4"

projects[options_element][subdir] = "contrib"
projects[options_element][version] = "1.12"

projects[permissions_per_webform][subdir] = "contrib"
projects[permissions_per_webform][version] = "1.0-alpha1"

projects[r4032login][subdir] = "contrib"
projects[r4032login][version] = "1.8"

projects[views_record_count][subdir] = "contrib"
projects[views_record_count][version] = "1.2"

projects[webform_localization][subdir] = "contrib"
projects[webform_localization][version] = "4.x-dev"

projects[webform_matrix_component][subdir] = "contrib"
projects[webform_matrix_component][version] = "1.0"

projects[webform_optionsmarkup][subdir] = "contrib"
projects[webform_optionsmarkup][version] = "1.0"

projects[webform_revisions][subdir] = "contrib"
projects[webform_revisions][version] = "1.0"

; =========
; Libraries
; =========
libraries[history.js][download][type] = "get"
libraries[history.js][download][url] = "https://github.com/browserstate/history.js/archive/master.zip"
libraries[history.js][directory_name] = "history.js"
libraries[history.js][type] = "library"

libraries[mpdf][download][type] = "get"
libraries[mpdf][download][url] = "https://github.com/mpdf/mpdf/archive/development.zip"
libraries[mpdf][directory_name] = "mpdf"
libraries[mpdf][type] = "library"


libraries[tcpdf][download][type] = "get"
libraries[tcpdf][download][url] = "https://github.com/tecnickcom/tc-lib-pdf/archive/develop.zip"
libraries[tcpdf][directory_name] = "tcpdf"
libraries[tcpdf][type] = "library"

; ======
; Themes
; ======
