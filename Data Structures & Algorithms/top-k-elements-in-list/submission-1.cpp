class Solution {
public:
static bool comp(pair<int,int>a,pair<int,int>b){
    if(a.second>b.second) return true;
    else return false;
}
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<pair<int,int>>arr;
        for(auto it:mp){
            arr.push_back(it);
        }
        vector<int>ans;
       sort(arr.begin(),arr.end(),comp);
       for(int i=0;i<k;i++){
        ans.push_back(arr[i].first);
       }
        return ans;
    }
};
