class Solution {
public:
    int maxProfit(vector<int>& prices) {


        
        int l=0;
        int r=1;

        int max=0;

        while(r<prices.size()){
            if (prices[l]<prices[r]){
                int p=prices[r]-prices[l];
                if(max<p){
                    max=p;
                }
            }else{
                l=r;
            }
            r+=1;
        }
        return max;

        

        





        // int j=0;
        // int max=0;

        // for(int i=0; i<prices.size();++i){
            
        //     while(j<prices.size()){
        //         int c=prices[j]-prices[i];

        //         if(c>=prices[i]&&c>=max){
        //             max=c;
        //         }
        //         ++j;
        //     }
        //     j=i+1;
        // }
        // return max;
    
    }
};
