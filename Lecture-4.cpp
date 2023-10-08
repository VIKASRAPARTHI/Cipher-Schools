#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cout<<"The input 4 integers a, b, c, d"<<endl;

    //statement : a>b
    cin>>a;
    cin>>b;
    cout<<(a>b && c>d);     //And
    cout<<(a>b || c>d);     //Or
    //c++ interprets true as 1
    //c++ interprets false as 0
}