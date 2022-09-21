//Sum of Even Numbers After Queries
vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        
        int sum = 0;
        for(auto x: nums){
            if(x%2 == 0)
                sum+=x;
        }
        vector<int>ans;
        for(auto q: queries){
            int val = q[0], idx = q[1];
            if(nums[idx]%2 == 0) sum -= nums[idx];
            nums[idx] += val;
            if(nums[idx]%2 == 0) sum += nums[idx];
            ans.push_back(sum);
        }
        return ans;
    }
