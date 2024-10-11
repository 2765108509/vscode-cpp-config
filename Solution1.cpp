#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int max = 0;
        unordered_set<char> us;

        int r = 0;

        for (int l = 0; l < n; l++) {
            if (l != 0) us.erase(s[l - 1]);
            while (r < n && !us.count(s[r])) {
                us.insert(s[r]);
                r++;
            }
            if (r - l > max) {
                max = r - l;
            }
        }

        return max;
    }
};

int main() {
    Solution s;
    vector<int> v = {1};
    string str = "abcaabbcdef";

    cout << s.lengthOfLongestSubstring(str) << endl;

    getchar();

    return 0;
}