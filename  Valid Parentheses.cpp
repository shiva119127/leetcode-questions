class Solution {
public:
    bool isValid(string s) {
        vector<char> v;

        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
                v.push_back(s[i]);
            }
            else {
                if(v.empty()) return false;

                char top = v.back();
                v.pop_back();

                if((s[i] == ')' && top != '(') ||
                   (s[i] == ']' && top != '[') ||
                   (s[i] == '}' && top != '{')) {
                    return false;
                }
            }
        }
        return v.empty();
    }
};