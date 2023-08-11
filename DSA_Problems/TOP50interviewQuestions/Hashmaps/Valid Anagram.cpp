bool isAnagram(string s, string t) {
        unordered_map<char, int>count;

        for(int x: s){
            count[x]++;
        }

        for(int x: t){
            count[x]--;
        }

        for(auto x : count){
            if(x.second != 0){
                return false;
            }
        }
        
        return true;
    }
