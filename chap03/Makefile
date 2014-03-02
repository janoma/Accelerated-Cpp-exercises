GCC=g++
CCFLAGS=-Wall -Wextra -Werror -O3

all: ex0-0 ex0-1 ex2 ex3 ex4

clean:
	rm -f ex3-0-0 ex3-0-1 ex3-2 ex3-3 ex3-4

ex0-0: ex3-0-0.cpp
	$(GCC) $(CCFLAGS) -o ex3-0-0 ex3-0-0.cpp

ex0-1: ex3-0-1.cpp
	$(GCC) $(CCFLAGS) -o ex3-0-1 ex3-0-1.cpp

ex2: ex3-2.cpp
	$(GCC) $(CCFLAGS) -o ex3-2 ex3-2.cpp

ex3: ex3-3.cpp
	$(GCC) $(CCFLAGS) -o ex3-3 ex3-3.cpp

ex4: ex3-4.cpp
	$(GCC) $(CCFLAGS) -o ex3-4 ex3-4.cpp
