#include<iostream>
#include<vector>

using namespace std;
int main()
{
    int a[] = {-5,-7,1,2,3,-7,-3,9,4,2,-3};
    vector<int> arr;
    int n = sizeof(a)/sizeof(int);
    for(int i = 0; i<n; i++)
    {
        if(a[i] < 0)
        {
            arr.push_back(a[i]);
        }
        // else if(a[i] == 0)
        // {
        //     arr.push_back(0);
        // }
    }
    for(int i = 0; i<n; i++)
    {
        if(a[i] == 0)
        {
            arr.push_back(a[i]);
        }
    }
    for(int i = 0; i<n; i++)
    {
        if(a[i] > 0)
        {
            arr.push_back(a[i]);
        }
    }
    for(int i=0; i<arr.size(); i++)
    {
        cout<<arr.at(i)<<" ";
    }
    return 0;
}