class TrieNode{
    public:
            TrieNode* children[26];
            bool isend;
            TrieNode(){
                for(int i=0;i<26;i++)children[i]=nullptr;
                isend=false;
            }

};
class PrefixTree {
    TrieNode* root;
public:
    PrefixTree() {
        root=new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* node=root;
        for(char ch:word){
            int val=ch-'a';
            if(!node->children[val]){
                node->children[val]=new TrieNode();
            }
            node=node->children[val];
        }
           node->isend=true;
    }
    
    bool search(string word) {
        TrieNode* node=root;
        for(char ch:word){
            int ind=ch-'a';
            if(node->children[ind] == nullptr){
                return false;
            }
            node=node->children[ind];
        }
        return node->isend;
    }
    
    bool startsWith(string prefix) {
        TrieNode* cur=root;
        for(char c:prefix){
            int i=c-'a';
            if(cur->children[i]==nullptr){
                return false;
            }
            cur=cur->children[i];
        }
        return true;
    }
};
