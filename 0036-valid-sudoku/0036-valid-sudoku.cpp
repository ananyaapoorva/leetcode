class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //row
        for(const auto& r:board){
            unordered_map<char,int>row;
            for(const auto& n:r){
                row[n]++;
            }
            for(const auto& p:row){
                if(p.second>1&&p.first!='.')
                    return false;
            }
        }
        

        //column
        for(int i=0;i<9;i++){ //col no.
            unordered_map<char,int>col;
            for(int j=0;j<9;j++){ //row no.
                char temp=board[j][i];
                col[temp]++;
            }
            for(const auto& p:col){
                if(p.second>1&&p.first!='.')
                    return false;
            }
        }

        //sub box
        for(int rowshift=0;rowshift<=6;rowshift+=3){
            for(int colshift=0;colshift<=6;colshift+=3){
                unordered_map<char,int>sub;
                for(int i=rowshift;i<rowshift+3;i++){
                    for(int j=colshift;j<colshift+3;j++){
                            sub[board[i][j]]++;
                    }
                }
                for(const auto& p:sub){
                    if(p.second>1&&p.first!='.')
                        return false;
                }
            }
        }

        return true;
    }
};