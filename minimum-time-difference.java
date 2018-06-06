class Solution {
    public int findMinDifference(List<String> timePoints) {
        HashMap<Integer,String> hashMap = new HashMap<Integer,String>();
        for(String str:timePoints){
            int time=0;
            time=Integer.parseInt(str.substring(0,2))*60+Integer.parseInt(str.substring(3,5));
            hashMap.put(time,str);
        }
        TreeMap<Integer,String> treeMap = new TreeMap<Integer,String>(hashMap);
        Object[] entrys = treeMap.entrySet().toArray();
        if(entrys.length<timePoints.size())
            return 0;
        int minDiff = 1441;
        for(int i=1;i<entrys.length;i++){
            int diff = ((Map.Entry<Integer, String>)entrys[i]).getKey()-((Map.Entry<Integer, String>)entrys[i-1]).getKey();
            if(diff<minDiff)
                minDiff=diff;
        }
        int temp = ((Map.Entry<Integer, String>)entrys[0]).getKey() + 1440 - ((Map.Entry<Integer, String>)entrys[entrys.length-1]).getKey();
        if(temp<minDiff)
            minDiff = temp;
        return minDiff;
    }
}