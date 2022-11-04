bool is_vowel(char ch)
    {
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
    }

    string reverseVowels(string str) {

        int n = str.size();

        int i = 0;

        int j = n - 1;

        while(i < j)
        {
            if(is_vowel(str[i]) && is_vowel(str[j]))
            {
                swap(str[i], str[j]);

                i++;

                j--;
            }
            else if(is_vowel(str[i]) == false)
            {
                i++;
            }
            else if(is_vowel(str[j]) == false)
            {
                j--;
            }
        }

        return str;
    }
