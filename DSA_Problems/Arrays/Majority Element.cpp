int majorityElement(vector<int>& nums) {
       
        int count = 0;
        int ele = 0;
        
        for(int i = 0; i < nums.size(); i++){
            
            if(count == 0){
                ele = nums[i];
            }
            
            if(nums[i] == ele){
                count += 1;
            }
            else{
                count -= 1;
            }
        }
        
        return ele;
    }

TC: O(N)
SC: O(1)
