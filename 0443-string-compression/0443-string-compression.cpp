class Solution {
public:
    int compress(vector<char>& chars) {
        
         int indx = 0;
         int n = chars.size();

         for(int i=0;i<n;i++){

           char  ch = chars[i];
                       int count =0;

           while(i<n && chars[i] == ch){
                              
                   count++;
                   i++;

           }

           if(count == 1)  chars[indx++] = ch;

           else{
                        chars[indx++] = ch;

                           string str = to_string(count);

                        //  chars[indx++] = str[0];

                        for(char dig : str){

                            chars[indx++] = dig;
                        }
                                 

           }    


           i--;     




         }

           chars.resize(indx);
           return indx;      





    }
};