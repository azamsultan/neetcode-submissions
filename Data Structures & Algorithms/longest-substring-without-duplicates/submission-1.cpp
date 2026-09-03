class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char>c={};
        int max=0;
        int count=0;


        int l=0;
        for(int r=0;r<s.size();++r){
            while(c.contains(s[r])){
                c.erase(s[l]);
                l+=1;
            }
            c.insert(s[r]);
            if(max<r-l+1){
                max=r-l+1;
            }
        }

        
       return max;  
    }
};
