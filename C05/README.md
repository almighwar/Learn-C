# Arrays

- Array 
- Dimensional Array ([Example](#example-of-dimensional-array))
  - 1D
  - 2D
  - 3D

- Array Text
- String:
  - gets
  - Strcpy and Strncpy 
  - Strcat and Strncat

--- 

## Some EXP

```c
ArrayType ArrayName[ArraySize];
```

- differences between `gets` and `scanf` is the first doesn't stop in space ` `
 
- array is important lesson such as lessons after this, u need more sources for infos.
- if we have array with number 4 in size, that mean we take 4 place in memory, every one of them with size of var `int`
- every dimension we adding, things get complex.
- the way to define the size of array:
  - 1D `int x[] = {10, 11, 30};`
  - 2D `int x[][2] = {{5, 9}, {100, 140}};`
  - 3D `int x[][2][2] = {{{10, 20}, {13, 70}}, {{34, 8}, {2, 57}}};`
- Arrays uses a lot when come to strings

- header file `<string.h>` has `strcpy` (string copy) and `strncpy` (string number copy)
  - `strcpy` is copy and paste characters from string to another
  - `strncpy` same as `strcpy`, but with select the number of characters u wanna copy
- `strcat` (string concatenate) and `strncat` (string number concatenate) come from `<string.h>`
  - `strcat` is copy a string and add it to end of another string
  - `strncat` same as `strcat`, but with select the number of characters u wanna copy

---

## Errors

```c
int num[2];
num[0] = 13;
num[5] = 23; // here the error, because size of arr is '2' not '5' or greater
```
- in stings when u write text directly, add a place for EOF `'\0'` 
- `gets` function only use for input text

---

## Exercise :

1. program demand from user to input username with gets and puts function
2. Write a program, user input the numbers and print it, with array
3. Write `Hello, World!` with array and loop to calcul the symbols and characters without space, don't use x-1 

---

<h2 id="example-of-dimensional-array">Example Of Dimensional Array</h2>
         
```c
int a[3][4];
```
![Dimensional Array](/assets/two_dimensional_arrays.jpg)
