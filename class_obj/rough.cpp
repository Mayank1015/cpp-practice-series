#include <iostream>
using namespace std;

class Try{
    int num;

    public:
        void setData();
        void getData();

};

void Try::setData(){
    cout<< "Enter n: ";
    cin>> num;
}
void Try::getData(){
    cout<< "num= "<< num;
}

int main(){
    Try t;

    t.setData();
    t.getData();

    return 0;
}