// Minimum Window Substring
string minWindow(string s, string t) {
        
        int len1 = s.length();
    int len2 = t.length();
        
     const int no_of_chars = 256;

    if (len1 < len2) {
        return "";
    }

    int hash_pat[no_of_chars] = { 0 };
    int hash_str[no_of_chars] = { 0 };

    
    for (int i = 0; i < len2; i++)
        hash_pat[t[i]]++;

    int start = 0, start_index = -1, min_len = INT_MAX;

   
    int count = 0; 
    for (int j = 0; j < len1; j++) {
      
        
        hash_str[s[j]]++;

        
        if (hash_str[s[j]] <= hash_pat[s[j]])
            count++;

        if (count == len2) {
          
            while (hash_str[s[start]]
                       > hash_pat[s[start]]
                   || hash_pat[s[start]] == 0) {

                if (hash_str[s[start]]
                    > hash_pat[s[start]])
                    hash_str[s[start]]--;
                start++;
            }

            int len_window = j - start + 1;
            if (min_len > len_window) {
                min_len = len_window;
                start_index = start;
            }
        }
    }


    if (start_index == -1) {
     
        return "";
    }

    
    return s.substr(start_index, min_len);
    }
