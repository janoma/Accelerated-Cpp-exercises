GCC=g++
CCFLAGS=-Wall -Wextra -Werror -O3

all: ex0-0 ex0-1 ex0-2 ex0 ex2 ex3 ex4 ex5-0 ex5-1 ex6 ex7

clean:
	rm -f ex4-0-0 ex4-0-1 ex4-0-2.o ex4-0 ex4-2 ex4-3 ex4-4 ex4-5-0 ex4-5-1 ex4-6.o ex4-7.o

ex0-0: ex4-0-0.cpp
	$(GCC) $(CCFLAGS) -o ex4-0-0 ex4-0-0.cpp

ex0-1: ex4-0-1.cpp
	$(GCC) $(CCFLAGS) -o ex4-0-1 ex4-0-1.cpp

ex0-2: ex4-0-2.cpp
	$(GCC) $(CCFLAGS) -o ex4-0-2.o ex4-0-2.cpp ex4-0-2/StudentInfo.cpp ex4-0-2/grade.cpp ex4-0-2/median.cpp

ex0: ex4-0.cpp
	$(GCC) $(CCFLAGS) -o ex4-0 ex4-0.cpp

ex2: ex4-2.cpp
	$(GCC) $(CCFLAGS) -o ex4-2 ex4-2.cpp

ex3: ex4-3.cpp
	$(GCC) $(CCFLAGS) -o ex4-3 ex4-3.cpp

ex4: ex4-4.cpp
	$(GCC) $(CCFLAGS) -o ex4-4 ex4-4.cpp

ex5-0: ex4-5-0.cpp
	$(GCC) $(CCFLAGS) -o ex4-5-0 ex4-5-0.cpp ex4-5/reader.cpp

ex5-1: ex4-5-1.cpp
	$(GCC) $(CCFLAGS) -o ex4-5-1 ex4-5-1.cpp ex4-5/reader.cpp

ex6: ex4-6.cpp
	$(GCC) $(CCFLAGS) -o ex4-6.o ex4-6.cpp ex4-6/StudentInfo.cpp ex4-6/median.cpp

ex7: ex4-7.cpp
	$(GCC) $(CCFLAGS) -o ex4-7.o ex4-7.cpp ex4-7/reader.cpp
