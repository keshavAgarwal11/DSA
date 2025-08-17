class Solution {
public:
    string frequencySort(string s) {
          unordered_map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }

        // Step 2: Put into vector of pairs (char, frequency)
        vector<pair<char, int>> vec(freq.begin(), freq.end());

        // Step 3: Sort by frequency in descending order
        sort(vec.begin(), vec.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });

        // Step 4: Build result string
        string result = "";
        for (auto &p : vec) {
            result.append(p.second, p.first); // repeat character
        }

        return result;
    }
};