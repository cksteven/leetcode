class Solution {
public:
    string toLowerCase(string str) {
        string result="";
        for(char ch:str){
            if(ch>='A' && ch<='Z')
                result+=ch+'a'-'A';
            else
                result+=ch;
        }
        return result;
    }
};