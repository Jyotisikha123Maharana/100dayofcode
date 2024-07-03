class Solution {
public:
    string removeDuplicates(string s) {
       /*string ans ="";
       int i =0; 
       while ( i < s.length()){
          if ( ans.length()-1>0 ){
            if ( ans[ans.length()-1 ]==s[i]){
                ans.pop_back();
            }
            else {
                ans.push_back(s[i]);
            }
          }
          else {
            ans.push_back(s[i]);
          }  
          i++;
          
         
       } 
        return ans ;
    }*/
    string ans ="";
        int index = 0;
        while(index<s.length()) {
            //same
            //ans ko rightmost char and string ka curr char
            if(ans.length()>0 && ans[ans.length()-1]==s[index]) {
                //pop from ans string
                ans.pop_back();
            }
            else {
                //push
                ans.push_back(s[index]);
            }
            index++;
        }
        return ans;
    }

};