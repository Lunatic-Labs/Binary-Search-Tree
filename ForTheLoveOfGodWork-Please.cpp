// ForTheLoveOfGodWork-Please.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "BSTree.hpp"

int main(int argc, const char *argv[])
{
	IBSTree<float> *floatTree = new BSTree<float>();

	floatTree->Insert(10.0f);
	floatTree->Insert(15.0f);
	floatTree->Insert(20.0f);
	floatTree->Insert(25.0f);
	floatTree->Insert(7.0f);
	floatTree->Insert(5.0f);

	IBSTree<float> *otherTree(floatTree);
	IBSTree<float> *anotherTree = otherTree;
	IBSTree<float> *ptr2Tree = new BSTree<float>((const BSTree<float>&) *anotherTree);
	std::size_t n = ptr2Tree->Size();
	std::printf("Size of Tree: %zu\n",n); //https://stackoverflow.com/questions/940087/whats-the-correct-way-to-use-printf-to-print-a-size-t
	//std::cout << "Size of tree: "; ptr2Tree->Size(); std::cout << std::endl;
	std::cout << "InOrder: "; ptr2Tree->PrintInOrder(); std::cout << std::endl;
	std::cout << "PostOrder: "; ptr2Tree->PrintPostOrder(); std::cout << std::endl;
	std::cout << "PreOrder: "; ptr2Tree->PrintPreOrder(); std::cout << std::endl;
	std::cout << std::endl << "This stuff is seperate now" << std::endl;
	ptr2Tree->PrintDOT();

	std::cout << std::endl;

	return 0;
}
//template class BSTreeNode<int>;
//template class BSTreeNode<float>;

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
