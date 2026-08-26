class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        vector<vector<int>>bucket(n+1);
        unordered_map<int,int>mpp;
        for(int num: nums) mpp[num]++;
        for(auto it:mpp){
            bucket[it.second].push_back(it.first);
        }
        vector<int>ans;
        for(int i=n;i>=1;i--){
            for(int num:bucket[i]){
                ans.push_back(num);
                if(ans.size()==k)
                return ans;
            }
        }
        return ans;
        
    }
};
