# ft_printf
This project is clear and efficient. You have to recode printf. You will then be able to reuse it in your future projects. This project is mainly about variable size arguments.

  # Description
  
  A library that contains ft_printf(), a function that mimics the original printf() function.

  You need to implement the printf() function from libc.
  The prototype of ft_printf() should be :
      int ft_printf(const char *, ...);

  Here are some requirements to respect:\
    - Contrary to the original printf() function, you must not manage a buffer.\
    - You must handle the following conversions: cspdiuxX%.\
    - Your output will be compared to the original printf() function.\
    - You must use the ar command to create your library.\
    The use of the libtool command is forbidden.\
    - Your libftprintf.a must be created at the root of your repository.\

  You must implement the following conversions:
    - %c Displays a single character.
    - %s Displays a string (as defined by the C convention).
    - %p The void * pointer argument must be displayed in hexadecimal.
    - %d Display a decimal number (base 10).
    - %i Display an integer in base 10.
    - %u Display an unsigned decimal number (base 10).
    - %x Displays a number in hexadecimal (base 16) with lower case letters.
    - %X Displays a number in hexadecimal (base 16) with upper case letters.
    - %% Displays a percentage sign.
