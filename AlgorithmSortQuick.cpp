#include "AlgorithmSortQuick.h"
#include <iostream>
using namespace std;
AlgorithmSortQuick::AlgorithmSortQuick(int k):SelectionAlgorithm(k) {
this->k=k;
}
int AlgorithmSortQuick::select() {
    int n=0;
    cin>>n;
    int* numbers=new int[n];
    for (int i = 0; i < n; i++) {
        //store numbers
        int j;
        cin>>j;
        numbers[i]=j;
    }
   int returner= quickselect(numbers,0,n-1,k);
    return returner;
}

int AlgorithmSortQuick::quickselect(int *numbers, int left, int right, int k) {

    int returner=0;
    if(left+10>right){
        int change;
        int c;
        for(int i=0;i<right+1;i++){
            change=numbers[i];
            c=i;
            while(c>0&&numbers[c-1]<change){
                numbers[c]=numbers[c-1];
                c--;
            }
            numbers[c]=change;
        }
        returner=numbers[k-1];
        return returner;
    }else{
        int pivot=(left+right)/2;
        if(numbers[pivot]<numbers[right]){
            int change=numbers[pivot];
            numbers[pivot]=numbers[right];
            numbers[right]=change;
        }
        if(numbers[pivot]>numbers[left]){
            int change=numbers[pivot];
            numbers[pivot]=numbers[left];
            numbers[left]=change;
        }
        if(numbers[left]>numbers[right]){
            int change=numbers[left];
            numbers[left]=numbers[right];
            numbers[right]=change;
        }
        int change=numbers[right-1];
        numbers[right-1]=numbers[pivot];
        numbers[pivot]=change;
int lp=left;
int rp=right-1;
while(lp<rp){
    lp++;
    if(numbers[lp]<pivot){
        rp--;
        if (numbers[rp]>pivot){
            if (lp<rp){
                int change=numbers[lp];
                numbers[lp]=numbers[rp];
                numbers[rp]=change;
            }
        }
    }
}
        int changer=numbers[lp];
        numbers[lp]=numbers[right-1];
        numbers[right-1]=changer;
pivot=left;
int size=pivot-left+1;
if(k<size){
    return quickselect(numbers,left,pivot-1,k);
}else if(k>size){
    return quickselect(numbers,pivot+1,right,k-size);
}else{
    return pivot;
}
    }

}
