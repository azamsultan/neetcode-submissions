class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        

       
        vector<int>result(temperatures.size(),0);
        stack<pair<int,int>>s;

        for(int i=0;i<temperatures.size();++i){

            int t= temperatures[i];

            while(!s.empty()&&t>s.top().first){
                int sI= s.top().second;
                s.pop();

                result[sI]=i-sI;
            }

            s.push({t,i});

        }

        return result;
    }
};
