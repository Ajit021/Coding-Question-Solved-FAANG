class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
   
        int p1=m-1;
    int p2=n-1;
    int i=a.size()-1;
    
    while(p2>=0){
        if(p1>=0 && a[p1]>b[p2]){
            a[i--]=a[p1--];
        }
        else {
            a[i--]=b[p2--];
        }
        // for(int j=0;i<a.size();j++)
        //     cout<<a[i]<<" ";
        // cout<<"\n";
    }
    

    }
};