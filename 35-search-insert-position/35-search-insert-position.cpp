class Solution {
public:
    int searchInsert(vector<int>& a, int k) {
        
         int s=0,e=a.size();
    if(k<a[0])
        return 0;
    if(k>a[e-1])
        return e;
        
      int index;
        
    while(s<=e){
        int mid=(s+e)/2;
        if(a[mid]==k){
            return mid;
        }
        else if(a[mid]>k){
           e=mid-1;
            
        }
        else{
            s=mid+1;
            
        }
       
    }
    return s;
    }
};