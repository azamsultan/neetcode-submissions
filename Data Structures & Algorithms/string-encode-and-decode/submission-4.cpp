class Solution {
public:

    string encode(vector<string>& strs) {
        string coded="";
        for (string s : strs){
            coded+= to_string(s.size()) +"#"+ s; 

        }

        return coded;


        

    }

    vector<string> decode(string s) {

        vector<string> uncoded;
        string found="";
        int length;
        int i=0;
        while(i!=s.size()){
            int pos=s.find('#',i);
            length =stoi(s.substr(i,pos-i));
            uncoded.push_back(s.substr(pos+1,length));
            i=pos+1+length;

            
        }


        return uncoded;

    }
};
