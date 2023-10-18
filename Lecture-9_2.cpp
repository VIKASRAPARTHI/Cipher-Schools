#include <iostream>
using namespace std;

int sum(int a, int b){
    int Add_sum = a + b;
    return Add_sum;
}

int sum1(int a, int b);     // I have declared that a function called sum exits but not initialised
// Prototype of a function

int main() {
    int a,b;
    a = 10;
    b = 11;
    int c;
    c = sum(a, b);
    //int sum(int a, int b)    int a---> a, int b---> b

    cout<<c<<endl;      //these values are before I call the function "sum"
    cout<<a<<" "<<b<<endl;   //these values of a, b after I call the function "sum"
    cout<<sum1(a, b);
    return 0;
}

int sum1(int a, int b){
    return a+b;
}
