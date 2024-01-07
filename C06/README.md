# Functions

- Function Declarations
- Function Type
- [Function Name](#function-name)
- Function Parameters
- Macros (is not functions, only have a semi-same process)
- Procedure and Function

---
## Some EXP

- `void` is empty, without any capacite, and func doesn't have any value to return to it

- The general form of a function definition:
```c
return_type function_name( parameter list )
{
body of the function
}
```
- <h4 id="function-name">Function Name:<h4>
 - no more than 31 characteres.
 - doesn't start with numbers.
 - doesn't have mathematical operators `+ - * /`.
 - doesn't have a symbols {@#$%...} except `_`.
 - don't use the same name 2 times in variable and funcs.
 - don't use the keywords of c language as name.
 
- Function Parameters:
 - int, long, short, float, double, char, char*, char[], signed, unsigned.

- Procedure is function but it doesn't return a value, we can say that `void` func is procedure, because it don't return a value like `int` `float`.

**the declaration of the function**

```c
int max(int num1, int num2);
```
Parameter names are not important in function declaration, only their type is
required, so the following is also a valid declaration:

```c
int max(int, int);
```
- the `const` keyword in functions it's important in some cases ```int Func_a(const type);```
- 

---
## Errors

- order of functions




---
## Exercice
