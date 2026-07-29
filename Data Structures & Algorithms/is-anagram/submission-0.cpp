class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        if(s.size()!=t.size()) return false;
        vector<int>hash(256);
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[s[i]]++;
        }
        for(int i=0;i<n;i++){
            mpp[t[i]]--;
        }
        for(auto it:mpp){
            if(it.second!=0) return false;
        }
        return true;
    }
};
