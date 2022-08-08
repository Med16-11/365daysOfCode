int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        unordered_map<int, int>mp;
        int maxLength = 0;
        int sum = 0;
        
        for(int i = 0; i < n; i++){
            
            sum += A[i];
            if(sum == 0){
                maxLength = i+1; 
            }
            
            else{
                if(mp.find(sum) != mp.end()){
                    maxLength = max(maxLength, i-mp[sum]);
                }
                else{
                    mp[sum] = i;
                }
            }
        }
        
        return maxLength;
    }

TC: O(NlogN)
SC: O(N)
