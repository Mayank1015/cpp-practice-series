/*
Question

WAP to add two vectors and display the resultant vector.
Note: Pass object as fuction argument
*/

#include <iostream>
using namespace std;

class Vectors{
    int n= 5;
    int *arr= new int[n];

    public: 
        void createVectors();
        void addVectors(Vectors);
};

void Vectors :: createVectors(){
    cout<< "Enter elements of Vector.."<< endl;
    for(int i= 0; i<n; i++){
        cin>> arr[i];
    }
}

void Vectors :: addVectors(Vectors v2){
    int *resultantVector= new int[n];

    for(int i= 0; i< n; i++){
        resultantVector[i]= arr[i]+ v2.arr[i];
    }

    cout<< "Resultant Vector.."<< endl;
    for(int i= 0; i< n; i++){
        cout<< resultantVector[i]<<" ";
    }
}

int main(){
    Vectors v;
    Vectors v2;

    v.createVectors();
    v2.createVectors();

    v.addVectors(v2);

    return 0;
}