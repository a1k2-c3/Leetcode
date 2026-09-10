class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int>res;
        for(int i=1;i<nums.size();i+=2){
            while(nums[i-1]!=0){
                res.push_back(nums[i]);
                nums[i-1]--;
            }
        }
        return res;
    }
};