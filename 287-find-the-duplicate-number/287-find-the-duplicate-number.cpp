class Solution {
public:
    int findDuplicate(vector<int>& v) {
        int d=-1;
        
        for(int i=0;i<v.size();i++){
            int k= abs(v[i]);
            if(v[k]<0)
            {
                d=k;
                break;
            }
            v[k]*=(-1);
        }
        return d;
    }
    
};