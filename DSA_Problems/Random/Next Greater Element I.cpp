class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int, int>map;
        stack<int>s;
        
        int n = nums2.size();
        
        for(int i = n-1; i >=0; i--){
            int ele = nums2[i];
            while(!s.empty() && s.top() <= ele){
                s.pop();
            }
            
            int res = (s.empty()) ? -1: s.top();
            map.insert({ele, res});
            s.push(ele);
        }
        
        vector<int>ans;
        for(auto x: nums1 ){
            ans.push_back(map[x]);
        }
        
        return ans;
    }
};
