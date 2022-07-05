class Solution {
public:
    int longestConsecutive(vector<int>& a) {
        int n=a.size();
        unordered_set<int>s;
     for(int i=0;i<n;i++){
         s.insert(a[i]);
     }
    int maxcount=0;
    for(int i=0;i<n;i++){
        if(!s.count(a[i]-1)){
            
            int cursum=a[i];
            int count=1;
            while(s.count(cursum+1)){
                cursum+=1;
                count+=1;
            }
            
            maxcount=max(maxcount,count);
        }
    }
    
    return maxcount;
    
    }
};