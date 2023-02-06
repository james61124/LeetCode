/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    vector<Node*>visit;
    Node* dfs(Node* node){
        Node* start = new Node;
        start->val = node->val;
        visit[node->val] = start;
        
        for(int i=0;i<node->neighbors.size();i++){
            if(visit[node->neighbors[i]->val]==NULL){
                Node* child = dfs(node->neighbors[i]);
                cout<<child->val<<endl;
                start->neighbors.push_back(child);
            }else{
                start->neighbors.push_back(visit[node->neighbors[i]->val]);
            }
        }   
        
        
        return start;
    }
    
    Node* cloneGraph(Node* node) {
        
        visit.resize(150);
        for(int i=0;i<visit.size();i++){
            visit[i] = NULL;
        }
        if(node==NULL) return NULL;
        else return dfs(node);
        
    }
};