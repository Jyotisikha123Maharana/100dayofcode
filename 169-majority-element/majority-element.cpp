class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int z;
         map<int , int>mp;
         for ( int i = 0 ; i < nums.size(); i++){
            mp[nums[i]]++;
         }
        for (auto it : mp){
        if (it.second>nums.size()/2){
            z = it.first;
            break;
           }
        }
        return z ;
    }
        
    
};