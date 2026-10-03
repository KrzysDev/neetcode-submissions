class Solution {
public:
    string encode(vector<string>& strs) {
        string oneString = "";
        for (int i = 0; i < strs.size(); i++) {
            oneString += to_string(strs[i].size()) + "#" + strs[i];
        }
        return oneString;
    }

    vector<string> decode(string s) {
        vector<string> strs;
        int i = 0;
        while (i < s.size()) {
            int hashPos = s.find('#', i);
            int len = stoi(s.substr(i, hashPos - i));
            strs.push_back(s.substr(hashPos + 1, len));
            i = hashPos + 1 + len;
        }
        return strs;
    }
};