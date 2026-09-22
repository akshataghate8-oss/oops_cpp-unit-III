Object Oriented Programming with C++
Unit III – Polymorphism

Student Name: Akshata Ghate
Course: Object Oriented Programming with C++
Unit: Unit III – Polymorphism
Year: Second Year Engineering
Language: C++

📌 About This Unit

This unit introduces Polymorphism in C++. Polymorphism means "many forms" and allows the same function, operator, or interface to behave differently in different situations.

The unit covers both compile-time polymorphism and run-time polymorphism, along with function overloading, operator overloading, virtual functions, pure virtual functions, abstract classes, and virtual destructors.

📚 Topics Covered
1. Introduction to Polymorphism
Meaning and concept of polymorphism
Importance of polymorphism in OOP
Types of polymorphism
2. Types of Polymorphism
Compile-Time Polymorphism
Run-Time Polymorphism
3. Operator Overloading
Concept of overloading
Operator overloading in C++
Advantages and applications
4. Unary Operator Overloading

Overloading operators that work on a single operand.

Examples:

++
--
-
!
5. Binary Operator Overloading

Overloading operators that work on two operands.

Examples:

+
-
*
/
==
6. Function Overloading

Creating multiple functions with the same name but with different:

Number of parameters
Type of parameters
Order of parameters
7. Run-Time Polymorphism

Run-time polymorphism allows the appropriate function to be selected during program execution.

It includes:

Pointers to Base Class
Virtual Functions
Function Overriding
8. Virtual Function

A virtual function is a member function declared using the virtual keyword.

It supports run-time polymorphism and allows a derived class function to be called through a base-class pointer.

9. Pure Virtual Function

A pure virtual function is declared by assigning = 0.

Example:

virtual void display() = 0;

A class containing a pure virtual function becomes an abstract class.

10. Virtual Table

A virtual table (vtable) is associated with classes that use virtual functions and supports run-time selection of the appropriate overridden function.

11. Virtual Destructor

A virtual destructor is useful when objects of derived classes are deleted through a base-class pointer.

Example:

virtual ~Base()
{
}
12. Abstract Base Class

An abstract base class contains at least one pure virtual function and cannot be instantiated directly.
