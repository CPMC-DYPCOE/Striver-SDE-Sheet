class Solution {
public:
    void sortColors(vector<int>& nums) {
        int r=0;
        int w=0;
        int b=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) r++;
            if(nums[i]==1) w++;
            if(nums[i]==2) b++;
        }
        nums.clear();
        for(int i=0;i<r;i++) nums.push_back(0);
        for(int i=0;i<w;i++) nums.push_back(1);
        for(int i=0;i<b;i++) nums.push_back(2);
    }
};