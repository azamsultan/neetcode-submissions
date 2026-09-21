class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());

        int l=1;
        int ht=piles[piles.size()-1];
        double k=ht;

        while(l<=ht){
            double m=(l+ht)/2;

            double count=0;

            for(int i=0;i<piles.size();++i){

                count+=ceil(piles[i]/m);
            }

            if(count<=h){
                k=min(k,m);
                ht=m-1;
            }else{
                l=m+1;
            }

        }
        return k;
    }
};
