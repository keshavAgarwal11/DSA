class Solution {
public:
    string largestOddNumber(string num) {



        string ans = "";
int n = num.length();

  for(int i= n-1; i>=0; i--){

       
        int value = num[i] - '0';  
        if(value % 2 ==1){

               ans = num.substr(0,i+1);
                break;

        }      




  }

        
       return ans;




    }
};