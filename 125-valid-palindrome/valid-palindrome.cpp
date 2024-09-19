class Solution {
public:
    bool isPalindrome(string s) {
        string alnumeric = "";
        int start = 0 ;
        
        for (char c: s){
            if (isalnum(c)){
               alnumeric += tolower(c);
            }
        }
        int end = alnumeric.size() - 1; 
      while (start <= end){
        if(alnumeric[start]!= alnumeric[end]){
            return false ;
        }
        else {
            start ++;
            end --;
        }
      }
      return true ;
    }
};