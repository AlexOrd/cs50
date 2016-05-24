/**
 * dictionary.c
 *
 * Computer Science 50
 * Problem Set 5
 *
 * Implements a dictionary's functionality.
 */

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#include "dictionary.h"
#define LETTERS  27

typedef struct TRIE 
    { 
        bool isTerminal;
        unsigned int count;
        struct TRIE* children[LETTERS];
        
    } TRIE;

bool loadboard(TRIE*,char*);
void free_N(TRIE*);

TRIE* init (void);
TRIE* root;

/**
 * Returns true if word is in dictionary else false.
 */
 
bool check(const char* word)
{
    //return false;
    TRIE* next = root;
    int index;
    
    for (int i = 0, size = strlen(word); i <= size; i++) {
        
        if (word[i] == '\0' && next->isTerminal == true) {
            return true;
        }
        
        if (word[i] == '\'') {
            index = 26;
        }
        else {
            index = tolower(word[i]) - 'a';
        }
        //printf("%s\t%d\n", word, index);
        if (next->children[index] == NULL) {
            return false;
        }
        
        next = next->children[index];
        
    }
    return false;
}

/**
 * Loads dictionary into memory.  Returns true if successful else false.
 */
bool load(const char* dictionary)
{
    root = init();
    FILE* file = fopen(dictionary, "r");
    if (file == NULL)
    {
        printf("Could not open %s.\n", dictionary);
        return 2;
    }
    char buffer [LENGTH + 1];
    
    while (fgets(buffer, LENGTH + 1, file)) {
        
        loadboard(root, buffer);
        //printf("%s", buffer);
    }
    //TRIE* init();
    fclose(file);
    return true;
}

/**
 * Returns number of words in dictionary if loaded else 0 if not yet loaded.
 */
unsigned int size(void)
{
    return root->count;;
}

/**
 * Unloads dictionary from memory.  Returns true if successful else false.
 */
bool unload(void)
{
    for (int i = 0;i < LETTERS; i++)            
    {
        if (root->children[i] != NULL)  
            free_N(root->children[i]);
    }
    return true;         
}

void free_N(TRIE* Node)
{
    for (int i = 0; i < LETTERS; i++)
    {
        if (Node->children[i] != NULL) {
            free_N(Node->children[i]);
        }
    }
    free(Node);
}


TRIE* init (void)
{
    TRIE* trie = malloc(sizeof(TRIE));
    trie->isTerminal = false;
    trie->count = 0;
    for (int i = 0; i < LETTERS; i++) {
        trie->children[i] = NULL;
    }
    return trie;
    
}

bool loadboard(TRIE* node, char* word)
{
    int index;
    
    if (word[0] == '\0' || '\n' == word[0]) {
        if (node->isTerminal) {
        }
        else {
            node->isTerminal = true;
            return true;
        }
    }
    
    if (word[0] == '\'') {
        index = 26;  
    }
    else {
        index = tolower(word[0]) - 'a';
    } // gde v massive lejit
    
    TRIE* child = node->children[index];
    
    if (child == NULL) {
        child = init();
        node->children[index] = child;
    }
    
    bool result = loadboard(child, word + 1);
    
    if (result) {
    node->count++; // podschiot
    }
    
return result;
}
