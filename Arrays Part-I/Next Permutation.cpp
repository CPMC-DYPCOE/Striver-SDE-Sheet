class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> v;
        for(int i=0;i<n;i++){
            vector<int> temp;
            for(int j=0;j<=i;j++){
                if(j==0 || j==i) temp.push_back(1);
                else{
                int x = v[i-1][j-1];
                int y = v[i-1][j];
                temp.push_back(x+y);
                }
            }
            v.push_back(temp);
        }
        return v;
    }
};