class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>m;
        vector<int>v;
        v.push_back(1);
        m.push_back(v);
        
        for(int i=1;i<n;i++){
            v.clear();
            for(int j=0;j<=i;j++){
                if(i==j || j==0){
                    v.push_back(1);
                }
                else{
                   //cout<<"->"<<m[i-1][j-1]+m[i-1][j]<<"\n";
                    // m[i][j]=m[i-1][j-1]+m[i-1][j];
                    v.push_back(m[i-1][j-1]+m[i-1][j]);
                    //cout<<"mmmn";
                }
                
            }
            
            m.push_back(v);
            
            
        }
        
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 cout<<m[i][j]<<" ";
//             }
//             cout<<"\n";
//         }
        
        return m;
    }
};