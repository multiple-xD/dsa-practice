// Leetcode
// 389. Find the Difference
class Solution {
public:
    char findTheDifference(string s, string t) {
        int n = s.size();
        int m = t.size();
        unordered_map<char, int> st;
        for(int i=0; i<n; i++) st[s[i]]++;
        for(int i=0; i<m; i++) st[t[i]]--;
        for(auto elem: st){
            if(elem.second==-1) return elem.first;
        }
        return '\0';
    }
};
