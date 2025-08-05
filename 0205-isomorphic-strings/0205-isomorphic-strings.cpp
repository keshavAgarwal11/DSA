class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
     

           int x = s.size();
           int y = t.size();

           if(x != y)return false;
         map<char,int> mpp1;
         map<char,int> mpp2;
            
         for(int i=0; i<x;i++){

            if(mpp1.find(s[i]) == mpp1.end()){

               
               mpp1[s[i]] = i;
                

            }



                    


             if(mpp2.find(t[i]) == mpp2.end()){

               
               mpp2[t[i]] = i;
                

            }



           if(mpp1[s[i]] != mpp2[t[i]]){


                       return false;

           }



         }


         return true;
 













    }
};