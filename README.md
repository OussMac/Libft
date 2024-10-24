#### **Step By step Plan To Make The Libft project**

**- What is Libft :**
A library of most used functions to help in future projects.
  
**- Why Make Libft :**
Programming in C can be a bit tedious sometimes and since in most 1337 projects we can't use any of the standard C libraries, and without the access to more useful functions that will make life a lot easier, this project aims to provide and replicate some these functions.

**- How to Make Libft :**
To simplify the “How” as much as we can : Libft.a
- Make all the Libc function files *.c that will be in the library.
- Make the header file libft.h that will include all the prototypes declared for the functions, to be included later from (#include "libft.h").
- Make the Makefile to automatically compile and build our library libft.a using the source code from our libc functions
---

Now into the Detailed guide:

### Makefile :

First order of business comes down to Setting up the Makefile

 Notes :
- Basic <span style="color: Gold;">Makefile</span> structure :
	target : dependencies 
		commands
		first target is always the <span style="color: #ADD8E6">default</span> : rule when you use the command make

* <span style="color: Gold">Variables</span> : 
	you can declare a variable using the syntax <span style="color: #ADD8E6">(=)</span> 
		example : <span style="color: #ADD8E6">NAME = main / CC = gcc</span> 
	and call it using the <mark class="hltr-b">$(variable $(NAME</mark>)
	usual variables: <span style="color: #66FF99">FLAGS - CC - SRC - OBJ - NAME ...</span> 
	
- <span style="color: Gold">Pattern rules</span> :
	pattern rules are a powerful way for automation, when creating flexible rules
	these let you create one 1 rule for many files instead of doing too many rules
	
	using the <mark class="hltr-r">Pattern rules</mark> for example <mark class="hltr-g">%</mark>
	<mark class="hltr-b">%.o: %.c</mark> means for any target file .o compile it from the same .c file
	<mark class="hltr-g">%</mark> matches the file name but unlike <mark class="hltr-r">* Wildcard</mark> is that % creat
	relationships between the specific files, and <mark class="hltr-r">*</mark> just match files without connecting them.
	
- <span style="color: Gold">Automatic variables</span> :
	\$@ : The target name.
	\$< : The first dependency 
	\$^ : All dependencies

	example :
	target : dependency   |  %.o : %.c
	command -o $@ $<   |  <mark class="hltr-o">cc</mark> <mark class="hltr-b">\$(FLAGS</mark>) -o <mark class="hltr-r">\$@</mark> \$< 
	
- <span style="color: Gold">Phony targets</span> :
	Adding .Phony to a target will prevent Make from confusing the phony target with a file name.
	in simple terms, commands and rules that are not meant to conflict with files with the same name 
	for example :
		<mark class="hltr-lg">clean - all - recompile -fclean ....</mark>


undefined
### Libft.h (header file) :

