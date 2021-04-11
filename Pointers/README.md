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