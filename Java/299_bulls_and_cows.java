/*
You are playing the following Bulls and Cows game with your friend: 
You write down a number and ask your friend to guess what the number is. 
Each time your friend makes a guess, you provide a hint 
that indicates how many digits in said guess match your secret number exactly 
in both digit and position (called "bulls") and how many digits match the secret number 
but locate in the wrong position (called "cows"). 
Your friend will use successive guesses and hints to eventually derive the secret number.
*/

public class Solution {
    public String getHint(String secret, String guess) {
        int bulls = 0;
        int cows = 0;

        char[] secretArray = secret.toCharArray();

        char[] guessArray = guess.toCharArray();

        // find the bulls
        for (int i = 0; i < secretArray.length; i++) {
            if (secretArray[i] == guessArray[i]) {
                bulls++;
                secretArray[i] = 'f';
                guessArray[i] = 'f';
            }
        }

        // find the cows
        for (int i = 0; i < secretArray.length; i++) {
            if (secretArray[i] != 'f') {
                for (int j = 0; j < guessArray.length; j++) {
                    if (i != j && secretArray[i] == guessArray[j]) {
                        cows++;
                        guessArray[j] = 'f';
                        break;
                    }
                }
            }
        }
        return bulls + "A" + cows + "B";
    }
}