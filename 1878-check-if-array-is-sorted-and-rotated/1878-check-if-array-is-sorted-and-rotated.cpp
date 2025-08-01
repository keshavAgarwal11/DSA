class Solution {
public:
    bool check(vector<int>& nums) {
     
      
    int n =nums.size();

 int cont = 0;
    for(int i=0;i<n-1;i++){

   
      if(nums[i] > nums[i+1]) {
        cont++;
      }


    }

           if(cont ==0) return true;
         if(cont >1) return false;
         
         if(cont ==1){

                    if(nums[0] >= nums[n-1]) return true;
                    else return false;

                    


         }











         return 0;

      

    }
};