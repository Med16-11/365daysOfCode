int i = 0; 
     int j = 0;

     while(i < s.length() && j < t.length()){
         if(s[i] == t[j]){
             i++;
             j++;
         }
         else if(s[i] != t[j]){
             j++;
         }
     }

  return i == s.length();
