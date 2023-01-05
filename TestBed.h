#ifndef _TESTBED_
#define _TESTBED_
#include "SelectionAlgorithm.h"
#include "AlgorithmSortAll.h"
#include "AlgorithmSortK.h"
#include "AlgorithmSortHeap.h"
#include "AlgorithmSortQuick.h"
class TestBed{
public:
    TestBed();
    ~TestBed();
    void execute();
    void setAlgorithm(int,int);

private:
    SelectionAlgorithm *algorithm;
};
#endif
