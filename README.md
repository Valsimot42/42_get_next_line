# Get_next_line
<p align="center"><img src="https://cdn-images-1.medium.com/v2/resize:fit:1200/1*mb0KkzYAZDDSvdYC2MM5hg.jpeg" width="150" height="150" />

#
<h3><b>¤ Table of contents ¤</b></h3>

1) <b>How to use</b>
2) <b>Introduction</b>
3) <b>Instructions</b>

---
<h3><b>¤ How to use ¤</b></h3>

* Clone the git repository.
* Write tests that you would like to run in `test.txt`
* For manadotry part: Execute `gcc main.c get_next_line.c get_next_line_utils.c`
* For bonus part: Execute `gcc main.c get_next_line_bonus.c get_next_line_utils_bonus.c`

---
<h3><b>¤ Introduction ¤</b></h3>

<p align="center"> In "get_next_line", we learn about an important concept of C programming: static variables. The task of this project is to create a program which will take in
"buffer_size" of characters which it took from the read line. If it encounters a "newline character", we should move to the next line. Aside from static variables, "get_next_line" also offers
a peek in other C language concepts which you will find out on your own.</p>

---
<h3><b>¤ Instructions ¤</b></h3>

* Project must be written in C.

* Functions should not quit unexpectedly (segmentation fault, bus error, double free, etc) apart from undefined behaviors.

* All heap allocated memory space must be properly freed when necessary. No leaks will be tolerated.
If the subject requires it, you must submit a Makefile which will compile your source files to the required output with the flags -Wall, -Wextra and -Werror, use cc, and Makefile must not relink.

* Makefile must at least contain the rules $(NAME), all, clean, fclean and re.

---
<h3><b>¤ Part 1: Parameters ¤</b></h3>

* • Repeated calls (e.g., using a loop) to your get_next_line() function should let you read the text file pointed to by the file descriptor, one line at a time.

* 
