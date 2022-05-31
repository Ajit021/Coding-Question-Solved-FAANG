// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	// function to return sum of elements
	// in an array of size n
	int k(int i,int j,int *a){
	    if(i==j)
	    {
	        //cout<<a[i]<<"\n";
	        return a[i];
	    }
	    int m=(i+j)/2;
	    
	    int x= k(i,m,a) ;
	    int y=k(m+1,j,a);
	    //cout<<"x-"<<x<<" "<<"y-"<<y<<" "<<x+y<<"\n";
	    return x+y;
	    
	    
	    
	}
	int sum(int a[], int n) {
	     return k(0,n-1,a);
	    
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.sum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends