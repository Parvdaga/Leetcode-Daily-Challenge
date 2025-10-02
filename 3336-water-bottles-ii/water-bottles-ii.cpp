class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        // Start by drinking all the initial bottles.
        int totalDrunk = numBottles;
        int emptyBottles = numBottles;

        // Keep exchanging as long as you have enough empty bottles.
        while (emptyBottles >= numExchange) {
            emptyBottles -= numExchange;
            
            numExchange++;
            
            totalDrunk++;
            
            emptyBottles++;
        }
        
        return totalDrunk;
    }
};