# <p align=center> Module 02 </p>

Module 02
Ad-hoc polymorphism, operators overload and canonical classes

### ex00 - My First Canonical Class

A class to represent canonical fixed point numbers.

### ex01 - Towards a more useful fixed point class

Added the following public constructors and public member functions to the fixed point class:
- A constructor that takes a constant integer as a parameter and that converts it to the correspondant fixed(8) point value.
- A constructor that takes a constant floating point as a parameter and that converts it to the correspondant fixed(8) point value.
- A member function float toFloat( void ) const; that converts the fixed point value to a floating point value.
- A member function int toInt( void ) const; that converts the fixed point value to an integer value.
- Overload to the « operator that inserts a floating point representation of the fixed point value into the parameter output stream.