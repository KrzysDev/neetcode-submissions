class Solution {
public:
    static bool s(pair<int, int> a, pair<int, int> b){
        return a.second > b.second;
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> m;

        for(int i = 0; i < nums.size(); i++){
            if(m.find(nums[i]) != m.end())
                m[nums[i]]++;
            else
                m[nums[i]] = 1;
        }

        vector<pair<int, int>> frequencies;

        for(auto& it : m) {
            frequencies.push_back(it);
        }

        sort(frequencies.begin(), frequencies.end(), s);

        vector<int> answers;

        for(int i = 0; i < k; i++){
            answers.push_back(frequencies[i].first);
        }

        return answers;
    }
};
