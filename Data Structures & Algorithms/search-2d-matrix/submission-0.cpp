class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        

        for(int i=0;i<matrix.size();++i){
            int l=0;
            int h=matrix[i].size()-1;

            while(l<=h){
                int m=(l+h)/2;

                if(target==matrix[i][m]){
                    return true;
                }
                if(target>matrix[i][m]){
                    l=m+1;
                }
                else if(target<matrix[i][m]){
                    h=m-1;
                }
            }
        }
        return false;
    }
};
