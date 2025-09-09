class Solution {
public:



 int maxi(vector<int>& arr){
     
      int n = arr.size();
       int maxi = arr[0];
       
      
      for(int i=1;i<n;i++){
          
            maxi = max(maxi,arr[i]);
            
            
      }
     
       return maxi;
     
     
 }




   long long fun1(vector<int>& arr,int nob){
        
        long long totaltime = 0;
       
      int n = arr.size();
      
      for(int i=0; i<n; i++){
          
        //   totaltime += ceil(double(arr[i])/double(nob));
           
         totaltime += (arr[i] + nob - 1) / nob;

      }
      
      return totaltime;
       
       
      
       
   }
 







    int minEatingSpeed(vector<int>& arr, int k) {
           
    int ans = INT_MAX;        
  int low = 1;
  int high = maxi(arr);
  while(low <= high){
      
     
      
       int mid = (low +high)/2;
       
       long long minhrs = fun1(arr,mid);
       
       
       
       if(minhrs <= k){
           
        ans = mid;
        
         high = mid-1;  
          
           
       }
       
       
       else{
           
            low = mid+1;
           
       }
       
        
       

      
  }
   
   
   
   
    return ans;
   
   
    }
};