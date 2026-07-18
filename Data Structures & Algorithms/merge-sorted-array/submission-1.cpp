class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>ans;
        int first=0;
        int sec=0;
        while(first<m && sec<n){
            if(nums1[first] >nums2[sec]){
                ans.push_back(nums2[sec]);
                sec++;
            }
            else if(nums1[first] <nums2[sec]){
                ans.push_back(nums1[first]);
                first++;
            }
            else{
                ans.push_back(nums1[first]);
                first++;
            }
        }
        while(first<m){
        ans.push_back(nums1[first]);
        first++;
        }

        while(sec<n){
               ans.push_back(nums2[sec]);
                sec++;
        }
        for(int i=0;i<ans.size();i++){
            nums1[i]=ans[i];
        }
    }
};