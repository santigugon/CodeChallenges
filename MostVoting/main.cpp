#include <iostream>
//Most voting algorithm to find the majority of an item
//Constraints Time complexity: O(n)
//Memory: O(1)

int main() {
    int n=15;
    int nums[n] = {1,3,4,3,3,2,1,3,3,7,3,3,3,8,1};
    int majEl;
    int recurr;

    for(int i=0;i<n;i++){
        if(i==0){
            majEl=nums[i];
            recurr=1;
        }else{
           if((majEl-nums[i])==0){
               recurr++;
           }else{
               recurr--;
           }
           if(recurr<0){
               majEl=nums[i];
               recurr=1;
           }
        }
    }

    std::cout <<"ELEMENTO MAYORITARIO " <<majEl<< std::endl;
    return 0;
}
