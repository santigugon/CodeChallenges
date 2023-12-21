class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answer;
        map<int, int> myMap;
        int complement;
        for(int i=0; i<nums.size();i++){
            complement=target-nums[i];
            if(myMap.find(complement)!= myMap.end()){
                answer.push_back(myMap[complement]);
                answer.push_back(i);
                return answer;
            }else{
                myMap[nums[i]]=i;
            }

        }
        return answer;
    }
};