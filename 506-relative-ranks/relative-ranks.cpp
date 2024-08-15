class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        map<int ,string>mp;
        for ( int i = 0 ; i < score.size(); i++){
            mp[score[i]]='0';
        }
        int count = score.size();
        for (auto pr : mp){
            if (count == 3 ){
                mp[pr.first]="Bronze Medal";

            }
            else if (count == 2){
                mp[pr.first ] = "Silver Medal";
            }
            else if ( count == 1){
                mp[pr.first ]= "Gold Medal";
            }
            else {
                mp[pr.first] = to_string(count);
            }
            count -- ;
        }
        vector <string> ans;
        for ( int i = 0 ; i < score.size(); i++){
            ans.push_back(mp[score[i]]);
        }
        return ans ;
    }
};