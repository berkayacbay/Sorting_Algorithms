#include "TestBed.h"
#include <iostream>
#include <ctime>
using namespace std;
TestBed::TestBed(){

}
void TestBed::setAlgorithm(int algo, int k){
    if(algo==1){
        algorithm = new AlgorithmSortAll(k);
    }else if(algo==2){
        algorithm = new AlgorithmSortK(k);
    }else if(algo==3) {
        algorithm= new AlgorithmSortHeap(k);
    }else if(algo==4) {
        algorithm = new AlgorithmSortQuick(k);
    }else {
            cout<<"You can only select 1,2 or 3"<<endl;
        }
    }


void TestBed::execute(){

    // Time stamp before the computations
    clock_t start = clock();
    int a = algorithm->select();
/* Computations to be measured */
// Time stamp after the computations
    clock_t end = clock();
    double cpu_time = static_cast<double>( end - start ) /CLOCKS_PER_SEC;
    cout << "Result: "<< a << endl;
    cout << "Duration: "<< cpu_time << endl;
}
TestBed::~TestBed(){
    delete algorithm;
}
