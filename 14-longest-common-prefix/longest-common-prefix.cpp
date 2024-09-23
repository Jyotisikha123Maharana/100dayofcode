class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       /* string ans ;
        int i = 0 ;
        while(true){
            char curr_ch = 0 ;
            for( auto str : strs){
                if( i>=str.size()){
                    curr_ch = 0 ;
                    break;
                }
                if(curr_ch==0){
                    curr_ch = str[i];
                    break;
                }
            
                else if(str[i]!=curr_ch){
                     curr_ch = 0;
                    break;
                }
               }
            if(curr_ch == 0 ){
                break;
            }
            ans.push_back(curr_ch);
            i++;
        }
        return ans ;*/
         if (strs.empty()) {
        return "";
    }

    string ans;
    for (int i = 0; i < strs[0].size(); i++) {
        char curr_ch = strs[0][i];
        for (const string& str : strs) {
            if (i >= str.size() || str[i] != curr_ch) {
                return ans;
            }
        }
        ans.push_back(curr_ch);
    }
    return ans;
}
    
};