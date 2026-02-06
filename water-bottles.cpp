class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int totalDrank = numBottles;
        int emptyBottles = numBottles;
        while (emptyBottles >= numExchange) {
             int newFull = emptyBottles / numExchange;
             int remainingEmpty = emptyBottles % numExchange;
             totalDrank += newFull;
             emptyBottles = newFull + remainingEmpty;
        }
        return totalDrank;
    }
};
