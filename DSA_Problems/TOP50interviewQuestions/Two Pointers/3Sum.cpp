vector<vector<int>> threeSum(vector<int>& nums) {
        unordered_map<int, int>mp;
        vector<vector<int>>ans;
        set<vector<int>>st;
        vector<int>v;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i+1; j < nums.size(); ++j){
                if(i!=j&&mp.find(-nums[i]-nums[j])!=mp.end()&&mp[-nums[i]-nums[j]]!=i&&mp[-nums[i]-nums[j]]!=j)
                {
                    v.push_back(nums[i]);
                    v.push_back(nums[j]);
                    v.push_back(-nums[i]-nums[j]);
                    sort(v.begin(),v.end());
                    st.insert(v);
                    v.clear();
                }
                mp[nums[j]]=j;
            }
        }
        for(auto i:st)
        {
            ans.push_back(i);
        }
        return ans;
    }
