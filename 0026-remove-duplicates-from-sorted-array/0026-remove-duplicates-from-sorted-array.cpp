class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
    
    // int n = nums.size();
    //   int cont =0;
    //     if(nums.size() > 0) cont++;
    // for(int i=1; i<n;i++){

      
    //       if(nums[i] == nums[i-1]){
                  
               
    //       }
    //       else{

    //           cont++;
    //       }


 


    // }
     
  



    //    return cont;

     int n = nums.size();
    set<int> st;

       for(int i=0; i<n;i++){
                        
                st.insert(nums[i]);
       }
               int index = 0;
       for(auto it : st){

           nums[index] =it;

             index++;
                    

       }
      
             return index;    
 
  




    }  
};