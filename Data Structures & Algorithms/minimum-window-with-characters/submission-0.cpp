class Solution {
public:
    string minWindow(string s, string t) {
         if (t.size() > s.size()) {
            return "";
        }

        unordered_map<char, int> needCount;
        unordered_map<char, int> windowCount;

        for (char c : t) {
            needCount[c]++;
        }

        int need = needCount.size();
        int have = 0;

        int l = 0;

        int bestStart = 0;
        int bestLength = INT_MAX;

        for (int r = 0; r < s.size(); ++r) {

            char c = s[r];

            windowCount[c]++;

            if (needCount.contains(c) &&
                windowCount[c] == needCount[c]) {
                have++;
            }

            while (have == need) {

                if (r - l + 1 < bestLength) {
                    bestLength = r - l + 1;
                    bestStart = l;
                }

                char leftChar = s[l];

                windowCount[leftChar]--;

                if (needCount.contains(leftChar) &&
                    windowCount[leftChar] < needCount[leftChar]) {
                    have--;
                }

                l++;
            }
        }

        if (bestLength == INT_MAX) {
            return "";
        }

        return s.substr(bestStart, bestLength);
    }
        
    
};
