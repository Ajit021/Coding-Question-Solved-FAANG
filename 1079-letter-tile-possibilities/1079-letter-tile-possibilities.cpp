class Solution {
public:
    void h(string &tiles,int &count,int index){
        if(index==tiles.length()){
            return;
        }
        map<char,int>m;
        for(int j=index;j<tiles.length();j++){
            if(m[tiles[j]]==0){
                swap(tiles[index],tiles[j]);
                h(tiles,count,index+1);
                swap(tiles[index],tiles[j]);
                m[tiles[j]]++;
            count++;
            }
            
        }
    }
    int numTilePossibilities(string tiles) {
        int count=0,index=0;
        h(tiles,count,index);
        
        return count;
    }
};