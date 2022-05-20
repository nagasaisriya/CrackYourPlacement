class Solution {
public:

    int minMoves(vector<int>& nums) {
      int sum=0,minimum=nums[0],res=0;
      for(int i=0;i<nums.size();i++)
      {
        sum+=nums[i];
        if(nums[i]<minimum)
          minimum=nums[i];
      }
      res=sum-nums.size()*minimum;
      return res;
    }
};
