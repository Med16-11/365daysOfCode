// Find Original Array From Doubled Array
vector<int> findOriginalArray(vector<int>& changed) {
        
        map<int, int>mp;
        vector<int>ans;
        
        int n = changed.size();
        
        if(n%2){
            return ans;
        }
        
        for(auto x: changed){
            mp[x]++;
        }
        
        sort(changed.begin(), changed.end());
            
        for(auto x: changed){
            
            if(mp[x] == 0){
                continue;
            }
            else if(mp[2*x] == 0){
                return{};
            }
            else if(mp[x] && mp[2*x]){
                mp[2*x]--;
                ans.push_back(x);
                mp[x]--;
            }
        }
        return ans;
    }
