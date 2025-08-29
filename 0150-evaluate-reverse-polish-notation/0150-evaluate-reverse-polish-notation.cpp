class Solution {
public:
stack<int> st;

    int evalRPN(vector<string>& tokens) {
        

            
      for(int i=0; i<tokens.size();i++){


          if(tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/"){

           int num1 = stoi(tokens[i]);

                  st.push(num1);



          }

          else{

             
                // char op  = tokens[i];
                //    char ch1 = st.top();
                    
                 int  num2 = st.top();

                   st.pop();
                 int num1 = st.top();
                   st.pop();  

                  if(tokens[i] == "+") st.push(num1+num2);
                else if(tokens[i] == "-") st.push(num1-num2);
                else if(tokens[i] == "*") st.push(num1*num2);
                  else if(tokens[i] == "/") st.push(num1/num2);

          }


            


            

  
 
        





      }
   
    
          return st.top();   










    }
};