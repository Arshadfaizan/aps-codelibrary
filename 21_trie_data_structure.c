#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 26
 
typedef struct TrieNode TrieNode;
{
    char data;
    TrieNode* children[N];
    int is_leaf;
};
 
TrieNode* make_trienode(char data) {
  
    TrieNode* node = (TrieNode*) calloc (1, sizeof(TrieNode));
    for (int i=0; i<N; i++)
        node->children[i] = NULL;
    node->is_leaf = 0;
    node->data = data;
    return node;
}
 
void free_trienode(TrieNode* node) {

    for(int i=0; i<N; i++) {
        if (node->children[i] != NULL) {
            free_trienode(node->children[i]);
        }
        else {
            continue;
        }
    }
    free(node);
}
 
TrieNode* insert_trie(TrieNode* root, char* word) {
 
    TrieNode* temp = root;
 
    for (int i=0; word[i] != '\0'; i++) {
       
        int idx = (int) word[i] - 'a';
        if (temp->children[idx] == NULL) {
           
            temp->children[idx] = make_trienode(word[i]);
        }
        else {
           
        }
       
        temp = temp->children[idx];
    }
    
    temp->is_leaf = 1;
    return root;
}
 
int search_trie(TrieNode* root, char* word)
{
    // Searches for word in the Trie
    TrieNode* temp = root;
 
    for(int i=0; word[i]!='\0'; i++)
    {
        int position = word[i] - 'a';
        if (temp->children[position] == NULL)
            return 0;
        temp = temp->children[position];
    }
    if (temp != NULL && temp->is_leaf == 1)
        return 1;
    return 0;
}
 
int check_divergence(TrieNode* root, char* word) {
    // Checks if there is branching at the last character of word
    // and returns the largest position in the word where branching occurs
    TrieNode* temp = root;
    int len = strlen(word);
    if (len == 0)
        return 0;
    // We will return the largest index where branching occurs
    int last_index = 0;
    for (int i=0; i < len; i++) {
        int position = word[i] - 'a';
        if (temp->children[position]) {
         
            for (int j=0; j<N; j++) {
                if (j != position && temp->children[j]) {
               
                    last_index = i + 1;
                    break;
                }
            }
           
            temp = temp->children[position];
        }
    }
    return last_index;
}
 
char* find_longest_prefix(TrieNode* root, char* word) {
   
    if (!word || word[0] == '\0')
        return NULL;
 
    int len = strlen(word);

    char* longest_prefix = (char*) calloc (len + 1, sizeof(char));
    for (int i=0; word[i] != '\0'; i++)
        longest_prefix[i] = word[i];
    longest_prefix[len] = '\0';

    int branch_idx  = check_divergence(root, longest_prefix) - 1;
    if (branch_idx >= 0) {

        longest_prefix[branch_idx] = '\0';
        longest_prefix = (char*) realloc (longest_prefix, (branch_idx + 1) * sizeof(char));
    }
 
    return longest_prefix;
}
 
int is_leaf_node(TrieNode* root, char* word) {
    TrieNode* temp = root;
    for (int i=0; word[i]; i++) {
        int position = (int) word[i] - 'a';
        if (temp->children[position]) {
            temp = temp->children[position];
        }
    }
    return temp->is_leaf;
}
 
TrieNode* delete_trie(TrieNode* root, char* word) {

    if (!root)
        return NULL;
    if (!word || word[0] == '\0')
        return root;

    if (!is_leaf_node(root, word)) {
        return root;
    }
    TrieNode* temp = root;
 
    char* longest_prefix = find_longest_prefix(root, word);

    if (longest_prefix[0] == '\0') {
        free(longest_prefix);
        return root;
    }

    int i;
    for (i=0; longest_prefix[i] != '\0'; i++) {
        int position = (int) longest_prefix[i] - 'a';
        if (temp->children[position] != NULL) {
            // Keep moving to the deepest node in the common prefix
            temp = temp->children[position];
        }
        else {

            free(longest_prefix);
            return root;
        }
    }

    int len = strlen(word);
    for (; i < len; i++) {
        int position = (int) word[i] - 'a';
        if (temp->children[position]) {
            // Delete the remaining sequence
            TrieNode* rm_node = temp->children[position];
            temp->children[position] = NULL;
            free_trienode(rm_node);
        }
    }
    free(longest_prefix);
    return root;
}
 
void print_trie(TrieNode* root) {
    // Prints the nodes of the trie
    if (!root)
        return;
    TrieNode* temp = root;
    printf("%c -> ", temp->data);
    for (int i=0; i<N; i++) {
        print_trie(temp->children[i]); 
    }
}
 
void print_search(TrieNode* root, char* word) {
    printf("Searching for %s: ", word);
    if (search_trie(root, word) == 0)
        printf("Not Found\n");
    else
        printf("Found!\n");
}
 
int main() {

    TrieNode* root = make_trienode('\0');
    root = insert_trie(root, "hello");
    root = insert_trie(root, "hi");
    root = insert_trie(root, "teabag");
    root = insert_trie(root, "teacan");
    print_search(root, "tea");
    print_search(root, "teabag");
    print_search(root, "teacan");
    print_search(root, "hi");
    print_search(root, "hey");
    print_search(root, "hello");
    print_trie(root);
    printf("\n");
    root = delete_trie(root, "hello");
    printf("After deleting 'hello'...\n");
    print_trie(root);
    printf("\n");
    root = delete_trie(root, "teacan");
    printf("After deleting 'teacan'...\n");
    print_trie(root);
    printf("\n");
    free_trienode(root);
    return 0;
}
