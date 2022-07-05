class Solution {
public:
    vector<vector<int>>ll;

void pp(vector<int>&arr, int i,int N,vector<int>&v,int sum){
    
//    p.push_back(sum);
    ll.push_back(v);
    
    
    if(i==N){
        
        return;
    }

    for(int j=i;j<N;j++){
        if(j==i || arr[j]!=arr[j-1]){
       v.push_back(arr[j]);
       pp(arr,j+1,N,v,sum); 
       v.pop_back();
        }
    }
    
 
    
}
    vector<vector<int>> subsetsWithDup(vector<int>& num) {
         ll.clear();
    int n=num.size();
  vector<int>v;
    v.clear();
    sort(num.begin(),num.end());
    pp(num,0,n,v,0);
     
     return ll;
    }
};