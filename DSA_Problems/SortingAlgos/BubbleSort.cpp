for(int i = 0; i < n -1; i++){
  boolean swapped = false;
  for(int j = 0; j = n-i-1; j++){
    if(a[j+1] > a[j]){
      swapped = true;
      swap(a, j+1, j);
    }
  }
  if(!swapped) break;
}

TC: O(N)
