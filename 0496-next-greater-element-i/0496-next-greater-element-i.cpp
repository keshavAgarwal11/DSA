class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
                      
    //    vector<int> ans;
    // int n1 = nums1.size();
    // int n2 = nums2.size();
    //      bool val = 0;
    //  for(int i=0;i<n1;i++){

    //     for(int j=0;j<n2;j++){
    //       if(nums2[j]== nums1[i]){

          
    //       if(nums2[j] > nums1[i]){
    //             val =1;
    //         ans.push_back(nums2[j]);
    //         break; 

    //       }

    //       }

    //     //   else{
    //     //     ans.push_back(-1);
    //     //   }

         
    //     }

    //     if(!val) ans.push_back(-1);

             


    //  }  
     

    //     return ans;     









 vector<int> ans;
        
        for (int i = 0; i < nums1.size(); i++) {
            int nextGreater = -1;
            // find nums1[i] in nums2
            for (int j = 0; j < nums2.size(); j++) {
                if (nums2[j] == nums1[i]) {
                    // search to the right for next greater
                    for (int k = j + 1; k < nums2.size(); k++) {
                        if (nums2[k] > nums1[i]) {
                            nextGreater = nums2[k];
                            break;
                        }
                    }
                    break; // no need to search further once nums1[i] is found
                }
            }
            ans.push_back(nextGreater);
        }
        return ans;

    }
};