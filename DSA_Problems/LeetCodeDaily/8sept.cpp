//3 Sum Closest
int threeSumClosest(vector<int>& nums, int target) {
        
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int ans = INT_MAX;
        int final_result;
        for(int i = 0;i<n;i++){
            int left = i+1;
            int right = n-1;
            while(left < right){
                int sum = nums[i] + nums[left] + nums[right];
                if(ans > abs(target - sum)){
                    ans = abs(target - sum);
                    final_result = sum;
                }
                if(sum < target){
                    left++;
                }
                else if(sum > target){
                    right--;
                }
                else if(target == sum){
                    return sum;
                }
            }
        }
        return final_result;
    }