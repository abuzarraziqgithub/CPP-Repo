#include<iostream>
#include<vector>
using namespace std;


/*
Given an integer array nums of length n, you want to create an array ans of length 2n where ans[i] == nums[i] and ans[i + n] == nums[i] for 0 <= i < n (0-indexed).
Specifically, ans is the concatenation of two nums arrays.
Return the array ans.

Example 1:
Input: nums = [1,2,1]
Output: [1,2,1,1,2,1]
Explanation: The array ans is formed as follows:
- ans = [nums[0],nums[1],nums[2],nums[0],nums[1],nums[2]]
- ans = [1,2,1,1,2,1]

Example 2:
Input: nums = [1,3,2,1]
Output: [1,3,2,1,1,3,2,1]
Explanation: The array ans is formed as follows:
- ans = [nums[0],nums[1],nums[2],nums[3],nums[0],nums[1],nums[2],nums[3]]
- ans = [1,3,2,1,1,3,2,1]
 

Constraints:
n == nums.length
1 <= n <= 1000
1 <= nums[i] <= 1000
*/
/*
 - Understand the Problem:
   - We have given an array of nums, we have to create another array ans doubled the length of nums, where ans[i] == nums[i] and ans[i + n] == nums[i].
   - i => i and < n
   - we have to concatenate the two num arrays and store it int the ans array.
  
- Questions:
  - How to make the size of the ans array doubled? vector<int> ans(2 * nums.size())
  - what does[i + n] means?  at offset n, means if i = 1, and length is 4, so [1 + 4] = at 5 index of ans(because we have double the size of nums - 8) 
  - How to concatenate them? assigning values of the same index at both(It will make copy of the ans)

- Approach:
 - Create answer array doubled the size of nums
 - Iterate over the nums array
 - Write/reassign value of the same index of nums and ans. (First Copy) with ans[i] == nums[i]
 - Write/reassign value of the i + n index to the current i index of nums
 - Return the ans array

*/

vector<int> getConcatenation(vector<int>& nums) {
    int array_size = nums.size();
    vector<int> ans(2 * array_size);

    for(int i = 0; i < array_size; i++){
        ans[i] = nums[i];
        ans[i + array_size] = nums[i];
    }

    return ans;
}

int main(){
    vector<int> nums = {1,2,3};
    vector<int> result = getConcatenation(nums);
    for(auto num : result) cout << num << endl;
}