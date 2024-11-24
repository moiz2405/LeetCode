class Solution {
public:
    bool canAliceWin(int n) {
       
        // n -= 10;

        int currentMove = 10;
        bool isAliceTurn = false;

        while (n > 0) {
            if (n < currentMove) {
                return isAliceTurn; 
            }
            n -= currentMove;     
            currentMove--;         
            isAliceTurn = !isAliceTurn; 
        }

       
        return isAliceTurn; 
    }
};
