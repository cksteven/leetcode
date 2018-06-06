class Solution {
    public String[] findWords(String[] words) {
        //                    a b c d e f g h i j k l m n o p q r s t u v w x y z
        int[] row = new int[]{2,3,3,2,1,2,2,2,1,2,2,2,3,3,1,1,1,1,2,1,1,3,1,3,1,3};
        ArrayList<String> ans = new ArrayList<String>();
        for(String word:words){
            char[] arr = word.toLowerCase().toCharArray();
            int flag = row[arr[0]-'a'];
            int found = 1;
            for(char ch:arr)
                if(row[ch-'a']!=flag)
                    found=0;
            if(found==1)
                ans.add(word);
        }
        return ans.toArray(new String[ans.size()]);
    }
}