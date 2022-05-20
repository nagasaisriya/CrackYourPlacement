class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int product=1,n=nums.size();
        sort(nums.begin(),nums.end());
        product=max(nums[n-1]*nums[n-2]*nums[n-3],nums[n-1]*nums[0]*nums[1]);
        return product;
    }
};
