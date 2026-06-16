class Solution {
public:
    string longestPalindrome(string s) {
        if (s.empty()) return "";
        
        int start = 0;
        int maxLen = 0;
        
        for (int i = 0; i < s.length(); i++) {
            // Expand for odd length palindromes (centered at a single character)
            int len1 = expandAroundCenter(s, i, i);
            
            // Expand for even length palindromes (centered between two characters)
            int len2 = expandAroundCenter(s, i, i + 1);
            
            // Take the maximum length found from both expansions
            int len = max(len1, len2);
            
            // If we found a longer palindrome, update the starting index and max length
            if (len > maxLen) {
                start = i - (len - 1) / 2;
                maxLen = len;
            }
        }
        
        return s.substr(start, maxLen);
    }
    
private:
    int expandAroundCenter(const string& s, int left, int right) {
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            left--;
            right++;
        }
        // Return the length of the palindrome found
        return right - left - 1;
    }
};