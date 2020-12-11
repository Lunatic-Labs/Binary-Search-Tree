#ifndef BSTree_hpp
#define BSTree_hpp

#include <iostream>
#include <stdio.h>

#include "IBSTree.h"
#include "BSTreeNode.hpp"

template <typename T>
class BSTree : public IBSTree<T>
{
private:
	BSTreeNode<T> *theTree; // a.k.a myRoot...
 //ol balanceEnabled = false;

public:
	// done
	BSTree(); // ctor
	// done
	BSTree(const BSTree<T>& rhs); // copy ctor
	const BSTree<T> & operator = (const BSTree<T> &rhs); // assignment oper
	~BSTree(); // dtor

	// done
	void Insert(const T& data);
	// progress...
	bool Search(T& data);
	// in progress
	size_t Size();
	// in progress
	void Clear();
	// done
	bool IsEmpty();

	// done
	void PrintInOrder();
	void PrintPreOrder();
	void PrintPostOrder(); // InOrder, PreOrder, or PostOrder see text
	// in progress
	void PrintDOT();

	double ComputeACE();

};



#endif /* BSTree_hpp */
