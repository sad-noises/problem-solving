class TwoToOne
{
public:
  static std::string longest(const std::string &s1, const std::string &s2) {
    std::string s3 = s1 + s2;
    std::string fin = "";
    std::vector<int> v(26);
    
    for(char &c : s3) v[c-'a']++;
    
    for(int i = 0; i < 26; i++) {
      if(v[i] > 0) fin+=(i+'a');
    }
    
    sort(fin.begin(), fin.end());
    return fin;
  }

  
};
