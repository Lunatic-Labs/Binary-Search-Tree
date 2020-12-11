#ifndef BSTreeNode_hpp
#define BSTreeNode_hpp


#include <stdio.h>

template <typename T>
class BSTreeNode
{
private:
	BSTreeNode<T> *right; //pointer to right child
	BSTreeNode<T> *left; //pointer to left child
	BSTreeNode<T> *parent; //pointer to parent
	T data; //value inside node
	bool balanceEnabled = false;
	int bf = 0; //balance factor

public:
	BSTreeNode(const T& value);
	BSTreeNode(const BSTreeNode &rhs);
	const BSTreeNode<T> & operator=(const BSTreeNode &rhs);
	~BSTreeNode();

	void Insert(const T& value);
	void InsertAVL(const T& value);
	bool Search(const T& value);

	//BSTreeNode<T> * Search(const T& value);

	size_t Size();
	void Clear();
	void PrintInOrder();
	void PrintPreOrder();
	void PrintPostOrder();
	void PrintDOT();

	// get/set for balancedEnabled here

// void leftRotate(BSTreeNode* theNode);
// void rightRotate(BSTreeNode* x);
// void reBalance(BSTreeNode* theNode);

	double computeACE();
};

#endif /* BSTreeNode_hpp */