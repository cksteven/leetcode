class Solution {
public:
    set<char> vowels {'a','e','i','o','u','A','E','I','O','U'};
    string toGoatLatin(string S) {
        stringstream ss(S);
        vector<string> words;
        string word;
        while(ss>>word) words.push_back(word);
        int count=0;
        for(auto &x:words){
            if(vowels.count(x[0])) x+="ma";
            else x=x.substr(1)+x[0]+"ma";
            for(int i=0;i<=count;i++) x+='a';
            count++;
        }
        word=words[0];
        for(int i=1;i<count;i++) word+=" "+words[i];
        return word;
    }
};