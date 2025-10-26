class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        long long ans = 0;
        int empty = 0;

        while (numBottles > 0) {
            ans += numBottles;
            empty += numBottles;
            numBottles = 0;

            if (empty >= numExchange) {
                empty -= numExchange;
                numBottles = 1;
                numExchange++;
            } else {
                break;
            }
        }

        return (int)ans;
    }
};
