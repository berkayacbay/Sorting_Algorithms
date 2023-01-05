#ifndef _ALGORTIHMSORTK_
#define _ALGORITHMSORTK_
#include "SelectionAlgorithm.h"
class AlgorithmSortK :public SelectionAlgorithm{
public:
    AlgorithmSortK(int k);
    int select();
};
#endif