#include<bits/stdc++.h>
using namespace std;

/*
You're given strings jewels representing the types of stones that are jewels, and stones representing the stones you have. Each character in stones is a type of stone you have. You want to know how many of the stones you have are also jewels.

Letters are case sensitive, so "a" is considered a different type of stone from "A".

 

Example 1:

Input: jewels = "aA", stones = "aAAbbbb"
Output: 3
Example 2:

Input: jewels = "z", stones = "ZZ"
Output: 0
 

Constraints:

1 <= jewels.length, stones.length <= 50
jewels and stones consist of only English letters.
All the characters of jewels are unique.
*/

/*
Understand the Problem:
- we have given two strings of jewels and stones. the string jewels represents the types of stones that are jewels and the string stones representing the stones we have. we have to compare/find/check which stones that we have are jewels by comparing each character(stone) with each jewel character.
- At the end count that stone which is in the jewels and return how many you have



Approach: Brute Force:
- Initialize count with 0
- Iterate over the stones string
- Iterate over the jewels string
- compare if jewel at index point is present/equal to the stones at index point
- Increment count by 1
- Return the net count
*/

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {

        int count = 0;

        for(int i = 0; i < stones.size(); i++){
            for(int j = 0; j < jewels.size(); j++){
                if(jewels[j] == stones[i]){
                    count++;
                }
            }
        }
        return count;
    }
};


int main(){
    
}