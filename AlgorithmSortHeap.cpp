
//DESCRIPTION FROM HW03_HEAP.PDF
//build a min heap with the first k numbers (i.e., k times insert)
//then, compare the remaining N-k numbers with the root node (i.e., min. element)
//if a number is smaller than the root, ignore the number
//else, deleteMin (remove the root) and insert the new number
//return the root element
#include "AlgorithmSortHeap.h"
#include "BinaryHeap.h"
#include <iostream>

using namespace std;
AlgorithmSortHeap::AlgorithmSortHeap(int k): SelectionAlgorithm(k) { //constructor
this->k=k;
}

int AlgorithmSortHeap::select() {
    int n;
    cin>>n;
BinaryHeap* heap=new BinaryHeap(n); // create a heap
for(int i=0;i<k;i++){ //read the numbers from the file and add tem into heap
    int element;
    cin >> element;
    heap->insert(element);
}
int rootnode=heap->getMin();  //minimum number in heap
for(int i=k;i<n;i++){ //algorithm which is looks the number after Kth and if they bigger than root node it adds them into heap
    int element2;
    cin>>element2;
    if(element2<rootnode){
        //ignore number
    }else if(element2>=rootnode){
        heap->deleteMin();
        heap->insert(element2);
        rootnode=heap->getMin();
    }
}
delete heap;
return rootnode;
}

