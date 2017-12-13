
#name of the executable file
all: Assignment5.exe

#creates the executable from both the object files
Assignment5.exe: main.o class.o 
	g++ -Wall -g -o Assignment5.exe main.o class.o 

#creates the main object file
main.o: main.cpp main.h class.cpp class.h
	g++ -Wall -g -c main.cpp

# creates the class object file
class.o: class.cpp class.h
	g++ -Wall -g -c class.cpp	
	
	
# to run the make file, type in make.