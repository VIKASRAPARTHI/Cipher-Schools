#include <iostream>
using namespace std;

int main() {
    //Pre increment: ++i
    //Post Increment: i++

    // int i, j, k;
    // i=0, j=0, k=0;      //i=j=k=0

    // cout<<i<<" "<<j<<" "<<k<<endl;
    // j = i++;
    // cout<<i<<" "<<j<<" "<<k<<endl;
    // k = ++i;

    int n;
    cout<<"Enter the value: ";
    cin>>n;
    for(int i=1; i<=n; i++) {        //i++: called the update which happens after the iteration (part of a loop is completed )
        cout<<i<<" ";           //Block  which gets executed everytime
    }
    return 0;
}