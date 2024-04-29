// & => Address of 
// * => Value at address
// * => It is a special variable, which can store address of another variable

#include<iostream>
using namespace std;
int main() {
    int a = 10;
    int *pointA = &a;
    cout<<&a<<" "<<pointA<<" "<<&pointA<<endl;
    cout<<pointA<<" "<<*pointA<<endl;
    return 0;
}