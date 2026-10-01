class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        int table1[26];

        int table2[26];

        for(int i = 0; i < 26; i++){
            table1[i] = 0;
            table2[i] = 0;
        }

        for(int i = 0; i < s.size(); i++){
            table1[s[i] - 'a']++;
        }

        for(int i = 0; i < t.size(); i++){
            table2[t[i] - 'a']++;
        }

        for(int i = 0; i < 26; i++){
            if(table1[i] != table2[i]) return false;
        }

        return true;
    }
};
