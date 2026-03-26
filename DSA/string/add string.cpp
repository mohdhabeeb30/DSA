class Solution {
public:
    // Yeh function tabhi sahi chalega jab num1 bada ho
    string add(string num1, string num2) {
        int index1 = num1.size() - 1;
        int index2 = num2.size() - 1;
        int carry = 0;
        string ans = "";

        // Choti string (num2) khatam hone tak chalo
        while(index2 >= 0) {
            int sum = (num1[index1] - '0') + (num2[index2] - '0') + carry;
            carry = sum / 10;
            ans += (sum % 10) + '0';
            index1--;
            index2--;
        }

        // Badi string (num1) ke bache hue digits handle karo
        while(index1 >= 0) {
            int sum = (num1[index1] - '0') + carry;
            carry = sum / 10;
            ans += (sum % 10) + '0';
            index1--;
        }

        if(carry) {
            ans += '1';
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }

    // Main function jo decide karega bada kaunsa hai
    string addStrings(string num1, string num2) {
        if(num1.size() < num2.size()) {
            return add(num2, num1); // num2 bada hai toh use pehle bhejo
        } else {
            return add(num1, num2); // num1 bada hai
        }
    }
};