#include<iostream>
using namespace std;
int main() {
    int a = 10;
    int &b = a;
    b++;
    cout<<a<<" "<<b<<endl;
    cout<<&a<<" "<<&b<<endl;
    return 0;
}
