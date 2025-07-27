class Solution {
public:
    int maxProfit(vector<int>& prices) {
                   
   int n = prices.size();
   int mini = prices[0];
        int profit =0;   
//    for(int i=0; i<n-1;i++){

//     for(int j=i+1; j<n; j++){
             
//              int diff = 0;
//           if(prices[j] >prices[i]){

//                 diff = prices[j] - prices[i];

//                  maxi = max(maxi,diff);

//           }


//     }   
//    }        
         for(int i=1;i<n;i++){

            int diff = prices[i]-mini;
            
            profit = max(profit,diff);

                   mini = min(mini,prices[i]);
         }
           


     return profit;










    }  
};