class Solution {
public:
int count(vector<string>arr,string x){
    int c=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==x) c+=1;
    }
    return c;
}
    string kthDistinct(vector<string>& arr, int k) {
        vector<string>result;
        string ans;
        for(int i=0;i<arr.size();i++){
            int cou=count(arr,arr[i]);
            if(cou==1) result.push_back(arr[i]);
        }
        for(int i=0;i<result.size();i++){
            if(k-1==i){
                ans=result[i];
                break;
            }
        }
        return(ans);
    }
};