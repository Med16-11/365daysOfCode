vector<int> twoSum(vector<int>& num, int target) {
        vector<int>ans;
        int begin = 0; 
        int end = num.size()-1;
        while(end > begin){
            int sum = num[end]+num[begin];
            if(sum > target){
                end--;
            }else if(sum < target){
                begin++;
            }else{
                ans.push_back(begin+1);
                ans.push_back(end+1);
                break;
            }
        }
        return ans;
    }
