#### **Step By step Plan To Make The Libft project**

**- What is Libft :**
A library of most used functions to help in future projects.
  
**- Why Make Libft :**
Programming in C can be a bit tedious sometimes and since in most 1337 projects we can't use any of the standard C libraries, and without the access to more useful functions that will make life a lot easier, this project aims to provide and replicate some these functions.

**- How to Make Libft :**
To simplify the **“How”** as much as we can : Libft.a
- Make all the Libc function files *.c that will be in the library.
- Make the header file libft.h that will include all the prototypes declared for the functions, to be included later from (`#include "libft.h"`).
- Make the Makefile to automatically compile and build our library libft.a using the source code from our libc functions
---

Now into the Detailed guide:

### Makefile :

First order of business comes down to Setting up the Makefile

 **Notes :**
- Basic Makefile structure :
	target : dependencies 
		commands
		first target is always the default : rule when you use the command make
	target -> is the file we want to make
	dependencies -> are the files needed to exist for this target to be made
	commands : for example like the compile command `gcc -o file.c -o file.o`

* **Variables :** 
	you can declare a variable using the syntax `(=)`
		example : `NAME = main / CC = gcc`
	and call it using the `\$(variable \$(NAME)`
	usual variables: `FLAGS - CC - SRC - OBJ - NAME` ...
	
- **Pattern rules :**
	pattern rules are a powerful way for automation, when creating flexible rules
	these let you create one 1 rule for many files instead of doing too many rules
	
	using the Pattern rules for example `%`
	`%.o: %.c` means for any target file .o compile it from the same .c file
	`%` matches the file name but unlike `*` Wildcard is that `%` create
	relationships between the specific files, and `*` just match files without connecting them.
	
- **Automatic variables :**
	`$@` : The target name.
	`$<` : The first dependency 
	`$^` : All dependencies

	example :
	target : dependency   |  `%.o : %.c`
	command -o \$\@ \$\<   |  `cc $(FLAGS) -o $@ $<`
	
- **Phony targets :**
	Adding `.Phony` to a target will prevent Make from confusing the phony target with a file name.
	in simple terms, commands and rules that are not meant to conflict with files with the same name 
	for example :
`clean - all - recompile -fclean ...`


<img src="attachment/a69bd5c176ad65579372d57be7a06407.png" />

---
### Libft.h (header file):


The header file in C is used to declare functions and variables, to avoid repeating ready to use functions from The Library   **Libft**   and always having them just by including the header file i.
using : `include "libft.h"`
