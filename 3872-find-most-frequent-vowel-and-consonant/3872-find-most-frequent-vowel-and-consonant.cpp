class Solution {
public:
    int maxFreqSum(string s) {
         int cont1;
     int n = s.size();
            int maxi =0;
            int maxi2 = 0;
     for(int i=0; i<n; i++){
          char ch = s[i];
               cont1 = 0;
        for(int j=0; j<n;j++){
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch =='u'){
                 if(ch ==s[j]){
                     cont1++;
                  }
                 maxi = max(cont1,maxi);
            }
            else{ 
               if(ch ==s[j]){
                     cont1++;            
                  } 
                 maxi2 = max(cont1,maxi2);

            }
        }   
     }
              return (maxi+maxi2);
    }
};