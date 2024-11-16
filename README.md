#### **Step By step Plan To Make The Libft project**

**- What is Libft :**
A library of most used functions to help in future projects.
  
**- Why Make Libft :**
Programming in C can be a bit tedious sometimes and since in most **1337** projects we can't use\ any of the standard C libraries, and without the access to more useful functions that will make\ life a lot easier, this project aims to provide and replicate some these functions.

**- How to Make Libft :**
To simplify the **“How”** as much as we can : Libft.a.
- Make all the Libc function files *.c that will be in the library.
- Make the header file libft.h that will include all the prototypes declared for the functions, to be included later from (`#include "libft.h"`).
- Make the Makefile to automatically compile and build our library libft.a using the source code from our libc functions.
---

Now into the Detailed guide:

### Makefile :

First order of business comes down to Setting up the Makefile.

 **Notes :**
- Basic Makefile structure :
```make
target: dependencies
commands
```
First target is always the default : rule when you use the command make.

`Target` -> is the file we want to make.\
`Dependencies` -> are the files needed to exist for this target to be made.\
`Commands` : for example like the compile command `gcc -o file.c -o file.o`.

* **Variables :** 

You can declare a variable using the syntax `(=)`.\
Example : `NAME = main / CC = gcc`.\
And call it using the `\$(variable \$(NAME)`.\
Usual variables: `FLAGS - CC - SRC - OBJ - NAME` ...

- **Pattern rules :**

Pattern rules are a powerful way for automation, when creating flexible rules.\
These let you create one 1 rule for many files instead of doing too many rules.

Using the Pattern rules for example `%`:\
`%.o: %.c` means for any target file .o compile it from the same .c file\
`%` matches the file name but unlike `*` Wildcard is that `%` create\
relationships between the specific files, and `*` just match files without connecting them.

- **Automatic variables :**

`$@` : The target name.\
`$<` : The first dependency.\
`$^` : All dependencies.

example :
target : dependency   |  `%.o : %.c`.\
command -o \$\@ \$\<   |  `cc $(FLAGS) -o $@ $<`.

- **Phony targets :**

Adding `.Phony` to a target will prevent Make from confusing the phony target with a file name.
In simple terms, commands and rules that are not meant to conflict with files with the same name.\
for example :\
`clean - all - recompile -fclean ...`.


<img src="attachment/a69bd5c176ad65579372d57be7a06407.png" />

---
### Libft.h (header file):


The header file in C is used to declare functions and variables, to avoid repeating ready to use functions from The Library   **Libft**   and always having them just by including the header file.
Using : `include "libft.h"`.

example : `libft.h` (we declare here function prototypes later to be used in our src files)
```c
#ifndef LIBFT_H
#define LIBFT_H
int ft_isalpha(int a);
int ft_isdigit(int b);
#endif
```

The header file grabs the declared functions when initiated in a file with `#include "libft.h"`.
this example grabs these source files and uses them like any other function declared within the main file.

**At the end of the day the entire point of a header file is to help make our own Library.**

`ft_isalpha.c`
```c
#include "libft.h" 
int ft_isalpha(int a);
{
//code responsable for this function
}
```
`ft_isdigit.c`
```c
#include "libft.h"
int ft_isdigit(int b)
{
//code responsable for this function
}
```

Note : The header file doesn't contain the actual code, just instructions to find the needed source code.\

---
### The Functions :
Just like during the pool in 1337, here in Libft in order to build our library we need to code a number of functions that will later be helpful throughout our common core.\

---
- **Libc Functions :** 
These include some useual functions from the standard libraries. 
---
- ft_isalpha.c

**Algorithm to solve the problem**

We simply will have a `condition` to check `if()` the character passed `(int c)`\
is within the range of alphabetical letters in the ascii table `a-z OR A-Z`

if so `return (1);`

else `return (0);`

---
- isdigit
- isalnum
- isascii
- isprint
- strlen
- memset
- bzero
- memcpy
- memmove
- strlcpy
- strlcat
- toupper
- tolower
- strchr
- strchr
- strncmp
- memchr
- memcmp
- strnstr
- atoi
---
malloc usage in these :
- calloc
- strdup
---
- **Additional functions :**
Additional non Libc functions:
- ft_substr
- ft_strjoin
- ft_strtrim
- ft_split
- ft_itoa
- ft_strmapi
- ft_striteri
- ft_putchar_fd
- ft_putstr_fd
- ft_putendl_fd
- ft_putnbr_fd
---
* **Bonus part :**
```
TBD
```

---

### The Library Libft.a :
The library Libft.a simply put is a collection of precompiled code we can reuse in multiple programs.\
After compiling the source files `.c` into object files `.o`, we can combine them into a library
using the command `ar`.

example :
```make
libft.a: $(OBJs)
ar rcs libft.a $(OBJs)
```

what does  `rcs` mean :
`r` - means replace the contents of the library of it already exists.\
`c` - means create the library if it doesn't exist.\
`s` - adds an index to the library to speed up linking. `not needed but good practice`

---

The functions coded
(ghncodi ga3 lfunctions onzidhom for now just till i update everything)