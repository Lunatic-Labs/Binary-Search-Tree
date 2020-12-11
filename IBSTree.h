#ifndef IBSTree_h
#define IBSTree_h

#include <stddef.h>

//template<class T>
template <typename T>
class IBSTree
{
public:
	IBSTree() {}; //plain constructor
	IBSTree(const IBSTree<T> &rhs) {}; //copy constructor
	const IBSTree<T> & operator=(const IBSTree<T>& rhs) {}; //assignment operator

	virtual void Insert(const T &data) = 0;
	virtual bool Search(T &data) = 0;
	virtual size_t Size() = 0;
	virtual void Clear() = 0;
	virtual bool IsEmpty() = 0;

	virtual void PrintPreOrder() = 0;
	virtual void PrintPostOrder() = 0;
	virtual void PrintInOrder() = 0; //InOrder,PreOrder,PostOrder
	//virtual void Print(enum printType) = 0;
	virtual void PrintDOT() = 0;

	virtual double ComputeACE() = 0;
	virtual ~IBSTree() {}; //Destructor
};
#endif /* IBSTree_h */
