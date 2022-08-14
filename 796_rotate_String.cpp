class Solution {
public:
    bool rotateString(string s, string goal) {
        return ((s.length() == goal.length()) && ((s+s).find(goal) != string::npos));     
    }
};

// Time Complexity: 0(1)
// Space Complexity : 0(1)