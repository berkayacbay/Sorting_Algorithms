#ifndef _ALGORITHMSORTALL_
#define _ALGORITHMSORTALL_
#include "SelectionAlgorithm.h"
class AlgorithmSortAll :public SelectionAlgorithm{
public:
    AlgorithmSortAll(int k);
    int select();
};
#endif