#include "BinaryHeap.h"
#include <iostream>
#include <cassert>
using namespace std;
BinaryHeap::BinaryHeap(int capacity) {//constructor
    this->capacity=capacity;
    heap =new int[capacity+1]; // ı add +1 for heap 0 is empty
    size=0;
}
void BinaryHeap::swap(int i, int j)  {
    int indexi=heap[i]; //takes the first number
    heap[i]=heap[j]; //did first node equal to second
    heap[j]=indexi; //did second node to first number
}
void BinaryHeap::insert(int element) { //adding method
    if(size<capacity){
        size++;
        int elementplace=size;
        heap[elementplace]=element; //on this line element is added to node
        while(equal1(elementplace)== false&&heap[elementplace]<heap[elementplace/2]){ //this while method for sorting
            swap(elementplace,elementplace/2);
            elementplace/=2;
        }

    }
}
void BinaryHeap::percolateDown(int hole) {
    int compare=hole*2;
    if (heap[compare] < heap[hole]&&hole*2<size) { //if the left child is small it changes hole and left child
        compare=hole*2;
        swap(hole,compare);
        percolateDown(compare); // recursive
    }
    if(heap[compare+1]<heap[hole]&&hole*2<size) {  //if the right child is smaller than left it changes hole and right child
        compare=hole*2+1;
        swap(hole,compare);
        percolateDown(compare); //recursive
    }

    }
    void BinaryHeap::deleteMin() {
        if (size>=1) {  //if size is smaller than 1 we can't delete
            heap[1] = heap[size];
                heap[size] = 0;
            size--;

            if(equal1(size)==false&&size>0) { //if the size is bigger than one it sorts the heap
                percolateDown(1);
            }
        }
        if(heap[1]>heap[2]&& equal1(size)== false){
            swap(1,2);
            percolateDown(2);
        }
    }
int BinaryHeap::getMin() {//returns the minimum number in heap
    if (size > 0) {
        return heap[1];
    } else {
        return -1;
    }
}
BinaryHeap::~BinaryHeap() {
    delete[] heap;
}
bool BinaryHeap::equal1(int k) { //extra method for size ==1
    if(k==1){
        return true;
    }else {
        return false;
    }
    }
