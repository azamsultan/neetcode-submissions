#include <algorithm>
class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max=0;
        int left=0;
        int right=heights.size()-1;

        while(left<right){
            int w= right-left;
            int h= min(heights[right],heights[left]);
            int a= w*h;

            if(a>max){
                max=a;
            }

            if(heights[right]<heights[left]){
                --right;
            }else{
                ++left;
            }
        }
        
        return max;

    }
};
 