/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int> res;
        stack<Node*> que;
        stack<bool> visited;
        if(root==NULL) return res;
        que.push(root);
        visited.push(false);
        while(!que.empty()){
            Node* fr=que.top();
            bool vi=visited.top();
            if(!vi){
                visited.pop();
                visited.push(true);
                
                for(vector<Node*>::reverse_iterator it=fr->children.rbegin();it!=fr->children.rend();++it){ //++ not --
                    que.push(*it);
                    visited.push(false);
                }
                
            }else{
                visited.pop();
                res.push_back(fr->val);
                que.pop();
            }
        }
        return res;
    }
};
