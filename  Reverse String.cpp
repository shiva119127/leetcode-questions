class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> newstr;

        for(int i = s.size() - 1; i >= 0; i--){
            newstr.push_back(s[i]);
        }

        s = newstr;
    }
};