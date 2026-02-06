class Solution {
public:
    string reformatNumber(string number) {
        string clean;
        for (char c : number) {
            if (isdigit(c)) {
                clean += c;
            }
        }   
        string result;
        int n = clean.length();
        int i = 0;
         while (n - i > 4) {
            result += clean.substr(i, 3) + "-";
            i += 3;
        }
         if (n - i == 4) {
            result += clean.substr(i, 2) + "-" + clean.substr(i + 2, 2);
        } else {
            result += clean.substr(i);
        }     
        return result;
    }
};
