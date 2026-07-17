class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //brute force
        if(nums.size()==0) return 0;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int prev=nums[0];
        int count=1;
        int max_count=INT_MIN;
        for(int i=1;i<n;i++){
            if(prev==nums[i]) continue;
            else if(prev+1==nums[i]){
                count++;
                prev=nums[i];
            }
            else{
                max_count=max(max_count,count);
                count=1;
                prev=nums[i];
            }
        }
         max_count = max(max_count, count);
        return max_count;
    }
};
