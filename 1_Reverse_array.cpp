#include <iostream>

using namespace std;

int main(){
    int a[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(a)/sizeof(int);
    int reverse(int *a,int n);
    for(int i=n-1; i>=0 ; i--)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}