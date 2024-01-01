/*

Given an array of strings strs, group the anagrams together. You can return the answer in any order.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 

Example 1:

Input: strs = ["eat","tea","tan","ate","nat","bat"]
Output: [["bat"],["nat","tan"],["ate","eat","tea"]]
Example 2:

Input: strs = [""]
Output: [[""]]
Example 3:

Input: strs = ["a"]
Output: [["a"]]
 

Constraints:

1 <= strs.length <= 104
0 <= strs[i].length <= 100
strs[i] consists of lowercase English letters.

*/


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        
        unordered_map<string, int> prevAppearance;
        string currWord;
        cout<<prevAppearance["eat"];
        vector<vector<string>> groupAnagram;
        for(int i=0;i<strs.size();i++){
            currWord=strs[i];
            sort(strs[i].begin(),strs[i].end());
            if(prevAppearance[strs[i]]-1!=-1){
               groupAnagram[prevAppearance[strs[i]]-1].push_back(currWord);     
            }else{
                vector<string> newGroup;
                newGroup.push_back(currWord);
                groupAnagram.push_back(newGroup);
                prevAppearance[strs[i]]=groupAnagram.size();
            };
            
        }
        return groupAnagram;
    }
};