class Solution {
public:
    int convertTime(string current, string correct) {
        int ch = stoi(current.substr(0, 2)) * 60 + stoi(current.substr(3, 2));
        int ch2 = stoi(correct.substr(0, 2)) * 60 + stoi(correct.substr(3, 2));
        int diff = ch2 - ch;
        int ops = 0;
        for (int d : {60, 15, 5, 1}) {
            ops += diff / d;
            diff %= d;
        }
        return ops;
    }
};
