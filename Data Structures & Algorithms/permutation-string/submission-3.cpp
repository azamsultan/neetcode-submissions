class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        //slide window start at first index
        //check if that char is in s1
        //if yes inccrease wndow size to next elm and check that
        //if not resize window to its next elem and check that one
        //keeps going until a count of the substring size is equal to s1 size

        // 
        vector<int>c1(26,0);
        vector<int>c2(26,0);

        for(char c: s1){
            c1[c-'a']++;
        }
        int l=0;

        for(int r=0;r<s2.size();++r){
            c2[s2[r]-'a']++;

            if(r-l+1>s1.size()){
                c2[s2[l]-'a']--;
                ++l;
            }

            if(c1==c2){
                return true;
            }
        }
        
        return false;

    }
};
