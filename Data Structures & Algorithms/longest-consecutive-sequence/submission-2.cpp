class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        unordered_set<int>st;
        for(int i=0;i<n;i++){
           st.insert(nums[i]);
        }
     
        int count;
        int max_count=INT_MIN;
        for(int i=0;i<n;i++){
            count=1;
            if(st.find(nums[i]-1)!=st.end()) continue;
            else{
                int num=nums[i];
                num=num+1;
                while(st.find(num)!=st.end()){
                    count++;
                    num++;
                }
                max_count=max(max_count,count);

            }
        }
        return max_count;
    }
};
