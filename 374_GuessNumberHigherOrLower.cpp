/*
We are playing the Guess Game. The game is as follows:

I pick a number from 1 to n. You have to guess which number I picked.

Every time you guess wrong, I'll tell you whether the number is higher or lower.

You call a pre-defined API guess(int num) which returns 3 possible results (-1, 1, or 0):

-1 : My number is lower
 1 : My number is higher
 0 : Congrats! You got it!
Example:
n = 10, I pick 6.

Return 6.
*/

// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower(guess numebr is higher), 
//1 if my number is higher(guess number is lower), otherwise return 0

int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        if(n == 1) return 1;
        
        int left = 1, right = n, mid;
        while(left <= right){
            mid = left + (right - left)/2;
            if(guess(mid) == 0) return mid;
            else if(guess(mid) == 1)  left = mid+1;
            else  right = mid-1;
        }
        return 0;
    }
};