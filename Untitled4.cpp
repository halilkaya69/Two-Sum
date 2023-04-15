class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       vector<int> myVector;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(j==i){
                    continue;
                }
                if(target-nums[i]==nums[j]){
                   
                    myVector={i,j};
                    break;
                }
            }
        }
                    return myVector;

    }
};
