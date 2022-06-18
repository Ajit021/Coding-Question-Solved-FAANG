// { Driver Code Starts
// C++ program to find minimum swaps required
// to club all elements less than or equals
// to k together
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution
{
public:
    int minSwap(int a[], int n, int k) {
        // Complet the function
        int maxk=0;
        int count=0;
        for(int i =0 ;i < n; i++){
            if(a[i]<=k){
                maxk++;
            }
        }
        
        for(int i =0 ; i< maxk; i++){
            if(a[i]<=k){
                count++;
            }
        }
        
        int maxe=count;
        for(int i=maxk;i<n;i++){
            if(a[i]<=k){
                count+=1;
            }
            if(a[i-maxk]<=k){
                count-=1;
            }
            
            maxe=max(maxe,count);
        }
        
        return maxk-maxe;
        
        
        
        
    }
};


// { Driver Code Starts.

// Driver code
int main() {

	int t,n,k;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        Solution ob;
        cout << ob.minSwap(arr, n, k) << "\n";
    }
	return 0;
}
  // } Driver Code Ends