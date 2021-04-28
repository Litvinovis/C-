# <p align=center> Module 01 </p>

Module 01
Memory allocation, References, Pointers to members, File streams

### ex00 - Pony class 

with two functions, ponyOnTheHeap and ponyOnTheStack, in which allocate a Pony, and do some stuff. The first Pony allocated on the heap, the second one allocated on the stack.

### ex01 - Plumbing problem

function, after correcting the memory leak contained in it.

### ex02 - Plucking some brains

Zombie class, it contain a type, a name and an announce() member function. Here are randomChump function, that create a Zombie with a random name, and make it announce itself.

### ex03 - Moar brainz!

ZombieHorde class - have a constructor that takes an integer N. At creation, it allocate N Zombie objects, with random names and store them.

### ex04 - HI THIS IS BRAIN

A program in which create a string containing "HI THIS IS BRAIN", a pointer to it, and a reference to it. Then display it using the pointer, and finally display it using the reference.

### ex05 - HI BRAIN THIS IS HUMAN

A Brain class, with befits a brain. It will have an identify() function, that returns a string containing the brain’s address in memory, in hexadecimal format, prefixed by 0x. And Human class, that has a constant Brain attribute, with the same lifetime. It has an identify() function, that just calls the identify() function of its Brain and returns its result. So this code compiles and displays two identical adresses.

### ex06 - Unnecessary violence

A Weapon class, that has a type string, and a getType that returns a const reference to this string. Also has a setType classes, HumanA and HumanB, that both have a Weapon, a name, and an attack() function that displays something like:

```
NAME attacks with his WEAPON_TYPE
```

### ex07 - Sed is for losers

A program called replace that takes a filename and two strings, that are NOT empty. It will open the file, and write its contents to FILENAME.replace, after replacing every occurence of s1 with s2.

### ex08 - I ain’t heard of no fancy switches

Added three function in Human class that will simply output something to the standard output so you can see they’ve been called, and the last one will call the appropriate action on the appropriate target.
