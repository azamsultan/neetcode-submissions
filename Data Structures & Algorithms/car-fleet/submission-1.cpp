class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        
        //take i postion and speed check if eqaul to any others
        //if yes fleet added
        //if not dont add
        //add speed to position and check if its at destination
        //if yes set new position and speed to 0
        //else just set new position if it isnt more than postion ahead of it
        vector<double>fleets;
        map<int,int>pairs;
        for(int i=0;i<speed.size();++i){
            pairs[position[i]]=speed[i];
        }

        for(auto it=pairs.rbegin();it!=pairs.rend();++it){
            fleets.push_back((double)(target-it->first)/it->second);
            if(fleets.size()>=2&&fleets[fleets.size()-1]<=fleets[fleets.size()-2]){
                fleets.pop_back();
            }
        }
        return fleets.size();

    
    }
};
