output: BSTree.o BSTreeNode.o ForTheLoveOfGodWork-Please.o
	g++ BSTree.o BSTreeNode.o ForTheLoveOfGodWork-Please.o -o output

ForTheLoveOfGod-Please.o: ForTheLoveOfGodWork-Please.cpp
	g++ -c ForTheLoveOfGodWork-Please.cpp

BSTree.o: BSTree.cpp BSTree.hpp IBSTree.h
	g++ -c BSTree.cpp

BSTreeNode.o: BSTreeNode.cpp BSTreeNode.hpp
	g++ -c BSTreeNode.cpp

clean:
	rm *.o output 