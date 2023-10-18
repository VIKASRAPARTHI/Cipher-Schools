#include<iostream>
using namespace std;

int compare(int a, int b) {
    if(a>b) {
        return 1;
    }
    return 0;
}

int main() {
    int a = 34, b = 32;
    cout<<compare(a, b);
    return 0;
}