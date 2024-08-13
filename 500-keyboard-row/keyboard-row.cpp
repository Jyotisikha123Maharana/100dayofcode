class Solution {
public:
    bool found(string s) {
        string s1 = "qwertyuiop";
        string s2 = "asdfghjkl";
        string s3 = "zxcvbnm";
        int count = 0;
        for (int i = 0; i < s.size(); i++) {
            char lowercaseChar = tolower(s[i]);
            for (int j = 0; j < s1.size(); j++) {
                if (lowercaseChar == s1[j]) {
                    if (count == 2 || count == 3) {
                        return false;
                    }
                    count = 1;
                }
            }
            for (int j = 0; j < s2.size(); j++) {
                if (lowercaseChar == s2[j]) {
                    if (count == 1 || count == 3) {
                        return false;
                    }
                    count = 2;
                }
            }
            for (int j = 0; j < s3.size(); j++) {
                if (lowercaseChar == s3[j]) {
                    if (count == 1 || count == 2) {
                        return false;
                    }
                    count = 3;
                }
            }
        }
        return true;
    }

    vector<string> findWords(vector<string>& words) {
        vector<string> ans;
        for (string s : words) {
            if (found(s)) {
                ans.push_back(s);
            }
        }
        
        return ans;
    }
};