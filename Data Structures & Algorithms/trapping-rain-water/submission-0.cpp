class Solution {
public:
    int trap(vector<int>& height) {
        
        int r=height.size()-1;
        int l=0;
        int w=0;
        int lMax= height[l];
        int rMax=height[r];

        while(l<r){

            if(lMax<rMax){
                l+=1;
                lMax=max(lMax,height[l]);
                w+=lMax-height[l];
            }else{
                r-=1;
                rMax=max(rMax,height[r]);
                w+=rMax-height[r];
            }
        }
        return w;
    }
};
