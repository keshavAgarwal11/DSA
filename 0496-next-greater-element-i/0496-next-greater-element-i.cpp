class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    vector<int> ans;
  int n1 = nums1.size();
     int n2 = nums2.size();
      bool val = 0;
    for(int i=0;i<n1;i++){
          bool val = 0;
        int nextgreater = -1;
        for(int j =0; j<n2;j++){
            if(nums1[i] == nums2[j]){
                   val = 1;
             for(int k = j+1; k<n2;k++){
              if(nums2[k] > nums1[i]){
                  nextgreater = nums2[k];
                  break;
 }
             }   
            } 
             if(val){
              ans.push_back(nextgreater);
              break;
             }
        } 
    }
        return ans;
    }
};