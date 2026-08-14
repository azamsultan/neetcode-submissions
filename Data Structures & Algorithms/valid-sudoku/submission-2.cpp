class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for(int i=0;i<board.size();++i){
            int amount=0;
            set<char>nums;
            for(int j=0;j<board[i].size();++j){
                if(board[i][j]!='.'){
                    ++amount;
                    nums.insert(board[i][j]);
                }
                if(nums.size()!=amount){
                    return false;
                }
            }
        }
        for(int k =0; k<board.size();++k){
            int i=0;
            int col_amount=0;
            set<char>col_nums;
            while(i<board.size()){

                if(board[i][k]!='.'){
                    ++col_amount;
                    col_nums.insert(board[i][k]);

                }
                if(col_nums.size()!=col_amount){
                    return false;
                }
                ++i;
            } 
        }
        for(int row = 0; row<9; row+=3){
            for(int col=0;col<9;col+=3){

                int box_amount=0;
                set<char>box_nums;

                for(int g=row;g<row+3;++g){
                    for(int h=col; h<col+3;++h){

                        if(board[g][h]!='.'){
                            ++box_amount;
                            box_nums.insert(board[g][h]);
                        }
                    }
                    
                }
                if(box_nums.size()!=box_amount){
                    return false;
                }

            }
        }


        return true;
    }
};
