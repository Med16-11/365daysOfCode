bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> m;
        for(auto x: magazine){
            m[x]++;
        }
        for(auto x: ransomNote){
            if(!m[x]--){
                return false;
            }
        }
        return true;
    }
