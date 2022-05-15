class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        int s=0;
        vector<int> res;
        for(int i=0;i<nums.size();i++)
        {
            //s+=nums[i];
            if(m.find(target-nums[i])!=m.end())
            {
                res.push_back(m[target-nums[i]]);
                res.push_back(i);
                return res;
            }
            m[nums[i]]=i;
        }
        return res;
    }
};
