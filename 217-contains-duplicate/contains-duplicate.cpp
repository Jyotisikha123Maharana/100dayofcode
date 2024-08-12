class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        /*map<int, int> mp ;
        int n = nums.size();
        for ( int i = 0 ; i < n ; i++){
            mp[nums[i]]++;
        }
        for ( auto i : mp){
            if ( i.second >= 2){
                return true;
            }
            
        }
        return false;*/
       /* int n = nums.size();
      for ( int i = 0 ; i < n ; i++){
        for ( int j = 0 ; j < n ; j++){
            if (nums[i]== nums[j]){
                return true ;
            }
        }
        
      }
      return false ;*/
     /* int n = nums.size();
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {  // Increment j instead of i
        if (i != j && nums[i] == nums[j]) {
            return true;
        }
    }
}
return false;*/

    unordered_set<int> numSet;
    
    for (int num : nums) {
        if (numSet.find(num) != numSet.end()) {
            return true; // Duplicate found in the set
        }
        numSet.insert(num); // Add unique element to the set
    }
    
    return false; // No duplicate found

}

    
};