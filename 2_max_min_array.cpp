#include<iostream>

using namespace std;

int max(int *arr,int n)
{
    int max = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}
int min(int *arr,int n)
{
    int min = 999999;
    for(int i=0; i<n; i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main(){
    int maxim,minim,n;
    int a[] = {1,2,3,4,5,6,7,8,9};
    n = sizeof(a)/sizeof(int);
    maxim = max(a,n);
    minim = min(a,n);
    cout<<"Maximum number in array is: "<<maxim<<endl;
    cout<<"Minimum number in array is: " <<minim;
    return 0;
}