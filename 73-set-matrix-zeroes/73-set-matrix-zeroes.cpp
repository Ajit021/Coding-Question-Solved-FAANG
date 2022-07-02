class Solution {
public:
    void setZeroes(vector<vector<int>>& a) {
        
        long long col=a[0].size(),row=a.size(),col0=1;
        
        for(int i=0;i<row;i++){
            if(a[i][0]==0)
                col0=0;
            for(int j=1;j<col;j++){
                if(a[i][j]==0){
                    a[i][0]=0;
                    a[0][j]=0;
                }
            }
        }
        
        
    for(int i=0 ; i<row;i++){
            for(int j=0 ; j<col ; j++){
               cout<<a[i][j]<<" ";
            }
        cout<<"\n";
        }
        
        
        for(int i=row-1 ; i>=0;i--){
            for(int j=col-1 ; j>=1 ; j--){
                if(a[i][0]==0 || a[0][j]==0)
                    a[i][j]=0;
                
            }
            if(col0==0)
                    a[i][0]=0;
        }
        
        
        
        
        
        
        
    }
};