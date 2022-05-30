// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
   void f(int N,int from,int to,int aux,int n,int &count,vector<int>&ans){
       if(N==1){
           count++;
          if(count==n){
              ans.push_back(from);
              ans.push_back(to);
     
          }
           return;
           
       }
       
       
       f(N-1,from,aux,to,n,count,ans);
      f(1,from,to,aux,n,count,ans);
       f(N-1,aux,to,from,n,count,ans);
       
   }
    vector<int> shiftPile(int N, int n){
        // code here
        vector<int>ans;
        int from=1,to=3,aux=2,count=0;
        
        f(N,from,to,aux,n,count,ans);
    
        
        
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, n;
        cin>>N>>n;
        
        Solution ob;
        vector<int> ans = ob.shiftPile(N, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}  // } Driver Code Ends