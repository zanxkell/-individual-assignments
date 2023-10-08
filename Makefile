#
# Starter makefile for Assignment 5: Classy Zoo
# Typing 'make' or 'make zoo' will create an executable file for testing
#

# Start by defining variables for the compiler and compiler flags (makes it easy to change later)
# We can then use the variables later with $()

CC = g++
CFLAGS = -g -Wall -Wextra



# Simply calling 'make' will invoke whatever entry comes first in the file
# We've set it up to be the default entry (a good habit)

default:phonebook

# List the object files needed to create the executable file.  For this assignment:
# Zoo.o, main.o

phonebook:         phonebook.o   main.o
		$(CC) $(CFlags)  -o  phonebook phonebook.o  main.o

# First, the rule to create Zoo.o

phonebook.o:      phonebook.cpp phonebook.h
		$(CC) $(CFLAGS)  -c phonebook.cpp


# Then, the rule to create main.o

main.o: main.cpp phonebook.h
		$(CC) $(CFLAGS)  -c main.cpp

# Now the logic to clean things up! (invoked with 'make clean')

clean:
		$(RM)  $(phonebook) *.o *~          
