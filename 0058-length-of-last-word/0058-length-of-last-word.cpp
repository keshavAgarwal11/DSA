class Solution {
public:
    int lengthOfLastWord(string s) {
               int count = 0;
       int n = s.size(); 
       int i = n-1;
       while(s[i] == ' '){
        i--;
       }             
       for(i; i>=0 ;i--){                                     
           if(s[i] != ' '){
            count++;
           }
           else {
            break;
           }

       }
           return count;



    }
};