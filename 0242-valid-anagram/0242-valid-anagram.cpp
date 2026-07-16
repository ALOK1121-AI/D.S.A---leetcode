class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        bool res;

        if (s == t) {
            res = true;

        } else {
            res = false;
        }

        return res;
    }
};