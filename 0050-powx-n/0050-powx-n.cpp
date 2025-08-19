class Solution {
public:
    double myPow(double x, int n) {
        
  
       if(n==0) return 1;



        long long exp = n;
       if(exp<0){
             x = 1/x;
             exp = -exp;
       }

     double half  = myPow(x,exp/2);

       if(n%2 ==0){

        return half*half;
     }

     else{

         return x*half*half;
     }
 
    } 






};