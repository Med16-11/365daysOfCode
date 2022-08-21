int removeDuplicates(vector<int>& nums) {
        
        int n = nums.size();
        int i = 0;
        for(int j = 0; j < n; j++){
            if(nums[i] != nums[j])
                i++;
            nums[i] = nums[j];
        }
        return i+1;
    }
