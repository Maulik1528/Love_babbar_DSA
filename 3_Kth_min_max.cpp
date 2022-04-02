#include<algorithm>
#include<iostream>

using namespace std;

int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,0,54,12,77};
    int size = sizeof(a)/sizeof(int);
    sort(a,a+size);
    // for(int i=0; i<size; i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    cout<<"3rd Minimum element is: "<<a[2]<<endl;
    cout<<"4th Maximum element is: "<<a[size - 4];
    return 0;
}
