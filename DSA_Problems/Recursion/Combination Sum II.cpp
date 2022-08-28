void findCombinations(int ind, int target, vector<vector<int>>&ans, vector<int>&arr, vector<int>&ds){
        
        if(target == 0){
            ans.push_back(ds);
        }
        
        for(int i = ind; i < arr.size(); i++){
            if(i > ind && arr[i] == arr[i-1]) continue;
            if(arr[i] > target)break;
            ds.push_back(arr[i]);
            findCombinations(i+1, target-arr[i], ans, arr, ds);
            ds.pop_back();
        }
    } 
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>>ans;
        vector<int>ds;
        findCombinations(0, target, ans, candidates, ds);
        return ans;
    }
