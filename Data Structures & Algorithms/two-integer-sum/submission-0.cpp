class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> m;

        for(int i = 0; i < nums.size(); i++){
            if(m.find(target - nums[i]) != m.end()){
                int j = m[target - nums[i]];
                
                if (i > j){
                    int temp = i;
                    i = j;
                    j = temp;
                }

                vector<int> pr = {i, j};

                return pr;
            }

            m[nums[i]] = i;
        }

        return {};
    }
};
