class Solution {
public: 
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> m;
        for(int i = 0; i < nums2.size(); i++) {
            m.insert(pair<int,int>(nums2[i], i));
        }
        
         for(int &i : nums1) {          
             int pos = m[i];   
             for(int j = pos; j < nums2.size(); j++){          
                 if(nums2[j] > i) {                
                     i = nums2[j];                
                     break;              
                 }               
                 if(j == nums2.size()-1) {   
                     i = -1;                
                     break;               
                 }
           }      
         }       
        return nums1;
    }
};
