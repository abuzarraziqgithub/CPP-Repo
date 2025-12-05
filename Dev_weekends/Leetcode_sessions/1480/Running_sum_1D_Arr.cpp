#include<bits/stdc++.h>
using namespace std;

/*
Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
Return the running sum of nums.

Example 1:
Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].

Example 2:
Input: nums = [1,1,1,1,1]
Output: [1,2,3,4,5]
Explanation: Running sum is obtained as follows: [1, 1+1, 1+1+1, 1+1+1+1, 1+1+1+1+1].

Example 3:
Input: nums = [3,1,2,10,1]
Output: [3,4,6,16,17]
 
Constraints:
1 <= nums.length <= 1000
-10^6 <= nums[i] <= 10^6
*/

// STEPS
/*
 1 - Understand Problem: We have given an array of nums, we have to sum each iteration/value to the previous values/elements with the current element, starting from 0 to n

 2 - Approach/Logic/Algorithm: Brute Force
    - Create a new array of same size as input array
    - Iterate over the nums array (0 -> n)
        - At each iteration:
          - runningSum  = 0 // starts from zero
            - runningSum += num[j]
      Push the runningSum into the answer array

    return the answer array

*/

// BRUTE FORCE
class Solution{
    public:
    vector<int> runningSum(vector<int>& nums){

        vector<int> answerArr;
        
        for(int i = 0; i <= nums.size() - 1; i++){
            int runningSum = 0;
            for(int j = 0; j <= i; j++ ){
                runningSum += nums[j];
            }
            answerArr.push_back(runningSum);
        }
        return answerArr;

    }

    // Home Work - Try to sum the next value with the previous one(not all previous)

    
};
// EFFICIENT
class Solution2{
    public:
    vector<int> runningSum(vector<int>& nums){

        // vector<int> answerArr;
        int runningSum = 0;
        
        // for(int i = 0; i <= nums.size() - 1; i++){
        //     runningSum += nums[i];    
        //     answerArr.push_back(runningSum);
        // }
        for(int i = 0; i < nums.size(); i++){
            runningSum += nums[i];
            nums[i] = runningSum;
        }
        return nums;

    }

    
    
};


int main() {
    
    Solution solution;
    Solution2 solution2;

    vector<int> nums = {1,2,3,4};
    vector<int> result = solution.runningSum(nums);
    
    vector<int> result2 = solution2.runningSum(nums);

    // For Solution 
    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;

    // For Solution2
    for(int num : result2) {
        cout << num << " ";
    }
    cout << endl;


}