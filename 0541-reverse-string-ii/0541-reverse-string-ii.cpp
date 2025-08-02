class Solution {
public:
    string reverseStr(string s, int k) {
        

       int n = s.size();
              int count =0;
              int index =0;
          for(int i=0; i<n;i++){
                 
                 if(count ==0) index=i;
               count++;
              

           if(count ==k){
                     
                   reverse(s.begin()+index , s.begin()+index+k);
           }

            else  if(count >k && count < 2*k){

            } 

            else if(count ==2*k) count =0;
            

          }  

             if(count != 0 && count <k){
                  reverse(s.begin()+index , s.end());
             }   
       
            
                return s;

    }
};