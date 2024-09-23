class Solution {
public:
    int findDuplicate(vector<int>& nums) {
      /* map<int, int >mp ;
        for( int i =0 ; i<nums.size(); i++){
              mp[nums[i]]++;
        }
        for(auto it : mp){
            if (it.second >= 2 ){
                return it.first ;
            }
        }
        return 1;*/
        int ans = -1 ;
        for ( int i = 0 ; i <nums.size(); i++){
            int index = abs(nums[i]);
            if ( nums[index]<0){
                return index;
            }
            nums[index]*=-1;
        }
        return ans ;
    }
};