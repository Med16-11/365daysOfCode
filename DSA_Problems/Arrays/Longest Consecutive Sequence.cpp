int longestConsecutive(vector<int>& nums) {
        
        set<int>hashset;
        
        for(int num : nums){
            hashset.insert(num);
        }
        
        int longestStreak = 0;
        
        for(int num: nums){
            if(!hashset.count(num-1)){
                int currentNum = num;
                int currentStreak = 1;
                
                while(hashset.count(currentNum + 1)){
                    currentNum += 1;
                    currentStreak += 1;
                }
                
                longestStreak = max(longestStreak, currentStreak);
            }
        }
        
        return longestStreak;
    }

TC: O(3N)
SC: O(N)
