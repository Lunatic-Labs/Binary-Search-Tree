output: TimedSorter.o Sorter.o
	g++ TimedSorter.o Sorter.o -o output

ForTheLoveOfGod-Please.o: Sorter.cpp
	g++ -c Sorter.cpp

BSTree.o: TimedSorter.cpp
	g++ -c TimedSorter.cpp

clean:
	rm *.o output 
	