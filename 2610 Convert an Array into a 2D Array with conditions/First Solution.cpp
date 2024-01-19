#include <iostream>

class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<int> revisionMatrix= nums;
        sort(revisionMatrix.begin(),revisionMatrix.end());
        vector<vector<int>> twoDArr;
        bool revised= false;
        int lastIns=-1;
        int numIns=0;
        int numVec=0;
        vector<int> newVec;
        while(!revised){
            lastIns=-1;
            numIns=0;
            
            for (int i=0; i<revisionMatrix.size();i++){
                if(revisionMatrix[i]!=-1){
                    if(numIns==0 ){
                      twoDArr.push_back(newVec); 
                    }
                     if(revisionMatrix[i]!=lastIns){
                        twoDArr[numVec].push_back(revisionMatrix[i]);
                        lastIns=revisionMatrix[i];
                        revisionMatrix[i]=-1;
                        numIns++;
                    }
                }

            }
            if(lastIns==-1){
                revised=true;
                return  twoDArr;
            }
            numVec++;
            

        }
        return  twoDArr;        
    }
};