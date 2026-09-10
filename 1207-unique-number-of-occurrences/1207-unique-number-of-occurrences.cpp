class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(auto i : arr)mp[i]++;
        unordered_map<int,int>mp2;
        for(auto i : mp)mp2[i.second]++;
        for(auto i : mp2){
            if(i.second > 1)return false;
        }
        return true;
    }
};