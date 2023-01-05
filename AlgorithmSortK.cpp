#include "AlgorithmSortK.h"
#include <iostream>

using namespace std;
AlgorithmSortK::AlgorithmSortK(int k) : SelectionAlgorithm(k) {
    this->k = k;
}
int AlgorithmSortK::select() {
    int n;
    int *pNum=new int[k];
    cin >> n;
    //takes first k number from txt
    for (int a = 0; a < k; a++) {
        cin >> pNum[a];
    }
    int change;
    int c;
    //sort the array
    for(int i=0;i<k;i++){
        change=pNum[i];
        c=i;
        while(c>0&&pNum[c-1]<change){
            pNum[c]=pNum[c-1];
            c--;
        }
        pNum[c]=change;
    }
    //k algorithm
    int rest;
   for(int i=k;i<n;i++){
       //read the rest
       cin>>rest;
       if (rest<pNum[k-1]){

       }else{
           pNum[k-1]=rest;
           int change;
           int c;
           //sort the array 2. time
           for(int i=0;i<k;i++){
               change=pNum[i];
               c=i;
               while(c>0&&pNum[c-1]<change){
                   pNum[c]=pNum[c-1];
                   c--;
               }
               pNum[c]=change;
           }
       }
   }
    int returner=pNum[k-1]; //save the number before delete
    delete []pNum;
return returner;
}