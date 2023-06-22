# Bahara

## Func

- putchar and getchar
- puts
- wscanf and wprintf and wmain
- putch and getch, also getche
- keyword wchar_t
- return
- symbols of input and output
  - printf and scanf
  
---

## Some EXP

- ```getchar()``` function has no arguments
- `puts` -> put string, `gets` -> get string
  - `puts` like `printf` with little differences
    1. ignore `\n` in puts function
    2. puts doesn't deal with numbers and characteres 
- wprintf and wscanf is same printf and scanf
   - wprintf -> wide print format, wscanf -> wide scan format
   - and `L` means long
- `getch` and `putch` have been removed from `gcc compiler` and... 
  - `conio.h` is only on `borland turbo C/C++` in Windows and DOS OS, But[^1]
    - `getche` same as getch but it shows to user the key he press
- wchar_t -> wide-character and size 2 bytes
- returns the value to main function with `return` `0` meaning exit without error
  - and the reason to return the value to main func is `int` and if u refuse to return the value, write `void` instead of `int`
  
[^1]: I will write some programs with getch and putch just for more info.

### Symbols of output on function printf & input on function scanf

|symbol|mean's|
|-|-|
|%d, %i|natural numbers, `int`, `short`, `long`|
|%f, %e, %g|real numbers, `float`, `double`|
|%u|nmbrs without signed, `unsigned`,`int`,`short`,`long`|
|%c|symbols and characters, `char`|
|%s|texts and character arrays, ``char[]`, `char*`|
|%o|octal system numbers|
|%x|hexadecimal system numbers|
|%p|pointers|
|%ld|Long Decimal, `long int`|
|%lu|`long unsigned`|

---

## Exercice

- Which is better printf or puts? and why?
- What's conio mean's? What functions do you learn from head file conio.h?
- Why return a value to the main function, if it is in default mode? And what does that value mean?
