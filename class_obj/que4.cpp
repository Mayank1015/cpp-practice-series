/*
Question

Write a class to represent a vector. Include membetr functions to perform the following tasks:

(a) To create the vector
(b) To modify the value of a given element 
(c) TO multiply by a scalar values
(d) To display the vector in the form (10, 20, 30...)

WAP to test your class
*/

#include <iostream>
using namespace std;

class VectorA{
    int n;
    int *arr = new int[n];

    public:
        void createVector();
        void updateElement();
        void multiplyScalarValue();
        void displayVector();
};

void VectorA :: createVector(){
    cout<< "Enter the size of the vector: ";
    cin>> n;

    cout<< "Enter the elements of the vector.."<< endl;
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
}

void VectorA :: updateElement(){
    int choice;
    
    cout<< "1. Edit by index"<< endl
        << "2. Edit by value"<< endl
        << "3. Enter: ";
    cin>> choice;

    switch(choice){
        case 1:{
            int index, newValue;

            cout<< "Enter the index value: ";
            cin>> index;
            cout<< "Enter the new value: ";
            cin>> newValue;

            arr[index]= newValue;
            break;
        }

        case 2:{
            int element, newValue;
            
            cout<< "Enter the element: ";
            cin>> element;
            cout<< "Enter the new value: ";
            cin>> newValue;

            for(int i= 0; i<n; i++){
                if(arr[i]==element){
                    arr[i]= newValue;
                }
            }
            break;
        }

        default: cout<< "Wrong choice made.";
    }
}

void VectorA :: multiplyScalarValue(){
    int scrValue;
    cout<< "Enter the scalar value to be multiplyied: ";
    cin>> scrValue;

    for(int i= 0; i<n; i++){
        arr[i] *= scrValue;
    }
}

void VectorA :: displayVector(){
    for(int i=0; i<n; i++){
        cout<< arr[i]<< ",";
    }
}

int main(){
    int choice;

    VectorA v;
    v.createVector();

    do{
        cout<< "\n1. Modify the vector"<< endl
            << "2. Multiply by a scalar value"<< endl
            << "3. Print the vector"<< endl
            << "4. Exit"<< endl
            << "Enter here: ";
        cin>> choice;

        switch (choice){
        case 1:
            v.updateElement();
            break;

        case 2:
            v.multiplyScalarValue();
            break;
        
        case 3:
            v.displayVector();
            break;

        case 4:
            break;
        
        default:
            cout<< "Wrong Choice..."<< endl;
            break;
        }
    }while(choice!=4);

    return 0;
}