#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    int *p;
    int *q;
    int c; 
    p = &a;
    q = &b;
    a = 4;      //I am only changing, but the address of a is still the same, so the pointer will still points to the same varible "a", no matter how the a is being changed.
    b = 5;

    c = *p + *q;
    // cout<<"The value of a is(from the actual varaiable type) " <<a<<endl;
    // cout<<"The value of a from the pointer using *(astreix/indirection operation) "<<*p<<endl;
    
    cout<<"The value of *p + *q is: "<<c<<endl;
    return 0;
}