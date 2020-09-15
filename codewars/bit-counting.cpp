unsigned int countBits(unsigned long long n){
  return __builtin_popcountll(n);
}
