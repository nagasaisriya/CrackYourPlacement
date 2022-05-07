class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int c=0,n=0;
        sort(nums.begin(),nums.end());
        if(nums.size()==2)
        {
            return nums[0];
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==nums[i+1])
            {
               n= nums[i];
            }
        }
       return n;
    }
};
