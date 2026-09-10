class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(auto i : arr){
            mp[i]++;
        }
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0 and mp[arr[i]]>1)return true;
            else if(mp[arr[i]*2] and arr[i]!=0)return true;
        }
        return false;
    }
};