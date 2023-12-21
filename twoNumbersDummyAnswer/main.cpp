class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answer;
        map<int, int>;
        for(int i=0; i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(j!=i){
                    if(nums[i]+nums[j]==target){
                        answer.push_back(i);
                        answer.push_back(j);
                        return answer;
                    }
                }

            }
        }
        return answer;
    }
};
