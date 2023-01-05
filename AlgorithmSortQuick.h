#ifndef _ALGORTIHMSORTQUICK_
#define _ALGORITHMSORTQUICK_
#include "SelectionAlgorithm.h"
class AlgorithmSortQuick : public SelectionAlgorithm {
public:
    AlgorithmSortQuick(int k);
   int select();
    int quickselect(int* numbers,int left, int right, int k);
};
#endif
