GCC=g++
CCFLAGS=-Wall -Wextra -Werror -O3

all: ex0 ex1 ex2 ex4 ex6 ex8 ex9 ex10

clean:
	rm -f ex0-0 ex0-1 ex0-2 ex0-4 ex0-6 ex0-8 ex0-9 ex0-10

ex0: ex0-0.cpp
	$(GCC) $(CCFLAGS) -o ex0-0 ex0-0.cpp

ex1: ex0-1.cpp
	$(GCC) $(CCFLAGS) -Wno-unused-value -o ex0-1 ex0-1.cpp

ex2: ex0-2.cpp
	$(GCC) $(CCFLAGS) -o ex0-2 ex0-2.cpp

ex4: ex0-4.cpp
	$(GCC) $(CCFLAGS) -o ex0-4 ex0-4.cpp

ex6: ex0-6.cpp
	$(GCC) $(CCFLAGS) -o ex0-6 ex0-6.cpp

ex8: ex0-8.cpp
	$(GCC) $(CCFLAGS) -o ex0-8 ex0-8.cpp

ex9: ex0-9.cpp
	$(GCC) $(CCFLAGS) -o ex0-9 ex0-9.cpp

ex10: ex0-10.cpp
	$(GCC) $(CCFLAGS) -o ex0-10 ex0-10.cpp

