// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
vector<int>p;
void pp(vector<int>&arr, int i,int N,vector<int>&v,int sum){
    
   p.push_back(sum);
    
    
    if(i==N){
        
        return;
    }
    
    for(int j=i;j<N;j++){
      
       sum+=arr[j];
       pp(arr,j+1,N,v,sum); 
       sum-=arr[j];
    }
    
 
    
}
    vector<int> subsetSums(vector<int> arr, int N)
    {
      
        vector<int>v;
    
      pp(arr,0,N,v,0);
     
        return p;
        
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends