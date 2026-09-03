class Solution {
public:
    int characterReplacement(string s, int k) {

        int l=0;
        int m=0;
        unordered_map<char,int>count;
        for(int r=0;r<s.size();++r){
            count[s[r]]++;
            int freq=0;
            for(auto& p:count){
                freq=max(freq,p.second);

            }
            while((r-l+1)-freq>k){
                count[s[l]]--;
                l++;
                freq=0;
                for(auto& p:count){
                    freq=max(freq,p.second);
                }

            }

            m=max(m,r-l+1);

        }
        return m;
        

    }
};
