college: main.o user.o admin.o teacher.o student.o
	g++ main.o user.o admin.o teacher.o student.o -o college

main.o: main.cpp
	g++ -c main.cpp

user.o: user.cpp	
	g++ -c user.cpp

admin.o: admin.cpp
	g++ -c admin.cpp

teacher.o: teacher.cpp
	g++ -c teacher.cpp

student.o: student.cpp
	g++ -c student.cpp

clean:
	rm *.o college
