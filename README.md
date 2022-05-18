# ft_printf
The goal of this project is pretty straightforward. You will recode printf(). You will mainly learn about using a variable number of arguments.

## Mandatory

* Your function has to handle the following conversions: cspdiuxX%
* %c Prints a single character.
* %s Prints a string (as defined by the common C convention).
* %p The void * pointer argument has to be printed in hexadecimal format.
* %d Prints a decimal (base 10) number.
* %i Prints an integer in base 10.
* %u Prints an unsigned decimal (base 10) number.
* %x Prints a number in hexadecimal (base 16) lowercase format.
* %X Prints a number in hexadecimal (base 16) uppercase format.
* %% Prints a percent sign.

## Bonus

* Manage any combination of the following flags: ’-0.’ and the field minimum width
under all conversions
* Manage all the following flags: ’# +’ (Yes, one of them is a space)

## Extra

* %o Prints an unsigned number in octal base
* \* The width or precision is specified as an additional argument
