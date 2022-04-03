// { Driver Code Starts
//Initial template for C++

#include <iostream>
using namespace std;

 // } Driver Code Ends
//User function template in C++

#include<algorithm>
class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        sort(a,a+n);
        sort(b,b+n);
        int count = 0;
        for(int i =0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(b[j] >= a[i])
                {
                    if(b[j] == a[i])
                    {
                        count++;
                    }
                }
                else
                {
                    break;
                }
            }
        }
        return count;
        
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    n = 5;
        m = 3;
	   
	    int a[] = {1,2,3,4,5};
        int b[] = {1,2,3};
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends