// url = https://leetcode.com/problems/distribute-money-to-maximum-children

class Solution {
public:
    int distMoney(int money, int children) {
        int cnt = 0;
        if(money<children) return -1;
        vector<int> val(children,1);
        money-=children;
        for(int i=0; i<children-1; i++){
            if(money>6){
                cnt++;
                val[i] += 7;
                money -= 7;
            }
        }
        if(money==7) cnt++;
        else if(money==3){
            if(val[children-2]==8) cnt--;
        }
        return cnt;
    }
};
