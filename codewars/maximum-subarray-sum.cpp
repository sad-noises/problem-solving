#include <vector>

using namespace std;


int maxSequence(const vector<int>& arr){
  int sum = 0, m = 0; 
  for(int i = 0; i<(int)arr.size(); i++) {
    sum+=arr[i];
    m = std::max(m, sum);
    if(sum < 0) sum = 0;
  }
  
  return m;
}
