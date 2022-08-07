vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        sort(nums.begin(), nums.end());
        vector<vector<int>>ans;
        int n = nums.size();
        
        for(int i = 0; i < n-3; i++){
            if(i > 0 && nums[i]==nums[i-1])
                continue;
            for(int j = i+1; j < n-2; j++){
                if(j > i+1 && nums[j]==nums[j-1])
                    continue;
                
                long long sum3 = nums[i] + nums[j];
                long long int sum = target - (sum3);
                int l = j+1, h = n-1;
                
                while(l < h){
                    long long int sum2 = nums[l] + nums[h];
                    if(sum2 == sum){
                        vector<int>newAns = {nums[i], nums[j], nums[l], nums[h]};
                        ans.push_back(newAns);
                        
                        while(l<h && nums[l] == nums[l+1])
                            l++;
                        while(l<h && nums[h] == nums[h-1])
                            h--;
                        l++;
                        h--;
                    }
                    else if(sum2 < sum)
                        l++;
                    else
                        h--;
                }
                
            }
        }
       return ans; 
        
    }
