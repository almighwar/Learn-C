# Control statements

## Repeated Loops

- switch
- while
- do while
- for

---

## Some EXP

- `switch` function and `case`, `break`, `default` 
  - `switch` is like `if..else` but sometimes it's better than `if` function 
  - `break` come with `case` and it's important, Without it, things go wrong 
  - `default` is semi-like `else`, if the other cases are false, will be implemented
  
- `goto` statement can be useful, It's used to jump from one place to another, or break from complex loops.
  - put `the_name_of_place:` and to jump to it put `goto the_name_of_place;`

- To understand the loops it's from three  important things
    1. initialization: loop start in some loops we can ignore the initialization.
    2. condition: if condition false, it quit from loop, if u don't put it, loop will never end.
    3. incrementation: every loop has an incrementation either increases or decreases.
- `for` is become the popular one because it's easy to use, It has 3 arguments other than `while` and `do while` which only have the condition while the others is not within the functions themselves.
- The three arguments:
  - initialization, condition, incrementation
  
- continue it's repeat a loop, break to exit loop.

### detailed picture: 

**while and do...while:**

<img style="border-image-outset:5px;" src="/assets/whiles.jpg" alt="whileanddowhile" width="500px" height="400px">

**for:** 

<div style="display:flex; flex-direction: column;">
<img style=" border-image-outset: 5px;" src="/assets/for.jpg" alt="for" width="400px" height="450px">
<img style=" border-image-outset: 5px;" src="/assets/for-example.jpg" alt="for-example" width="400px" height="450px">
</div>

---

## Errors

1. `case +:` or anything like that.
2. notice when you put `break`, also condition of loop.
4. use a loop with empty arguments, mean's infinity loop.  
3. it entry to the `do-while` loop even if condition false.
4. `while(1)`, mean's infinity loop.  
5. use a keyword `continue` without condition, mean's infinity loop.

---

## Exercise :

1. Count from 100 to 0 with all types of loop
2. Count from 0 to 100 just lmoda3afat 2 with all types of loop
3. Tape numbers with their ASCII in table
4. Simple calculator with switch
5. Write program with 4 options:
    1. **Start Game** and when use it, it shows that the game has started
    2. **Option** It has four options , ٍSound, Display, Controls
    3. **About Game** It has your information
    4. **Exit Game**

