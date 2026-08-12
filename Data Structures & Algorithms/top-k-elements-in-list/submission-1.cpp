class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int>counts={};
        priority_queue<pair<int,int>> pq;
        vector <int>ans={};
        int i=0;

        for(int num: nums){
            counts[num]+=1;
        }
        for (auto& c : counts){
            pq.push({c.second,c.first});
        }
        while(!pq.empty() && ans.size()<k){
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;


        
    }

};
