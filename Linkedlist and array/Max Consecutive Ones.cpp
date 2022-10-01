https://leetcode.com/problems/max-consecutive-ones/
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int maxi=0;
        nums.push_back(0);
        for(int i=1;i<nums.size();i++){
            if(nums[i]==0){
                maxi=max(maxi,nums[i-1]);
            }
            else{
                nums[i]+=nums[i-1];
            }
        }
        return maxi;
    }
};