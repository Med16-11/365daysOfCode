//Maximum Subarray Sum in an Array
int maxSubArray(vector<int>& nums) {
        
        int sum_max = INT_MIN;
        int sum = 0;
        
        for(int i = 0; i< nums.size(); i++){
            sum+=nums[i];
            if(sum>sum_max){
                sum_max = sum;
            }
            if(sum < 0) sum = 0;
        }
        
        return sum_max;
    }

TC: O(N)
SC: O(1)
