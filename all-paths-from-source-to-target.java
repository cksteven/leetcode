class Solution {
    
    public static boolean[] visited;
    public static List<Integer> path;
    List<List<Integer>> paths;
    public static int n;
    public static int[][] GRAPH;
    
    public List<List<Integer>> allPathsSourceTarget(int[][] graph) {
        path = new ArrayList<Integer>();
        paths = new ArrayList<List<Integer>>();
        GRAPH = graph;
        n = graph.length;
        visited = new boolean[n];
        path.add(0);
        visited[0] = true;
        dfs(0);
        return paths;
    }
    
    public void dfs(int u){
        if(u == n-1){
            paths.add(new ArrayList<Integer>(path));
            return;
        }
        int[] vs = GRAPH[u];
        if(vs.length == 0) return;
        for(int i = 0; i < vs.length; i++){
            int v = vs[i];
            if(!visited[v]){
                visited[v] = true;
                path.add(v);
                dfs(v);
                path.remove(path.size() - 1);
                visited[v] = false;
            }
        }
    }
}