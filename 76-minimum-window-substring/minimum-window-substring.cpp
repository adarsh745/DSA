class Solution {
public:
    string minWindow(string s, string t) {
        if (t.size() > s.size()) return ""; // Edge case

        unordered_map<char, int> targetFreq, windowFreq;
        for (char c : t) targetFreq[c]++; // Count characters in t

        int left = 0, right = 0, required = targetFreq.size();
        int minLen = INT_MAX, startIdx = -1;
        int formed = 0; // Tracks how many characters match required count

        while (right < s.size()) {
            char c = s[right];
            windowFreq[c]++;

            if (targetFreq.find(c) != targetFreq.end() && windowFreq[c] == targetFreq[c]) {
                formed++; // Character requirement met
            }

            while (formed == required) { // Contract window
                if (right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    startIdx = left;
                }

                char leftChar = s[left];
                windowFreq[leftChar]--;

                if (targetFreq.find(leftChar) != targetFreq.end() && windowFreq[leftChar] < targetFreq[leftChar]) {
                    formed--; // Requirement broken
                }

                left++; // Shrink window
            }

            right++; // Expand window
        }

        return startIdx == -1 ? "" : s.substr(startIdx, minLen);
    }
};
