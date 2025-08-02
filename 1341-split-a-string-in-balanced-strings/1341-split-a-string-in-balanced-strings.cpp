class Solution {
public:
    int balancedStringSplit(string s) {
         

  int n = s.size();

     int count3 = 0;
               int count1 = 0;
               int count2 = 0;

     for(char ch : s){
           

             if(ch == 'R') count1++;
            else{

                if(ch == 'L') count2++;
            }


            if(count1 == count2){

                count3++;
                count1 =0;
                count2 = 0;
            }









     }
   
 


              return count3;








    }
};