class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
       int n=rain.size();
        int alice=0,bob=0;
        vector<string>res;
        for(int i=0;i<n;i++){
            if((i<n-1 && rain[i]==1 && rain[i+1]==1)&& rain[i]==1){
                if(alice<=bob){
                    res.push_back("Alice");
                    alice++;
                }
                 else{
                    res.push_back("Bob");
                    bob++;
                }}
                else if(i<n-1 && rain[i]==1 && rain[i+1]==1){
                    res.push_back("Alice");
                    alice++;
                }
                else if(rain[i]==1){
                    res.push_back("Bob");
                    bob++;
                }
                else{
            res.push_back("None");
             }
            }
    return res;
        }
    
};