*This activity has been created as part of the 42 curriculum by rajlouni.*

## Description

Libft is a custom C library built from scratch to establish a solid foundation in C programming and memory management. The goal of this project is to grasp the inner workings of standard C library functions by re-implementing them, and it will serve as a general-purpose toolkit for future assignments.

**Library Details**
The library compiles into a single `libft.a` archive and is broken down into three main sections. Below is a detailed description of every function created for this project:

* **Part 1 - The Libc Essentials:**
* **Character Classification & Conversion:**
* `ft_isalpha`: Checks for an alphabetic character.


* `ft_isdigit`: Checks for a digit (0 through 9).


* `ft_isalnum`: Checks for an alphanumeric character.


* `ft_isascii`: Checks whether a character fits into the ASCII character set.


* `ft_isprint`: Checks for any printable character, including space.


* `ft_toupper`: Converts a lower-case letter to the corresponding upper-case letter.


* `ft_tolower`: Converts an upper-case letter to the corresponding lower-case letter.




* **String Manipulation:**
* `ft_strlen`: Calculates the length of a string.


* `ft_strchr`: Locates the first occurrence of a character in a string.


* `ft_strrchr`: Locates the last occurrence of a character in a string.


* `ft_strncmp`: Compares two strings up to a specified number of characters.


* `ft_strlcpy`: Copies a string to a specific size, guaranteeing null-termination.


* `ft_strlcat`: Concatenates a string to a specific size, guaranteeing null-termination.


* `ft_strnstr`: Locates a substring in a string.


* `ft_atoi`: Converts a string to an integer.


* `ft_strdup`: Allocates memory and duplicates a string.




* **Memory Manipulation:**
* `ft_memset`: Fills memory with a constant byte.


* `ft_bzero`: Zeroes out a byte string.


* `ft_memchr`: Scans memory for a character.


* `ft_memcpy`: Copies a memory area.


* `ft_memmove`: Copies a memory area, safely handling overlapping regions.


* `ft_memcmp`: Compares memory areas.


* `ft_calloc`: Allocates memory for an array and sets it to zero.






* **Part 2 - Additional Utilities:**
* `ft_substr`: Allocates and returns a substring from a string.


* `ft_strjoin`: Allocates and returns a new string resulting from the concatenation of two strings.


* `ft_strtrim`: Allocates and returns a copy of a string with specified characters removed from the beginning and end.


* `ft_split`: Allocates and returns an array of strings obtained by splitting a string using a delimiter.


* `ft_itoa`: Allocates and returns a string representing an integer.


* `ft_strmapi`: Applies a function to each character of a string, creating a new string to collect the results.


* `ft_striteri`: Applies a function to each character of a string, passing its index and modifying it in place.


* `ft_putchar_fd`: Outputs a character to a given file descriptor.


* `ft_putstr_fd`: Outputs a string to a given file descriptor.


* `ft_putendl_fd`: Outputs a string to a given file descriptor followed by a newline.


* `ft_putnbr_fd`: Outputs an integer to a given file descriptor.




* **Part 3 - Linked Lists:**
* `ft_lstnew`: Allocates and returns a new node.


* `ft_lstadd_front`: Adds a node at the beginning of a list.


* `ft_lstsize`: Counts the number of nodes in a list.


* `ft_lstlast`: Returns the last node of a list.


* `ft_lstadd_back`: Adds a node at the end of a list.


* `ft_lstdelone`: Frees a node and its content.


* `ft_lstclear`: Deletes and frees a given node and all its successors.


* `ft_lstiter`: Iterates through a list and applies a function to the content of each node.


* `ft_lstmap`: Iterates through a list, applies a function to each node's content, and creates a new list from the results.





## Instructions

1. **Get the files:** Clone the repository and navigate into the root directory.


2. **Compile:** Run `make` in your terminal. This uses `cc` with the strict `-Wall -Wextra -Werror` flags to compile the source code. The static library `libft.a` is then created using the `ar rcs` command, as `libtool` is forbidden.


3. **Manage the build:**
* Run `make clean` to remove temporary object files.


* Run `make fclean` to wipe the object files and the compiled `libft.a` file.


* Run `make re` to completely rebuild the library from scratch.




4. **Include it:** To use this library in your own projects, add `#include "libft.h"` to your C files and compile your project alongside the `libft.a` archive.



## Resources

* **Documentation:** The man7.org website was used as the primary reference for understanding the exact expected behaviors, return values, and edge cases of the standard libc functions.
* **AI Usage:** AI was used for navigating logical traps and gaining a deep understanding of specific concepts. It acted as a Socratic tutor when needed, adhering to the 42 curriculum directive to build reasoning skills rather than asking for direct answers.
