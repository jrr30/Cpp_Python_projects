#
# Makefile for project: Translate to Morse code
#
# created on: March 11, 2020
# Author: Jesus Rodriguez
#

# Variables
CC = g++
CFLAGS = -O2 -g -Wall -fmessage-length=0
OBJECTS = Translate_Morse_Main.o TextToMorse.o

# Target name
all: Translate

# Rule to create object files
Translate: $(OBJECTS)
	$(CC) -o Translate $(OBJECTS)

# Main object file that has a dependency on the files listed below
Translate_Morse_Main.o: Translate_Morse_Main.cpp TextToMorse.h TextToMorse.cpp
	$(CC) $(CFLAGS) -c Translate_Morse_Main.cpp
	
# Class object file that has a dependency on the files listed below
TextToMorse.o: TextToMorse.cpp TextToMorse.h
	$(CC) $(CFLAGS) -c TextToMorse.cpp

# Rule to clean up the project
.PHONY: clean
clean:
	rm -rf *o Translate