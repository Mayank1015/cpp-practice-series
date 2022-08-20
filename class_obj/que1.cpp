// Question: Write a program to calculate simple and compund intrest by using access operator.

#include <iostream>
#include <cmath>
using namespace std;

class intrest{
    float si, si_pri, si_rate, si_yr;
    float ci, ci_pri, ci_rate, ci_yr;

    public:
        void simple_intrest(float, float, float);
        void compound_intrest(float, float, float);
        void display_si();
        void display_ci();
};

void intrest :: simple_intrest(float psi, float rsi, float nsi){
    si_pri= psi;
    si_rate= rsi;
    si_yr= nsi;

    si= si_pri*si_rate*si_yr;
}

void intrest :: display_si(){
    cout<< "Simple Intrest at Principal Amount: Rs "<< si_pri
        << " with Annual Intrest Rate: "<< si_rate
        << " for "<< si_yr<< " Years"
        << " is Rs: "<< si<< endl;
}

void intrest :: compound_intrest(float pci, float rci, float nci){
    ci_pri= pci;
    ci_rate= rci;
    ci_yr= nci; 

    ci= ci_pri* pow((1+ci_rate),ci_yr) -ci_pri;
}

void intrest :: display_ci(){
    cout<< "Compound Intrest at Principal Amount: Rs "<< ci_pri
        << " with Annual Intrest Rate: "<< ci_rate
        << " and for "<< ci_yr<< " Years intrest is applied"
        <<" is Rs: "<< ci<< endl;
}

int main(){

    intrest i1;
    i1.simple_intrest(18000, 0.06, 3);
    i1.display_si();

}