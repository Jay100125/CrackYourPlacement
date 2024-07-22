class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        //used for breaking words
        stringstream ss(s);
        string word;
        while(ss >> word)
        {
            words.push_back(word);
        }

        string ans;
        for(int i = words.size()- 1; i >= 0; i--)
        {
            //if(i != words.size() - 1)
            ans += words[i];
            if(i != 0)
                ans += " ";
        } 
        return ans;
    }
};