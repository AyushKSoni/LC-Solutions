class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int>ans  = nums;
        long long MOD = 1e9 + 7;
        for(auto &p : queries){
            for(int  i = p[0] ; i<= p[1]; i+=p[2]){
                ans[i] = (1LL * ans[i] * p[3]) % MOD; 
            }
        }
    int xoar =0;
    for(int h : ans){
        xoar ^= h;
    }
    return xoar;

    }
};