class Solution {
public:
    int longestConsecutive(vector<int>& nums) {


        set<int>sorted_set(nums.begin(),nums.end());

        

        int longest =0;

        for(const auto& num : sorted_set){
            if( !sorted_set.contains(num-1)){
                int length=0;
                while(sorted_set.contains(num+length)){
                    length+=1;
                }
                if (length>longest){
                    longest=length;
                }
            }
        }

        return longest;
    }
};
