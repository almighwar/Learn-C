# Variables and Constants

- Variable and Constant 
- define (#define to define constants)
- int (For natural number 2 byte)
- float (Real numbers 4 byte) 
- [Difference bt float and double](https://www.quora.com/What-is-the-difference-between-float-and-double-in-C-language-How-is-it-stored-in-the-memory)
- double (Real numbers 8 byte)
- short (2 byte) and long (8 byte) `real numbers`
- char for littre 1 byte, also for a word or phrase

## Some Exp

**Bit:**
- a "bit" is atomic: the smallest unit of storage
- A bit stores just a 0 or 1
- "In the computer it's all 0's and 1's" ... bits
- Anything with two separate states can store 1 bit
- In a chip: electric charge = 0/1
- In a hard drive: spots of North/South magnetism = 0/1
- A bit is too small to be much use
- Group 8 bits together to make 1 byte 

For more information: [Bits and Bytes](https://web.stanford.edu/class/cs101/bits-bytes.html)

**Possible values for each type of variable:**

|Type|Size|Value (Chances, Possibility)|
|-|-|-|
|signed char & char|1 byte|-127 to 127|
|unsigned char & char|1 byte|0 to 255|
|signed int & int|1 byte|-32.767 to 32.768|
|unsigned int & int|1 byte|0 to 65.535|
|signed shor & short|1 byte|-32.767 to 32.768|
|unsigned short & short|1 byte|0 to 65.535|
|signed long & long|1 byte|-2.147.483.647 to 2.147.483.648|
|unsigned long & long|1 byte|0 to 4.294.967.295|

### Variable

```c
data_type Variable_Name = variable_value
```

### Constant

```c
const data_Type Variable_Name = variable_value
```

## Exercice: 

- Types of numbers from [Here](https://www.learn-c.org/en/Variables_and_Types).
- print two numbers : 3.14, 15.
- print 'A' insteaf of number 65 without var or const.
