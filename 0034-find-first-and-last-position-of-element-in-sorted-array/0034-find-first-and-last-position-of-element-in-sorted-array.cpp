class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
            
   int first = firstval(nums,target);
   int last = lastval(nums,target);

        return {first,last};


    }





                           int firstval(vector<int>& nums , int target){
                 int n = nums.size();
             int first = -1;
              int low =0;
        int high = n-1;

          while(low <= high){

         int mid = (low+high)/2;
         
                
               if(nums[mid] >= target){


                    if(nums[mid] == target){
                        first = mid;
                    }
                       high = mid-1;  
               }


               else{

                       low = mid+1;  



               }





          }



              return first;


         }










         
                  int lastval(vector<int>& nums , int target){
                int n = nums.size();
int last =-1;
              int low =0;
        int high = n-1;

          while(low <= high){

         int mid1 = (low+high)/2;
         
                
               if(nums[mid1] <= target){


                    if(nums[mid1] == target){
                        last = mid1;
                    }
                       low =mid1+1; 
               }


               else{

                    high = mid1-1;



               }





          }



             return last;


         }
};