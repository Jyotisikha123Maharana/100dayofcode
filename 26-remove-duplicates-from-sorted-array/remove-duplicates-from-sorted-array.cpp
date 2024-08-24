class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        /*unordered_map<int,int>mp;
        for ( int i = 0 ; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        vector<int>unique;
        for (auto j : mp){
           unique.push_back(j.first) ;
        }
        */
    unordered_map<int, int>mp;
    for(int i =0 ; i < nums.size(); i++){
        mp[nums[i]]++;

    }
    nums.clear();
    for (auto it : mp){
        nums.push_back(it.first);
    }
            sort ( nums.begin(), nums.end());
            return nums.size();
    }  
    
};