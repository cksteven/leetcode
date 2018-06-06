class Solution {
    public int[] shortestToChar(String S, char C) {
        ArrayList<Integer> locations = new ArrayList<Integer>();
        char[] charArray = S.toCharArray();
        int[] distances = new int[charArray.length];
        for(int i=0;i<charArray.length;i++)
            if(charArray[i]==C) locations.add(i);
        for(int i=0;i<charArray.length;i++){
            int min=10001;
            int index=-1;
            for(Integer j:locations){
                int d = Math.abs(j-i);
                if(d<min){
                    min=d;
                    index=j;
                }
            }
            distances[i]=Math.abs(index-i);
        }
        return distances;
    }
}