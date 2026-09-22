class TimeMap {
public:
    unordered_map<string,vector<pair<int,string>>>t_map;
    TimeMap() {
    }
    
    void set(string key, string value, int timestamp) {

        t_map[key].push_back({timestamp,value});
        
    }
    
    string get(string key, int timestamp) {

        string res="";

        int l=0;
        int r=t_map[key].size()-1;
        auto& it=t_map[key];
        while(l<=r){

            int m=(l+r)/2;

            if(it[m].first==timestamp){
                res=it[m].second;
                return res;
            }
            if(it[m].first<=timestamp){
                res=it[m].second;
                l=m+1;
            }else{
                r=m-1;
            }
        }
        
        return res;
        
    }
};
