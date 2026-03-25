class Solution {
public:
    bool isPalindrome(string s) {
        
        string temp = "";

        // Step 1: clean string
        // for loop se string ke har character ko check krte hai agar wo alphanumeric hai to temp string me add krte hai aur lowercase me convert krte hai 
        // c is a character variable that takes each character of the string s one by one in the loop.
        for(char c : s){
            if(isalnum(c)){              // check krta hai  kon sa character alphanumeric hai ignore  karega space aur punctuation ko
                temp += tolower(c);      // convert to lowercase
            }
        }

        // Step 2: check palindrome
        int left = 0;
        int right = temp.size() - 1;

        while(left < right){
            if(temp[left] != temp[right]){
                return false;
            }
            left++;
            right--;
        }

        return true;
    }
}