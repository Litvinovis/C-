# <p align=center> Module 03 </p>

Module 03
Inheritance, diamond inheritance.

### ex00 - Aaaaand... OPEN!

The class will be called FragTrap, have the following attributes, initialized to the specified values:
• Hit points (100)
• Max hit points (100)
• Energy points (100)
• Max energy points (100)
• Level (1)
• Name (Parameter of constructor)
• Melee attack damage (30)
• Ranged attack damage (20)
• Armor damage reduction (5)

It have a few functions to make it more life-like:
• rangedAttack(std::string const & target)
• meleeAttack(std::string const & target)
• takeDamage(unsigned int amount)

### ex01 - Serena, my love!

Now you we make another one.
The class will be named ScavTrap, and will have these attributes:
• Hit points (100)
• Max hit points (100)
• Energy points (50)
• Max energy points (50)
• Level (1)
• Name (Parameter of constructor)
• Melee attack damage (20)
• Ranged attack damage (15)
• Armor damage reduction (3)
Add the same functions as in the FragTrap, but the constructor, destructor, and attacks have to use different outputs. After all, a Claptrap has to have some measure of individuality.

### ex02 - Repetitive work

Now make a ClapTrap class, that both FragTrap and ScavTrap will inherit from The ClapTrap class will have its own construction and destruction messages. 
It will put all the common functions in the ClapTrap class, but the specific functions remain where they are. Also, proper construction/destruction chaining present (When build a FragTrap start by building a ClapTrap... Destruction is in reverse order).

### ex03 - Now it’s easier!

Using everything before, make a NinjaTrap class, with the following attributes:
• Hit points (60)
• Max hit points (60)
• Energy points (120)
• Max energy points (120)
• Level (1)
• Name (Parameter of constructor)
• Melee attack damage (60)
• Ranged attack damage (5)
• Armor damage reduction (0)

Its special attack the ninjaShoebox function. There are multiple functions with the same signature, each taking a reference to a different Claptrap as parameter (including the NinjaTrap), and having a different action.

### ex04 - Ultimate assault shoebox

Now, we combine the best of both by making a Claptrap that’s half Fragtrap, half Ninjatrap.
It named SuperTrap, and it inherit from both the FragTrap AND the NinjaTrap.

Its attributes and functions will be chosen from either of its parent classes:
• Hit points (Fragtrap)
• Max hit points (Fragtrap)
• Energy points (Ninjatrap)
• Max energy points (Ninjatrap)
• Level (1)
• Name (Parameter of constructor)
• Melee attack damage (Ninjatrap)
• Ranged attack damage (Fragtrap)
• Armor damage reduction (Fragtrap)
• rangedAttack (Fragtrap)
• meleeAttack (Ninjatrap)

It have the special attacks of both.
The Claptrap part of the Supertrap created just once.

