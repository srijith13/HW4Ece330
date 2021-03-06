all: employee.o test.o
	g++ employee.o test.o -o salary

employee.o: employee.cpp employee.h
	g++ -c employee.cpp

test.o: test.cpp employee.h
	g++ -c test.cpp

clean:
	rm *.o
	rm salary




