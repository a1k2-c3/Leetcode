class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>res;
        if(n%2 != 0){
            res.push_back(0);
            n--;
        }
        for(int i =1;i<=n/2;i++)res.push_back(i);
        int t = n/2;
        int neg = -1;
        while(t != 0){
            res.push_back(neg);
            neg--;
            t--;
        }
        return res;
    }
};