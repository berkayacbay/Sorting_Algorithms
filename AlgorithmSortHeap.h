#ifndef _ALGORTIHMSORTQUICK_
#define _ALGORITHMSORTQUICK_
#include "SelectionAlgorithm.h"
class AlgorithmSortHeap:public SelectionAlgorithm{
public:
    AlgorithmSortHeap(int k); //constructor
    int select();// returns the minimum number in the algorithm
};
#endif