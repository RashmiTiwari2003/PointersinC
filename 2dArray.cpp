#include<iostream>
using namespace std;
int main() {
    int arr[][3] = {{1,2,3},{4,5,6},{7,8,9}} ;
    printf("%d %d \n",arr,*arr);
    return 0;
}

/*
print(arr) => 420
print(arr+1) => ?
print(*(*(arr+2) + 1))

*/