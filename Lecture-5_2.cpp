#include <iostream>
using namespace std;

int main() {
    // int a[5], i;
    // cout<<"Give 5 integers as input"<<endl;

    // for(i=0; i<5; i++) {
    //     cin>>a[i];
    // }
    // cout<<"The 5 given inputs are: "<<endl;
    // for(i=0; i<5; i++) {
    //     cout<<a[i];
    // }

    int a[9], i;
    cout<<"Give 5 integers as input"<<endl;
    for(i=0; i<10; i++) {
        cin>>a[i];
    }
    cout<<"The 5 given inputs are: "<<endl;
    for(i=9; i>=0; i--) {
        cout<<a[i]<<" ";
    }
}