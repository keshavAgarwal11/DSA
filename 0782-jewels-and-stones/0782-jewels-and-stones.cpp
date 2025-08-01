class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        

         int n = jewels.size();
         int m = stones.size();
       int cont =0;

          for(int i=0; i<n;i++){

                     char ch =jewels[i];
                   for(int j=0; j<m;j++){
                    if(stones[j]==ch){
                             
                    cont++;  
                       
                    }
                   }
            
             




          }




             return cont;










    }
};