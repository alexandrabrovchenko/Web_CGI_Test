all: cgi

cgi:  test.o 
	g++ -std=c++11 test.o cards.a -o hello_cgi -s 

test.o: test.cpp
	g++ -std=c++11 -c test.cpp 

clean:
	rm -rf *.o hello_cgi.exe

install:
	cp hello_cgi.exe C:\Apache24\cgi-bin\