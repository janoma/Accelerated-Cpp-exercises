Personal repository containing (hopefully) solved exercises from the book [Accelerated
C++](http://www.amazon.com/Accelerated-C-Practical-Programming-Example/dp/020170353X)
by Andrew Koenig and Barbara E. Moo, which I'm studying.

Structure
=========
The repository has the following structure:

    .gitignore
    .ycm_extra_conf.py
    README.md
    chap00/
           .gitignore
           Makefile
           ex0-1.cpp
           ex0-2.cpp
           ...
    chap01/
           .gitignore
           Makefile
           ex1-1.cpp
           ex1-2.cpp
           ...
    ...

Note that each chapter directory contains `Makefile` and `.gitignore` files
with specific settings for the chapter. Executables are ignored, and the
Makefile contain instructions to compile only those exercises that are meant to
compile.

Notes from chapters
===================
What follows is a summary of notes for the different chapters.

Chapter 0
---------
*   Subsection 3 doesn't have an exercise.
*   Exercises 5 and 7 don't compile, as they are intended to be examples of
    invalid programs.

Chapter 1
---------
*   Exercises 2 and 5 don't compile, as they are intended to be examples of
    invalid programs.

Chapter 2
---------
*   Exercise 3 was modified a little from the book so it doesn't compare a
    signed and an unsigned integer.

<!--- vim: set formatoptions+=t -->
