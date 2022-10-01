https://leetcode.com/problems/remove-duplicates-from-sorted-array/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int a=0;
        for(int i=1;i<n;i++){
            if(nums[a]!=nums[i]){
                a++;
                nums[a]=nums[i];
            }
        }
        return a+1;
    }
};