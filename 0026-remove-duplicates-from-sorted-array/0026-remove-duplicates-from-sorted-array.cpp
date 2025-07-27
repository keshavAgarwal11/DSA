class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
      
   int n = nums.size();

  
    int cont =0;
    int i =0;
  for(int j=i+1; j<n;j++){


 

          if(nums[i] !=nums[j]){
              cont++;
                    nums[i+1] = nums[j];
              i++;   
          }
         



  }

       return (cont+1);


 

    }  
};