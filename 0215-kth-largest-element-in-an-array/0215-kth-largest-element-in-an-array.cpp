class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i=nums.size()-1;i>=0;i--){
            if(k!=0){
            ans=nums[i];
            k--;
            }
            if(k==0){
            break;
            }
        }
        return ans;
    }
};