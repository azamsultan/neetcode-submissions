class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        //if not empty for stack
        //outside if push the hight to stack
        //check if heght before current is <= curent
        //width would be increased 
        //next height sees if currnt height is <= stack top height
        //if not pop current top thne add current height reset width

        stack<pair<int,int>>c;
        int maxA=0;

        for(int i=0;i<heights.size();++i ){
            int h = heights[i];

            int s=i;

            while(!c.empty()&&c.top().second>h){
                int index=c.top().first;
                int height=c.top().second;
                c.pop();

                maxA=max(maxA,height*(i-index));

                s=index;
            }

            c.push({s,h});
            

        }


        while(!c.empty()){

            int index=c.top().first;
            int height=c.top().second;

            c.pop();

            maxA=max(maxA,height*((int)heights.size()-index));
        }

        return maxA;
    }
};
