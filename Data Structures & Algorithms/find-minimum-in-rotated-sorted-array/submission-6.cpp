class Solution {
public:
    int findMin(vector<int> &nums) {
        int l=0;
        int r= nums.size()-1;
        int min=0;
        while(l<=r){

            int m=(l+r)/2;

            if(nums[m]<=nums[r]){
                --r;
                min=nums[m];
            }else{
                ++l;
            }
        }
        return min;
    }
};
