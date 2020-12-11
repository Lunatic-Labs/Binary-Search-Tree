#include "BSTree.hpp"

// constructor, have to be able to build a search tree

template <typename T>
// base member intialization section after the :
BSTree<T>::BSTree() : theTree(nullptr) // copy ctor semantics
{
	// this is it for this constructor
}

// constructor where someone passes in a tree...
template <typename T>
BSTree<T>::BSTree(const BSTree<T>& rhs) : theTree(nullptr)
{
	if (rhs.theTree != nullptr)
	{
		theTree = new BSTreeNode<T>(*rhs.theTree);
	}
}

// lets talk about making a destructor
template <typename T>
BSTree<T>::~BSTree()
{
	// what do you have to do to delete a Tree?
	// a tree is not much, b/c the root has a pointer
	// so if we invoke 'delete' on the pointer,
	// it would delete the tree and all children associated

	// what to do here? Hmmmm...
	delete theTree;
}

template <typename T>
bool BSTree<T>::IsEmpty()
{
	// theTree is root, if it does not exist, the tree is empty
	// so check theTree!
	return (theTree != nullptr);
}

template <typename T>
void BSTree<T>::PrintInOrder()
{
	// call print on the root of the tree
	// and therefore, the entire tree will be printed
	if (theTree != nullptr)
	{
		// public member functions should not go out
		// of their class and call other bublic functions
		// that are already part of their class

		// public class should call on private members
		// to determine their values

		// big brain strats to check what type of tracersal to print
		// 1 == inorder
		// 2 == preorder
		// 3 == postorder

		theTree->PrintInOrder();
	}
}

template <typename T>
void BSTree<T>::PrintPostOrder()
{
	// call print on the root of the tree
	// and therefore, the entire tree will be printed
	if (theTree != nullptr)
	{
		theTree->PrintPostOrder();
	}
}

template <typename T>
void BSTree<T>::PrintPreOrder()
{
	// call print on the root of the tree
	// and therefore, the entire tree will be printed
	if (theTree != nullptr)
	{
		theTree->PrintPreOrder();
	}
}



template <typename T>
void BSTree<T>::PrintDOT()
{
	std::cout << "graph" << std::endl << "{";
	if (theTree != nullptr)
	{
		theTree->PrintDOT();
	}
	std::cout << "}";
	//code here
}


template <typename T>
void BSTree<T>::Insert(const T& data)
{
	// two posibilities

	if (theTree == nullptr)
	{
		// meaning the tree is currently empty
		theTree = new BSTreeNode<T>(data); // use ctor of BSReeNode right here
	}
	else
	{
		// call insert on the root of the tree
		theTree->Insert(data);
	}
}
// ... if root node is not null

template <typename T>
bool BSTree<T>::Search(T& data)
{
	/*while (true)//data not found)
	{
		if (data > pointer)
		{
			go to right pointer
		}
		else if (data < pointer)
		{
			go to left pointer
		}
		else if (data == pointer)
		{
			return true;
		}
		else {
			return false;
		}
	}*/
	return false; //<- default
}


template <typename T>
size_t BSTree<T>::Size()
{
	if (theTree == nullptr)
	{
		return 0;
	}
	else 
	{
		return theTree->Size();
	}
	/*
	if (true)//node == nullptr)
	{
		return 0;
	}
	else
	{
		//recursive funtion maybe??
		return theTree->Size() + theTree->Size() + 1;
	}*/
}
template <typename T>
void BSTree<T>::Clear(/*node we wanna delete*/)
{
	//check if the tree isnt already empty
	if (theTree == nullptr)//node == nullptr)
	{
		return;
	}
	//literally more recursion like size to get left then right
	/*Clear(left);
	Clear(right);
	*/
	theTree->Clear();
	delete theTree;
	//delete the node
	//delete node;
}

template <typename T>
double BSTree<T>::ComputeACE()
{
	/* insert code here*/
	return 0;
}


// explicit template class instantiation
// little hack when we spread our code across multiple .cpp files
//template class BSTree<int>;
//template class BSTree<float>;


//IBSTree<int> * myTree = new BSTree<int>
//(BSTree<int> *) myTree->setPrintMode();

// Strategy:
// Get BST Insert working(no AVL yet) done maybe
// Print InOrder(Left,Root,Right) 
// PrintDOT 

template class BSTree<int>;
template class BSTree<float>;