#include <bits\stdc++.h>
using namespace std;

vector <int> twoSum(vector<int>& nums, int target){
        int a,b;
        a = b = 0;
        for(int i = 0; i<nums.size()-1; ++i)
        {
            for(int j = i + 1; j<nums.size(); ++j)
            {
                if(nums[i] + nums[j] == target)
                {
                    a = i;
                    b = j;
                }   
            }
        }
        return {a,b};
}

/* 
!Alternative 

const find TwoSum = function(nums,target){
    for(let p1 = 0; p1< nums.length; p++)
    {
        const numberToFind = target - nums[p1];

        for(let p2 = p1 + 1; p2<nums.length; p2++)
        {
            if(numberToFind === nums[p2]){
                return [p1,p2];
            }
        }
    }

    return null;
}

! Time Complexity = O(n2) - Quadratic
? Space Complexity = O(1) - Constant

TODO Optimized Solution using (Hash Map)

const findTwoSum = function(nums, target)
{
    const numsMap = {};
    for(let p = 0; p<nums.length; p++)
    {
        const currentMapVal = numsMap[nums[p]];
        
        if(currentMapVal >= 0)
        {
            return [currentMapVal,p];
        } else {
            const numberToFind = target - nums[p];
            numsMap[numberTOFind] = p;
        }
    }

    return null;

    ! Time Complexity = O(n) - Linear
    ? Space Complexity = O(n) - Linear
}

*/

int main(){
    int target = 11;
    vector <int> result;
    vector <int> nums {1,3,7,9,2};
    result = twoSum(nums, target);
    for(int i = 0; i<=result.size()-1; i++){
        cout<<result[i]<<" ";
    }
    return 0;
}