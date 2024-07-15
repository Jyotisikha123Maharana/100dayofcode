class Solution {
public:
    bool isAnagram(string s, string t) {
        /*if (s.length()!=t.length()){
            return false;
        }
        int frequency[26]= {0};
        for (int i = 0 ; i <s.length() ; i++){
            frequency[s[i]-'a']++;
            frequency[t[i]-'a']--;

        }
        for ( int i = 0 ; i < 26 ; i++){
            if ( frequency[i]!= 0){
                return false ;
            }6585  
        }
        return false ;
    }*/
    if (s.length() != t.length()) {
        return false;
    }
    
    int charCount[26] = {0};  // Array to store the frequency of each character
    
    for (char c : s) {
        charCount[c - 'a']++;
    }
    
    for (char c : t) {
        charCount[c - 'a']--;
    }
    
    for (int count : charCount) {
        if (count != 0) {
            return false;
        }
    }
    
    return true;
}
};