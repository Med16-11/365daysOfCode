
for(int i = 0; i < n-1; i++){
  int min = i;
  for( int j = i+1; j < n; j++){
    if(a[i] < a[min]){
      min = j;
    }
  }
  if(min != i){
    swap(a, min, i)
  }
}

TC: O(N^2)
