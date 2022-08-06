vector<int> twoSum(vector<int>& nums, int target) {
        
        map<int, int>m;
        vector<int>ans;
        
        for(int i = 0; i < nums.size(); i++){
            
            int x = target - nums[i];
            
            if(m.find(x) != m.end()){
                ans.push_back(m.find(x) -> second);
                ans.push_back(i);
                break;
            }
            
            m.insert(pair<int, int>(nums[i],i));
        }
        
        return ans;
    }
