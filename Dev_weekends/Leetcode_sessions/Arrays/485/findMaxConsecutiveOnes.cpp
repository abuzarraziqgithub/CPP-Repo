#include<bits/stdc++.h>
using namespace std;
/*
Given a binary array nums, return the maximum number of consecutive 1's in the array.

Example 1:
Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.

Example 2:
Input: nums = [1,0,1,1,0,1]
Output: 2
 
Constraints:
1 <= nums.length <= 105
nums[i] is either 0 or 1.
*/

/*
Approach:
 - We have given an array of 1's and 0's, we have to return the max number of consecutive/continous 1's in the array
 
 - Initialize initialCount to 0;
 - Initialize maxCount to initialCount
 - Iterate over the array
 - If current index value is 1, then increment currentCount by 1 otherwise 0
 - If initialCount is greater, write it to maxCount
 - return maxCount
*/

int findMaxConsecutiveOnes(vector<int>& nums) {
    int currentCount = 0;
    int maxCount = 0;

    for(int i =0; i < nums.size(); i++){
        currentCount = nums[i] == 1 ? currentCount + 1 : 0;
        maxCount = max(currentCount, maxCount);
    }
    return maxCount;
}

int main(){

    vector<int> nums = {1,1,1,0,0,0,1,0};
    int result = findMaxConsecutiveOnes(nums);
    cout << result;
}