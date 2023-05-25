// url = https://leetcode.com/problems/categorize-box-according-to-criteria

class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        long long vol= (long long)(length)*(long long)(width)*(long long)(height);
        
        int n = 1e4;
        bool b = (length >= n || width >= n || height >= n || vol >= 1e9);
        bool h =mass >= 100;
        if(b && h) return "Both";
        else if(h) return "Heavy";
        else if(b) return "Bulky";
        else return "Neither";
        
        }
};
