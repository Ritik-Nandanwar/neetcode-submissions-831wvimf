class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        map<vector<int>,set<char>> mpp;
        for(int i=0 ; i<9 ; i++){
            set<char> ss;
            for(int j=0 ; j<9 ; j++){
                if(ss.find(board[i][j]) != ss.end()){
                    cout<<"from row"<<endl;
                    cout<<"i,j => "<<i<<" "<<j<<endl;
                    return false;
                }
                else{
                    if(board[i][j] != '.')
                        ss.insert(board[i][j]);
                }
            }
        }
        mpp.clear();
        cout<<"size of map after clear "<<mpp.size() <<endl;
        for(int j=0 ; j<9 ; j++){
            set<char> ss;
            for(int i=0 ; i<9 ; i++){
                if(ss.find(board[i][j]) != ss.end()){
                    cout<<"from col"<<endl;
                    cout<<"i,j => "<<i<<" "<<j<<endl;
                    return false;
                }
                else{
                    if(board[i][j] != '.')
                        ss.insert(board[i][j]);
                }
            }
        }
        for(int i=0 ; i<9 ; i++){
            for(int j=0 ; j<9 ; j++){
                if(mpp[{i/3,j/3}].find(board[i][j]) != mpp[{i/3, j/3}].end()){
                    return false;
                }
                else
                    if(board[i][j] != '.')
                        mpp[{i/3,j/3}].insert(board[i][j]);
            }
        }
        return true;
    }
};
