class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
//              int mini = INT_MAX;
            //  int sum = 0;
            // int n = arr.size();
//             stack<int> st;
//    for(int i=0;i<n;i++)
//    {

//       for(int j=i;j<n;j++){

//        st.push(arr[j]);
       
//        while(!st.empty()){

//            mini = min(mini,st.top());

//              sum = sum + mini;

//        }

//       }



//       while(!st.empty()){

//          st.pop();
//       }


       
//           mini = 0;


//    }

//    return sum;



// for(int i=0; i<n; i++) {
//     int mini = arr[i];
//     for(int j=i; j<n; j++) {
//         mini = min(mini, arr[j]);  // directly track min
//          sum += mini;
//     }
// }

//    return sum;




           const int MOD = 1e9 + 7;
        int n = arr.size();

        vector<int> left(n), right(n);
        stack<pair<int,int>> st1, st2;

        // Previous Smaller Element (strictly greater for left)
        for(int i=0; i<n; i++) {
            int count = 1;
            while(!st1.empty() && st1.top().first > arr[i]) {
                count += st1.top().second;
                st1.pop();
            }
            left[i] = count;
            st1.push({arr[i], count});
        }

        // Next Smaller Element (greater OR equal for right)
        for(int i=n-1; i>=0; i--) {
            int count = 1;
            while(!st2.empty() && st2.top().first >= arr[i]) {
                count += st2.top().second;
                st2.pop();
            }
            right[i] = count;
            st2.push({arr[i], count});
        }

        // Final Contribution
        long long res = 0;
        for(int i=0; i<n; i++) {
            long long contrib = (1LL * arr[i] * left[i] * right[i]) % MOD;
            res = (res + contrib) % MOD;
        }

        return (int)res;
    
    }
};