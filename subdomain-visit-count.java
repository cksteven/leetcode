class Solution {
    public List<String> subdomainVisits(String[] cpdomains) {
        HashMap<String, Integer> counts = new HashMap<String, Integer>();
        for(String domain:cpdomains){
            String[] domains = domain.split(" ");
            int count = Integer.parseInt(domains[0]);
            domain = domains[1];
            domains = domain.split("\\.");
            for(int i=0;i<domains.length;i++){
                ArrayList<String> temp = new ArrayList<String>();
                for(int j=i;j<domains.length;j++)
                    temp.add(domains[j]);
                String full = String.join(".",temp);
                Integer oldCount = counts.get(full);
                if(oldCount==null)
                    counts.put(full,count);
                else
                    counts.replace(full,count+oldCount);
            }
        }
        ArrayList<String> ans = new ArrayList<String>();
        for (Map.Entry<String, Integer> pair : counts.entrySet()) {
            ans.add(pair.getValue()+" "+pair.getKey());
        }       
        return ans;
    }
}