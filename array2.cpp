#include<iostream>
using namespace std;
int main() {
    int arr[] = {1,2,3,4} ;
    for (int i=0; i<4; i++)
        printf("%d \n",*(arr+i)); // arr[i]
    return 0;
}

// spoiler : Array != pointer