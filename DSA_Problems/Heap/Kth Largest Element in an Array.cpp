int findKthLargest(vector<int>& nums, int k) {
        
        priority_queue<int, vector<int>, greater<int>> minpq;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            
            if(minpq.size() < k){
                minpq.push(nums[i]);
            }
            else{
                if(minpq.top() < nums[i]){
                    minpq.pop();
                    minpq.push(nums[i]);
                }
            }
        }
        
        return minpq.top();
    }

//Using min heaps here
TC: O(nlogk)
SC: O(k)
