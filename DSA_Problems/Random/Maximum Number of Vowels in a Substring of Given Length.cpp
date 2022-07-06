class Solution {
public:
    int maxVowels(string s, int k) {
        
        unordered_set <char > vowels = {'a','e','i','o','u'};
        int count = 0;
        for(int i = 0; i < k; i++){
             if(vowels.find(s[i]) != vowels.end()){
                 count++;
             }
        }
        
        int l=0, r = k-1;
        int max_count = count;
        
        while(r < s.length() - 1){
            if(vowels.find(s[l]) != vowels.end()){
                 count--;
             }
            l++;
            r++;
            if(vowels.find(s[r]) != vowels.end()){
                 count++;
             }
            max_count = max(count, max_count);
        }
        
        return max_count;
    }
};
