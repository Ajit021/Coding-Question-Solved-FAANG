// { Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    bool isPossible(int mid,int m,int a[],int n){
        int c=1;
        int sum=0;
        if(mid<0)
        return false;
        
        for(int i=0;i<n;i++){
            if(sum+a[i]>mid){
                c++;
                sum=a[i];
            }
            else{
                sum+=a[i];
            }
        }
        return c<=m;
        
    }
    int findPages(int a[], int n, int m) 
    {
        int low=INT_MIN,high=0;
        
        for(int i=0;i<n;i++){
            
           low=max(low,a[i]);
           high=high+a[i];
            
        }
        //if(m>n)
        // return -1;
        
      //  cout<<low<<" "<<high;
        
        while(low<=high){
            int mid=(low+high)/2;
            bool r=isPossible(mid,m,a,n);
            
            if(r == false){
              low=mid+1;  
            }else{
                bool r1=isPossible(mid-1,m,a,n);
                if(r1 ==false)
                  return mid;
                else{
                    high=mid-1;
                }
            }
        }
        return low;
        
        
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}
  // } Driver Code Ends