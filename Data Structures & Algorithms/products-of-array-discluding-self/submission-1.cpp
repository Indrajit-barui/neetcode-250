class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      int n=nums.size();
      vector<int>prefix_pro(n,1);
      vector<int>suffix_pro(n,1);
       prefix_pro[0]=nums[0];
       suffix_pro[n-1] = nums[n-1];
      for(int i=1;i<n;i++){
        prefix_pro[i]=prefix_pro[i-1]*nums[i];
      }
      for(int i=n-2;i>=0;i--){
suffix_pro[i]=suffix_pro[i+1]*nums[i];
      }
nums[0] = suffix_pro[1];
      for(int i=1;i<n-1;i++){
       
        nums[i] = prefix_pro[i-1] * suffix_pro[i+1];
      }
      nums[n-1]=prefix_pro[n-2];
      return nums;
    }
};
