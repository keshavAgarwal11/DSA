class Solution {
public:
    bool isAnagram(string s, string t) {
        


             int n = s.size();
             int m = t.size();
                int freq1[26] = {0};
                int freq2[26] = {0};


             for(char ch : s){

                freq1[ch-'a']++;
             }


        for(char ch : t){
                  
                  freq2[ch - 'a']++;

        }

            for(int i=0; i<26; i++){


                  if(freq1[i] == freq2[i]){

                     

                  }
                  else{

                    return false;
                  }

            }

           
               





           return true;












    }
};