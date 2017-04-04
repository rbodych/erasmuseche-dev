/**
 * @file
 * gulpfile.js.
 *
 * Javascript.
 *
 * @category Production
 *
 * @package ErasmusCore/Theme
 *
 * @author EAC WEB <EAC-LIST-C4@nomail.ec.europa.eu>
 *
 * @copyright 2016 European-Commission
 *
 * @license http://ec.europa.eu Europa
 * @link NA
 *
 */
var gulp = require('gulp'),
  rename = require('gulp-rename'),
  watch = require('gulp-watch'),
  sass = require('gulp-sass'),
  autoprefixer = require('gulp-autoprefixer');
livereload = require('gulp-livereload');
mustache = require('gulp-mustache');

var paths = {
  sass: {
    input: 'sass/app.sass',
    allfiles: 'sass/**/*.+(scss|sass)',
    output: 'css'
  },
  mustache: {
    input: './html-workspace/*.html',
    allfiles: './html-workspace/**/*.{html,mustache}',
    output: './html-preview'
  },
  styleguide: {
    sass: [
      'sass/**/*.+(scss|sass)',
      '!sass/_*.+(scss|sass)'
    ],
    html: 'sass/**/*.html',
    output: 'styleguide',
  }
};

gulp.task('sass', function () {
  gulp.src(paths.sass.input)
    .pipe(sass(
      {outputStyle: 'compressed'}
    ).on('error', sass.logError))
    .pipe(rename('style.css'))
    .pipe(autoprefixer({
      browsers: ['last 10 versions'],
      cascade: false
    }))
    .pipe(gulp.dest(paths.sass.output))
    .pipe(livereload());
});

gulp.task('mustache', function () {
  return gulp.src(paths.mustache.input)
    .pipe(mustache())
    .pipe(gulp.dest(paths.mustache.output));
});

gulp.task('default', [
  'sass',
  'mustache'
], function () {
  livereload.listen();
  gulp.watch([paths.sass.allfiles, paths.styleguide.html, paths.mustache.allfiles], [
    'sass',
    'mustache'
  ]);
});
