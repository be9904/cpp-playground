CXXFLAGS = -Wall -O2
OBJS = foo.o bar.o main.o

main : $(OBJS)
	g++ $(CXXFLAGS) $(OBJS) -o main

foo.o : foo.h foo.cpp
	g++ $(CXXFLAGS) -c foo.cpp

bar.o : bar.h bar.cpp
	g++ $(CXXFLAGS) -c bar.cpp

main.o : main.cpp foo.h bar.h
	g++ $(CXXFLAGS) -c main.cpp

clean:
	rm -f $(OBJS) main