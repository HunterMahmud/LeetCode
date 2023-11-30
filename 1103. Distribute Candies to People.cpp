// url = https://leetcode.com/problems/distribute-candies-to-people

class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> ans(num_people, 0);
        for (int i = 1; candies > 0; i++) {
            long long x = (i - 1) % num_people;
            if (candies >= i) {
                ans[x] += i;
                candies -= i;
            } else {
                ans[x] += candies;
                candies = 0;
                break;
            }
        }
        return ans;
    }
};
