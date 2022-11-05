int m,n,tot;
struct Node{
    Node* links[26];
    bool is_end=false; 
    bool conkey(char ch){
        return (links[ch-'a']!=NULL);
    }
    Node* get(char ch){
        return links[ch-'a'];
    }
    void put(char ch,Node* node){
        links[ch-'a']=node;
    }
};
class Trie{
Node*root;
public:
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
    Node* getRoot(){
        return root;
    }
    Trie(){
        root=new Node();
    }
    void insert(string w){
        Node* node=root;
        for(int i=0;i<w.size();i++){
            if(!node->conkey(w[i]))
                node->put(w[i],new Node());
            node=node->get(w[i]);
        }
        node->is_end=true;
    }
    void findw(vector<vector<char>>& board,int x,int y,string&w,vector<string>&ans,Node*node){
        if(x<0 || x>=m || y<0 || y>=n || board[x][y]==' ') return;
        if(node->conkey(board[x][y])){
            w+=board[x][y];
            node=node->get(board[x][y]);
            if(node->is_end){
                ans.push_back(w);
                tot--;
                node->is_end=false;
                if(tot==0) return;
            }
            char c=board[x][y];
            board[x][y]=' ';
            for(int i=0;i<4;i++){
                int nx=x+dx[i],ny=y+dy[i];
                findw(board,nx,ny,w,ans,node);
                if(tot==0){
                    board[x][y]=c;
                    return;
                }
            }
            board[x][y]=c;
            w.pop_back();
        }
    }
};
class Solution {
public:
    
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        Trie* ob=new Trie;
        tot=words.size();
        Node* node=ob->getRoot();
        vector<string>ans;
        for(auto &i:words){
            ob->insert(i);
        }
        m=board.size(),n=board[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                string temp="";
                ob->findw(board,i,j,temp,ans,node);
                if(tot==0) return ans;
            }
        }
        return ans;
    }
};
