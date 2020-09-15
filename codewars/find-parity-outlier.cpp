int FindOutlier(std::vector<int> arr)
{
  int even = 0, odd = 0, oddPos = -1, evenPos = -1;
  for(int i = 0; i < arr.size(); i++) {
    if(arr[i]%2 == 0) {
      even++;
      evenPos = i;
    }
    else {
      odd++;
      oddPos = i;
    }
  }
    
  return even == 1 ? arr[evenPos] : arr[oddPos];  
}
