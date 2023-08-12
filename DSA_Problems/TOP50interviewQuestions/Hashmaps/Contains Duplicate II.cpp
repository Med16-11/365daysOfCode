bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int count = 0;
        unordered_map<int, int>mp;
        for(int i = 0; i < nums.size(); i++){
            if(mp.count(nums[i])){
                if(abs(i-mp[nums[i]] <= k)){
                    return true;
                }
            }
            mp[nums[i]] = i;
        }
        return false;
    }
