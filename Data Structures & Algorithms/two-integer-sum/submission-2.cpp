class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int a = 0;
        unordered_map <int,int> val;
        for(int i = 0;i<(int)nums.size();i++){
            a = target - nums[i];
            if(val.count(a) == 1){
                return {val[a], i};
            }
            else{
                val[nums[i]] = i;
                
            }
            
        }


    }
};