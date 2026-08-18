class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for(int i: nums){
                m[i]++;
        }

        vector<pair<int,int>>v;
        for(const auto& p:m){
            pair<int,int>p1={p.second,p.first};
            v.push_back(p1);
        }

        sort(v.rbegin(),v.rend());
        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(v[i].second);
        }
        
        return ans;
    }
};