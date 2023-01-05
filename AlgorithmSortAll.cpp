#include "AlgorithmSortAll.h"
#include <iostream>
using namespace std;
AlgorithmSortAll::AlgorithmSortAll(int k):SelectionAlgorithm(k){
this->k=k;
}

int AlgorithmSortAll::select() {
    int *pNum;
    int n;
    cin>>n;//n  2. taken number which is say how many number in the file
    pNum=new int[n];
    for (int i = 0; i < n; i++) {
        //store numbers
        int j;
        cin>>j;
        pNum[i]=j;
    }
    //sorting algorithm
    int change;
    int c;
    for(int i=0;i<n;i++){
        change=pNum[i];
        c=i;
        while(c>0&&pNum[c-1]<change){
            pNum[c]=pNum[c-1];
            c--;
        }
        pNum[c]=change;
    }
    int returner=pNum[k-1];
    delete []pNum;
    pNum=0;
    return returner;
}