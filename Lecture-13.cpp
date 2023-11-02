#include <iostream>
using namespace std;

int main() {
    // int a = 5;   

    // int *x;
    // x = &a;

    // cout<<"The address of a, which is stored in the pointer x is: "<<x<<" The value of x+1 is: "<<x+1<<endl;
    // cout<<"value of x+2 is: "<<x+2<<endl;
    // cout<<"value of x+3 is: "<<x+3<<endl;
    // cout<<"value of x+4 is: "<<x+4<<endl;

    // int a[5];
    // int *x;

    // x = &a[0];
    // int i;
    // for(i=0; i<6; i++) {
    //     cout<<&a[i]<<endl;
    // }
    // cout<<*x+2<<endl;      //Array elements are stored consecutively in the memory
    int j = 1, i = 2;;
    int *p1, *p2;
    cout<<p1<<endl;
    cout<<p2<<endl;
    p1 = p1 + 1;
    cout<<p1<<endl;
    p2 = p1 + j;
    cout<<p2<<endl;
    p2++;
    cout<<p2<<endl;
    p2 = p2 -(i + j);
    cout<<p2<<endl;
    return 0;
}