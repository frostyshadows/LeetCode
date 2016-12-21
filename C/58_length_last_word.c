/*
Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.

If the last word does not exist, return 0.
*/

int lengthOfLastWord(char* s) {
    // int i = 0;
    int lengths[sizeof(s)];
    int num = 0;
    lengths[0] = 0;
    
    for (int i = 0; i < sizeof(s); i++){
        if (s[i] == ' '){
            num++;
            lengths[num] = 0;
        } else {
            lengths[num]++;
        }
    }
    
    return lengths[num];
}