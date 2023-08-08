int maxArea(vector<int>& h) {
        int left = 0;
        int right = h.size()-1;
        int maxArea = 0;

        while(left < right){
            int currentArea = min(h[left], h[right])*(right-left);
            maxArea = max(maxArea, currentArea);

            if(h[left] < h[right]){
                left ++;
            }else{
                right--;
            }
        }
        return maxArea;
    }
