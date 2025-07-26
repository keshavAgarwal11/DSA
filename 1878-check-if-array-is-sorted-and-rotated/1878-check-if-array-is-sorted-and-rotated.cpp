class Solution {
public:
    bool check(vector<int>& nums) {
     

       int cont = 0;

     int n = nums.size();

        for(int i=0; i<n-1;i++){

       if(nums[i] <= nums[i+1]){

       }
       else{

        cont++;
          
       }      
            
        }

         if(nums[0] < nums[n-1]){

          cont++;   
         }    

       if(cont >1){
 
                return false; 
       }
       else{

            return true;
       }


    }
};