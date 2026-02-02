class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxword = 0;

        for (int i = 0; i < sentences.size(); i++) {
            int space = 0;

            for (int j = 0; j < sentences[i].length(); j++) {
                if (sentences[i][j] == ' ') {
                    space++;
                }
            }
            int word = space + 1;
            maxword = max(maxword, word);
        }
        return maxword;
    }
};
