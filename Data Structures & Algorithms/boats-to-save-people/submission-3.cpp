class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int right=people.size()-1;
        int left=0;
        int boat=0;
        while(left<=right){
            if(people[right]+people[left]<=limit){
                boat++;
                left++;
                right--;
            }
            else {
                boat++;
                right--;
            }
        
        }
       
        return boat;
    }
};