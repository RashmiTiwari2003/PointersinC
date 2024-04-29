#include<iostream>
using namespace std;
int main() {
    int *arr[5] ;
    // for (int i=0; i<5; i++){
    //     int a = i;
    //     cout<<&a<<" ";
    //     arr[i] = &a;
    // }
    // cout<<endl;

    // for (int i=0; i<5; i++) {
    //     cout<<arr[i]<<" ";
    // }

    for (int i=0; i<5; i++){
        int *a = new int(1) ;
        *a = i;
        arr[i] = a;
    }

    for (int i=0; i<5; i++) {
        cout<<*arr[i]<<" ";
    }
}