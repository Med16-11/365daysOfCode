//Palindrome Pairs
bool isPalindrome(string word) {
        int i = 0;
        int j = word.size() - 1;
        while (i < j) {
            if (word[i] != word[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    vector<vector<int>> palindromePairs(vector<string>& words) {
        vector<vector<int>> result;
        for (int i = 0; i < words.size(); i++) {
            for (int j = 0; j < words.size(); j++) {
                if (i == j) {
                    continue;
                }
                string word = words[i] + words[j];
                if (isPalindrome(word)) {
                    result.push_back({i, j});
                }
            }
        }
        return result;
    }
