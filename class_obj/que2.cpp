// Question: WAP to take input of faculty details(ID, name, post, qualification, address) and display it.

#include<iostream>
#include<string>
using namespace std;

class dectx{
    int id;
    string name;
    string post;
    string qual;
    string address;

    public:
        void set_data();
        void display();
};

void dectx :: set_data(){
    cout<< "Enter name: ";
    cin>> name;

    cout<< "Enter ID: ";
    cin>> id;

    cout<< "Qualification: ";
    cin>> qual;

    cout<< "Post: ";
    cin>> post;

    cout<< "Address: ";
    cin>> address;
}

void dectx :: display(){
    cout<< "Name: "<< name<< endl
        << "ID: "<< id<< endl
        << "Qualification: "<< qual<< endl
        << "Post: "<< post<< endl
        << "Address: "<< address<< endl;
}

int main(){
    int n;

    cout<< "How many details you want to feed: ";
    cin>> n;
    
    dectx obj[n];

    for(int i= 0; i<n; i++){
        obj[i].set_data();
    }

    for (int i = 0; i < n; i++){
        obj[i].display();
    }
    
    return 0;
}