int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;
        int min_prod = 1;
        int max_prod = 1;
        for(int i = 0; i < n; i++){
            int curr_prod1 = max_prod*nums[i];
            int curr_prod2 = min_prod*nums[i];
            max_prod = max({curr_prod2, nums[i], curr_prod1});
            min_prod = max({curr_prod1, nums[i], curr_prod2});
            maxi = max(maxi, max_prod);
        }
        return maxi;
    }
