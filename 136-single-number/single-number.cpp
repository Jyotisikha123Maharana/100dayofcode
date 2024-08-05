class Solution {
public:
    int singleNumber(vector<int>& nums) {
        /*int n = nums.size();
        map<int, int>mp;
        for ( int i =0 ; i < n ; i++){
            mp[nums[i]]++;
        }
        for (auto i : mp){
            if (i.second >= 2)
            return 0;

        }
        
    }
    else {
            return 1;
        }*/
        int n = nums.size();
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[nums[i]]++;
    }
    for (auto i : mp) {
        if (i.second == 1) {
            return i.first;
        }
    }
    return -1;
    }
};