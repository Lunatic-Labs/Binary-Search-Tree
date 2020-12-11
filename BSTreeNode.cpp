#include "BSTreeNode.hpp"
#include <iostream>
// #include <stdio.h>

//constructor
template <typename T>
BSTreeNode<T>::BSTreeNode(const T& value) : right(nullptr),
left(nullptr),
data(value)
{
	//base order initialization happens in order they are declared
	//in code, not the order you list them here^
}

// copy constructor
template<typename T>
BSTreeNode<T>::BSTreeNode(const BSTreeNode<T> &rhs) : right(nullptr),
left(nullptr),
data(rhs.data)
{
	if (rhs.left != nullptr)
	{
		left = new BSTreeNode<T>(*rhs.left);
	}
	if (rhs.right != nullptr)
	{
		right = new BSTreeNode<T>(*rhs.right);
	}
}

//destructor
template <typename T>
BSTreeNode<T>::~BSTreeNode()
{
	delete left; 
	delete right;
}

template <typename T>
void BSTreeNode<T>::PrintInOrder()
{
	if (left != nullptr)
	{
		left->PrintInOrder();
	}
	// print yourself
	std::cout << data << " ";

	// print right
	if (right != nullptr)
	{
		right->PrintInOrder();
	}
}

template <typename T>
void BSTreeNode<T>::PrintPostOrder()
{
	if (left != nullptr)
	{
		left->PrintPostOrder();
	}
	// print right
	if (right != nullptr)
	{
		right->PrintPostOrder();
	}
	// print yourself
	std::cout << data << " ";
}

template <typename T>
void BSTreeNode<T>::PrintPreOrder()
{
	// print yourself
	std::cout << data << " ";
	if (left != nullptr)
	{
		left->PrintPreOrder();
	}
	// print right
	if (right != nullptr)
	{
		right->PrintPreOrder();
	}
}
	/*
	//continuation of big-brain strats
	// for now, do an In-Order print
	// 1 == inorder
	// 2 == preorder
	// 3 == postorder
	if (checkerNumber == 1)
	{
		if (left != nullptr)
		{
			left->Print(1);
		}

		std::cout << data << " ";

		if (right != nullptr)
		{
			right->Print(1);
		}
	}

	else if (checkerNumber == 2)
	{
		std::cout << data << " ";

		if (left != nullptr)
		{
			left->Print(2);
		}

		if (right != nullptr)
		{
			right->Print(2);
		}
	}

	else if (checkerNumber == 3)
	{
		if (left != nullptr)
		{
			left->Print(3);
		}

		if (right != nullptr)
		{
			right->Print(3);
		}

		std::cout << data << " ";
	}
	*/
	// this strat should hopefully work



template <typename T>
void BSTreeNode<T>::Insert(const T &value)
{
	if (value < data)
	{
		//insert to left
		if (left != nullptr)
		{
			left->Insert(value);
			if (balanceEnabled)
			{
				bf++;
				//rebalance();//this is a private function
				//add these two to BSTreeNode
			}
		}
		else
		{
			left = new BSTreeNode<T>(value);
		}
	}
	else
	{
		//insert to right
		//bf-- on this side,bet
		if (right != nullptr)
		{
			right->Insert(value);
			if (balanceEnabled)
			{
				bf--;
				//rebalance();
			}
		}
		else
		{
			right = new BSTreeNode<T>(value);
		}
	}
	//code here
}

template <typename T>
void BSTreeNode<T>::InsertAVL(const T& value)
{
	//code here
}

template <typename T>
bool BSTreeNode<T>::Search(const T& value)
{
	return true;
}
//BSTreeNode<T> * Search(const T& value);

template <typename T>
size_t BSTreeNode<T>::Size()
{
	if (left == nullptr && right == nullptr)
	{
		return 1;
	}
	else if (left == nullptr && right != nullptr)
	{
		return right->Size() + 1;
	}
	else if (left != nullptr && right == nullptr)
	{
		return left->Size() + 1;
	}

	return left->Size() + right->Size() + 1;

}

template <typename T>
void BSTreeNode<T>::Clear()
{
	if (left != nullptr && right != nullptr)
	{
		left->Clear();
		right->Clear();
	}
	else if (left != nullptr && right == nullptr)
	{
		left->Clear();
	}
	else if (left == nullptr && right != nullptr)
	{
		right->Clear();
	}
	return;
}


//DO THIS ONE FIRST
template <typename T>
void BSTreeNode<T>::PrintDOT()
{
	//if (theTree != nullptr)
	//graphviz
	//parent + "--" + left;
	//parent + "--" + right;
	if (left != nullptr)
	{
		left->PrintDOT();
	}
	//std::cout << data << "--" << std::endl;
	if (right != nullptr)
	{
		right->PrintDOT();
	}

	if (left == nullptr && right == nullptr)
	{
		std::cout << data << std::endl;
		return;
	}
	if (left != nullptr && right != nullptr)
	{
		//print self -- left child
		std::cout << data << " -- " << left->data << std::endl;
		//print self -- right child
		std::cout << data << " -- " << right->data << std::endl;
		return;
	}
	else if (left != nullptr && right == nullptr)
	{
		//print self -- left
		std::cout << data << " -- " << left->data << std::endl;
		return;
	}
	else if (left == nullptr && right != nullptr)
	{
		//print self -- right
		std::cout << data << " -- " << right->data << std::endl;
		return;
	}
	//std::cout << data << " -- " << std::endl;
}


template <typename T>
double BSTreeNode<T>::computeACE()
{
	return 0.0;
}

/*
template <typename T>
void BSTreeNode<T>::leftRotate(BSTreeNode* theNode)
{

}


template <typename T>
void BSTreeNode<T>::rightRotate(BSTreeNode* x)
{
	BSTreeNode* y = x->left;
}


template <typename T>
void BSTreeNode<T>::reBalance(BSTreeNode* theNode)
{

}
*/
template class BSTreeNode<int>;
template class BSTreeNode<float>;

