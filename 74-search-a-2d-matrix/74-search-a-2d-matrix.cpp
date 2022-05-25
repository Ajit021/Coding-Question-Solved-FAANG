class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix[0].size();
        int m=matrix.size();
        cout<<m<<" "<<n;
        int i=0;
        int j=n-1;
        
        while(i< m && j>=0){
            if(target==matrix[i][j])
                 return true;
            else if(target>matrix[i][j]){
                
                i++;
            }
            else 
                j--;
        }
        
        
        
        return false;
        
        
        
        
        
        
        
    }
};