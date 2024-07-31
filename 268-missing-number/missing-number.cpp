class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int actual_sum = 0;
        int eSum = n*(n+1)/2;
        for( int i = 0 ; i < nums.size() ; i ++){
            actual_sum+=nums[i];
        }
        return eSum - actual_sum;
    }
};