// LeetCode 
// 70. Climbing Stairs

class Solution {
public:
    unordered_map<int, int> memo;
    int climbStairs(int n) {
        if(n==1 || n==2) return n;
        if(memo.count(n)) return memo[n];
        return memo[n] = climbStairs(n-1) + climbStairs(n-2);
    }
};
