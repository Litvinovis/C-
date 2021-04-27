# <p align=center> Module 00 </p>

Module 00
Namespace, class, member functions, stdio stream, initialization lists, static, const, and lots of basic stuff

### ex00 - Megaphone 

make all phrases louder

example:

```
./megaphone "shhhhh... I think the students are asleep..."

SHHHHH... I THINK THE STUDENTS ARE ASLEEP...

./megaphone Damnit " ! " "Sorry students, I thought this thing was off."

DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.

./megaphone

* LOUD AND UNBEARABLE FEEDBACK NOISE *

```

### ex01 - PhoneBook for 8 numbers 

Have few commands: 

EXIT:
◦ The program quits and the contacts are lost forever.

ADD:
◦ The program will prompt the user to input a new contact’s information, one field at a time, until every field is accounted for.
◦ A contact is defined by the following fields: first name, last name, nickname, login, postal address, email address, phone number, birthday date, favorite meal, underwear color and darkest secret.

SEARCH:
The program will display a list of the available non-empty contacts in 4 columns: index, first name, last name and nickname. Then the program will prompt again for the index of the desired entry and
displays the contact’s information, one field per line. If the input makes no sense, define a relevant behavior.

If input is discarded:
When a command has been correctly executed, the program waits for another ADD or SEARCH command until an EXIT command.