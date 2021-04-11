# C++ Fundamental Data Types

The table below shows the fundamental data types, their meaning, and their sizes (in bytes):

| Data Type	| Meaning	| Size (in Bytes) |
| --- | -- |
| int |	Integer |	2 or 4 |
| float |	Floating-point |	4 |
| double |	Double Floating-point |	8 |
| char |	Character |	1 |
| wchar_t |	Wide Character	| 2 |
| bool |	Boolean |	1 |
| void |	Empty	| 0 |

3. C++ char

* Keyword char is used for characters.
* Its size is 1 byte.
* Characters in C++ are enclosed inside single quotes ' '.
* For example,
`char test = 'h';`

**Note**: In C++, an integer value is stored in a char variable rather than the character itself. To learn more, visit C++ characters.

4. C++ wchar_t

* Wide character wchar_t is similar to the char data type, except its size is 2 bytes instead of 1.
* It is used to represent characters that require more memory to represent them than a single char.
* For example,
`wchar_t test = L'ם'  // storing Hebrew character; `

Notice the letter L before the quotation marks.

**Note**: There are also two other fixed-size character types char16_t and char32_t introduced in C++11.


# C++ Expression

C++ expression consists of operators, constants, and variables which are arranged according to the rules of the language. It can also contain function calls which return values. An expression can consist of one or more operands, zero or more operators to compute a value. Every expression produces some value which is assigned to the variable with the help of an assignment operator.

Examples of C++ expression:

```c
(a+b) - c  
(x/y) -z  
4a2 - 5b +c  
(a+b) * (x+y)  
```


### An expression can be of following types:

* Constant expressions
* Integral expressions
* Float expressions
* Pointer expressions
* Relational expressions
* Logical expressions
* Bitwise expressions
* Special assignment expressions