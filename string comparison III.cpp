class Solution {
public:
    string compressedString(string word) {
        string comp;
        comp.reserve(word.length()); 

        int n = word.length();
        int i = 0;

        while (i < n) {
            char current_char = word[i];
            int count = 0;

            while (i < n && word[i] == current_char && count < 9) {
                count++;
                i++;
            }

            comp += to_string(count);
            comp += current_char;
        }

        return comp;
    }
};
