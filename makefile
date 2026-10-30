CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra -pedantic

.PHONY: all clean

all: Debug.out

Debug.out: Debug.cpp Cat.cpp Cat.h Animal.cpp Animal.h
	$(CXX) $(CXXFLAGS) Debug.cpp Cat.cpp Animal.cpp -o Debug.out

clean:
	rm -f Debug.out
