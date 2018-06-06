class Solution {
    public int uniqueMorseRepresentations(String[] words) {
        String[] morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        HashSet<String> set = new HashSet<String>();
        for(String word : words){
            String code = "";
            for(int i = 0;i < word.length();i++)
                code += morse[word.charAt(i)-'a'];
            set.add(code);
        }
        return set.size();
    }
}