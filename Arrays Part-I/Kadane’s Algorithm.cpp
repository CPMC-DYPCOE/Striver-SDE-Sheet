class Solution {
public:
    int maxSubArray(vector<int>& v) {
        int temp=INT_MIN;
        int sum=0;
        for(int i=0;i<v.size();i++){
            sum += v[i];
            if(temp<sum) temp=sum;
            if(sum<0) sum=0;
        }
        return temp;
    }
};