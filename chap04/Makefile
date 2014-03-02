GCC=g++
CCFLAGS=-Wall -Wextra -Werror -O3

all: ex0-0 ex0-1 ex0 ex2 ex4 ex4

clean:
	rm -f ex4-0-0 ex4-0-1 ex4-0 ex4-2 ex4-3 ex4-4

ex0-0: ex4-0-0.cpp
	$(GCC) $(CCFLAGS) -o ex4-0-0 ex4-0-0.cpp

ex0-1: ex4-0-1.cpp
	$(GCC) $(CCFLAGS) -o ex4-0-1 ex4-0-1.cpp

ex0: ex4-0.cpp
	$(GCC) $(CCFLAGS) -o ex4-0 ex4-0.cpp

ex2: ex4-2.cpp
	$(GCC) $(CCFLAGS) -o ex4-2 ex4-2.cpp

ex3: ex4-3.cpp
	$(GCC) $(CCFLAGS) -o ex4-3 ex4-3.cpp

ex4: ex4-4.cpp
	$(GCC) $(CCFLAGS) -o ex4-4 ex4-4.cpp
