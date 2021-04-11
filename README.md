# OOPS using C++


### Object-oriented programming –
 As the name suggests uses objects in programming. Object-oriented programming aims to implement real-world entities like inheritance, hiding, polymorphism, etc in programming. The main aim of OOP is to bind together the data and the functions that operate on them so that no other part of the code can access this data except that function.

 #### Characteristics of an Object Oriented Programming language
 1. Abstraction
 2. Encapsulation
 3. Class
 4. inheritance
 5. Object
 6. Polymorphism

 1. **Class**: The building block of C++ that leads to Object-Oriented programming is a Class. It is a user-defined data type, which holds its own data members and member functions, which can be accessed and used by creating an instance of that class. A class is like a blueprint for an object.

* A Class is a user-defined data-type which has data members and member functions.
* Data members are the data variables and member functions are the functions used to manipulate these variables and together these data members and member functions define the properties and behaviour of the objects in a Class.
* In the above example of class Car, the data member will be speed limit, mileage etc and member functions can apply brakes, increase speed etc.

We can say that a Class in C++ is a blue-print representing a group of objects which shares some common properties and behaviours.

2. **Object**: An Object is an identifiable entity with some characteristics and behaviour. An Object is an instance of a Class. When a class is defined, no memory is allocated but when it is instantiated (i.e. an object is created) memory is allocated.

3. **Encapsulation**: In normal terms, Encapsulation is defined as wrapping up of data and information under a single unit. In Object-Oriented Programming, Encapsulation is defined as binding together the data and the functions that manipulate them.

Encapsulation also leads to data abstraction or hiding. As using encapsulation also hides the data. In the above example, the data of any of the section like sales, finance or accounts are hidden from any other section.

4. **Abstraction**: Data abstraction is one of the most essential and important features of object-oriented programming in C++. Abstraction means displaying only essential information and hiding the details. Data abstraction refers to providing only essential information about the data to the outside world, hiding the background details or implementation.

* Abstraction using Classes: We can implement Abstraction in C++ using classes. The class helps us to group data members and member functions using available access specifiers. A Class can decide which data member will be visible to the outside world and which is not.

* Abstraction in Header files: One more type of abstraction in C++ can be header files. For example, consider the pow() method present in math.h header file. Whenever we need to calculate the power of a number, we simply call the function pow() present in the math.h header file and pass the numbers as arguments without knowing the underlying algorithm according to which the function is actually calculating the power of numbers.

5. **Polymorphism**: The word polymorphism means having many forms. In simple words, we can define polymorphism as the ability of a message to be displayed in more than one form.

An operation may exhibit different behaviours in different instances. The behaviour depends upon the types of data used in the operation.

C++ supports operator overloading and function overloading.

* Operator Overloading: The process of making an operator to exhibit different behaviours in different instances is known as operator overloading.
* Function Overloading: Function overloading is using a single function name to perform different types of tasks.
Polymorphism is extensively used in implementing inheritance.

6. **Inheritance**: The capability of a class to derive properties and characteristics from another class is called Inheritance. Inheritance is one of the most important features of Object-Oriented Programming.

* Sub Class: The class that inherits properties from another class is called Sub class or Derived Class.

* Super Class:The class whose properties are inherited by sub class is called Base Class or Super class.

* Reusability: Inheritance supports the concept of “reusability”, i.e. when we want to create a new class and there is already a class that includes some of the code that we want, we can derive our new class from the existing class. By doing this, we are reusing the fields and methods of the existing class.

| Procedural Oriented Programming	| Object Oriented Programming |
| ------------ | --------- |
| In procedural programming, program is divided into small parts called functions.	| In object oriented programming, program is divided into small parts called objects. |
| Procedural programming follows top down approach.	| Object oriented programming follows bottom up approach.
There is no access specifier in procedural programming.	Object oriented programming have access specifiers like private, public, protected etc. |
| Adding new data and function is not easy. |	Adding new data and function is easy. |
| Procedural programming does not have any proper way for hiding data so it is less secure. |	Object oriented programming provides data hiding so it is more secure. |
| In procedural programming, overloading is not possible. |	Overloading is possible in object oriented programming. |
| In procedural programming, function is more important than data. |	In object oriented programming, data is more important than function. |
| Procedural programming is based on unreal world.	|Object oriented programming is based on real world. |
| Examples: C, FORTRAN, Pascal, Basic etc.|	Examples: C++, Java, Python, C# etc. |
