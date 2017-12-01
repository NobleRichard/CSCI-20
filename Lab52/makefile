# makefile example for CSCI 20

#name of the executable file
all: Lab52.exe

#creates the executable from both the object files
Lab52.exe: main.o class.o 
	g++ -Wall -g -o Lab52.exe main.o class.o 

#creates the main object file
main.o: main.cpp main.h class.cpp class.h
	g++ -Wall -g -c main.cpp

# creates the class object file
class.o: class.cpp class.h
	g++ -Wall -g -c class.cpp	
	
	
# to run the make file, type in make.