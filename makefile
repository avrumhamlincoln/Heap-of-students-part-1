students: main.o date.o address.o
	g++ -g main.o date.o address.o -o students

main.o: main.cpp date.h
	g++ -g -c main.cpp

address.o: address.cpp address.h
	g++ -g -c address.cpp

date.o: date.cpp date.h
	g++ -g -c date.cpp

run: students
	./students

clean:
	rm students
	rm *.o

debug:
	gdb students

valgrind:
	valgrind --leak-check=full ./students
