/**
 * @file
 * Gulpfile.
 */

'use strict';

var gulp = require('gulp'),
    sass = require('gulp-sass'),
    neat = require('node-neat').includePaths;

var paths = {
    scss: './assets/sass/*.scss'
};

gulp.task('styles', function () {
    return gulp.src(paths.scss)
        .pipe(sass({
            includePaths: [
                require("node-bourbon").includePaths,
                require("node-neat").includePaths[1],
                require("node-normalize-scss").includePaths,
                "./"
            ]
        }))
          .pipe(gulp.dest('./assets/css'));
});

gulp.task('default',function(){
    gulp.start('styles');
});
