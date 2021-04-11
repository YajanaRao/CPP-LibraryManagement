# Pointer

## Pointer Declaration Syntax
The declaration of C++ takes the following syntax:

`datatype *variable_name;`

* The `datatype` is the base type of the pointer which must be a valid C++ data type.
* The `variable_name` is should be the name of the pointer variable.
* Asterisk used above for pointer declaration is similar to asterisk used to perform multiplication operation. It is the asterisk that marks the variable as a pointer.

```cpp
int    *x;    // a pointer to integer
double *x;    // a pointer to double
float  *x;    // a pointer to float
char   *ch;   // a pointer to a character
```

## Reference operator (&) and Deference operator (*)

The reference operator (&) returns the variable's address.

The dereference operator (*) helps us get the value that has been stored in a memory address.

## NULL Pointer
If there is no exact address that is to be assigned, then the pointer variable can be assigned a NULL. It should be done during the declaration. Such a pointer is known as a null pointer. Its value is zero and is defined in many standard libraries like iostream.

## Advantages of using Pointers
Here, are pros/benefits of using Pointers

Pointers are variables which store the address of other variables in C++.
More than one variable can be modified and returned by function using pointers.
Memory can be dynamically allocated and de-allocated using pointers.
Pointers help in simplifying the complexity of the program.
The execution speed of a program improves by using pointers.
