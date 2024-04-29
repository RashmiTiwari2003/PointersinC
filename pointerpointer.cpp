#include<iostream>
using namespace std;
int main() {
    int a = 10;
    int *b = &a;
    int **c = &b;
    // cout<<c<<" "<<&b<<endl;
    // cout<<*c<<" "<<b<<endl;
    cout<<**c<<endl;
}

// &b = 420addr
// **c = *b
// c = 420
// *c = valueAt(c)
// *c = valueAt(420)
// *c = b ka chiz