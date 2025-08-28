class Solution {
public:
//  stack<char> st;
    string removeOuterParentheses(string s) {

         string result = "";
         int depth =0;
        for(char ch : s){
       if(ch == '('){
         if(depth>0) result += ch;
         depth++;   
       }              
       else{
 
        depth--;
        if(depth>0) result += ch;
       }
        }
     
         return result;

    }








       //     string result = "";   
    // for(char ch : s){

    //    if(ch == '('){

    //       if(!st.empty()) result += ch;

    //       st.push(ch);
    //    }

    //    else{
    //      st.pop();
    //      if(!st.empty())result += ch;

    //    }

    // }
        
    //     return result;
};