class Solution {
public:
    string toGoatLatin(string sentence) {
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        stringstream ss(sentence);
        string word, result;
        int index = 1;
        while (ss >> word) {
            if (index > 1) result += " ";
            if (vowels.count(word[0])) {
                result += word + "ma";
            } else {
                result += word.substr(1) + word[0] + "ma";
            }
            result += string(index, 'a');
            index++;
        }
        return result;
    }
};
