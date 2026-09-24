class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
         if (nums1.size() > nums2.size()) {
            return findMedianSortedArrays(nums2, nums1);
        }

        int m = nums1.size();
        int n = nums2.size();

        int total = m + n;
        int leftSize = (total + 1) / 2;

        int l = 0;
        int r = m;

        while (l <= r) {

            // cut in nums1
            int cut1 = l + (r - l) / 2;

            // cut in nums2
            int cut2 = leftSize - cut1;

            int Aleft;
            int Aright;
            int Bleft;
            int Bright;

            if (cut1 == 0)
                Aleft = INT_MIN;
            else
                Aleft = nums1[cut1 - 1];

            if (cut1 == m)
                Aright = INT_MAX;
            else
                Aright = nums1[cut1];

            if (cut2 == 0)
                Bleft = INT_MIN;
            else
                Bleft = nums2[cut2 - 1];

            if (cut2 == n)
                Bright = INT_MAX;
            else
                Bright = nums2[cut2];

            // Correct partition
            if (Aleft <= Bright && Bleft <= Aright) {

                if (total % 2 == 1) {
                    return max(Aleft, Bleft);
                }

                return (
                    max(Aleft, Bleft) +
                    min(Aright, Bright)
                ) / 2.0;
            }

            // Took too many elements from nums1
            if (Aleft > Bright) {
                r = cut1 - 1;
            }

            // Didn't take enough from nums1
            else {
                l = cut1 + 1;
            }
        }

        return 0.0;
    }
};
