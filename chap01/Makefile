GCC=g++
CCFLAGS=-Wall -Wextra -Werror -O3

all: ex1 ex3 ex4 ex6

clean:
	rm -f ex1-1 ex1-3 ex1-4 ex1-6

ex1: ex1-1.cpp
	$(GCC) $(CCFLAGS) -o ex1-1 ex1-1.cpp

ex3: ex1-3.cpp
	$(GCC) $(CCFLAGS) -o ex1-3 ex1-3.cpp

ex4: ex1-4.cpp
	$(GCC) $(CCFLAGS) -o ex1-4 ex1-4.cpp

ex6: ex1-6.cpp
	$(GCC) $(CCFLAGS) -o ex1-6 ex1-6.cpp
