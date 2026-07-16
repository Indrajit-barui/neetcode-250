class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<char,int>mp;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
             if(mp.count(board[i][j])) return false;
             if(board[i][j]!='.'){
mp[board[i][j]]++;
             }
             
            }
            mp.clear();
        }
        mp.clear();
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
             if(mp.count(board[j][i])) return false;
        if(board[j][i]!='.'){
mp[board[j][i]]++;
             }
            }
            mp.clear();
        }
        for(int i=0;i<9;i+=3){
            for(int j=0;j<9;j+=3){
               for(int row=i;row<i+3;row++){
                for(int col=j;col<j+3;col++){
            if(mp.count(board[row][col])) return false;
            if(board[row][col]!='.'){
             mp[board[row][col]]++;
            }
            
                }
               
               }
 mp.clear();
            }
            mp.clear();
        }
     return true;    
    }
};
