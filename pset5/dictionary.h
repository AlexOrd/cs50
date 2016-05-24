/**
 * dictionary.h
 *
 * Computer Science 50
 * Problem Set 5
 *
 * Declares a dictionary's functionality.
 */

#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <stdbool.h>

// maximum length for a word
// (e.g., pneumonoultramicroscopicsilicovolcanoconiosis)
#define LENGTH 45

/**
 * Returns true if word is in dictionary else false.
 */
bool check(const char* word); //есть слово или нет

/**
 * Loads dictionary into memory.  Returns true if successful else false.
 */
bool load(const char* dictionary); // путь

/**
 * Returns number of words in dictionary if loaded else 0 if not yet loaded.
 */
unsigned int size(void); // размер словаря

/**
 * Unloads dictionary from memory.  Returns true if successful else false.
 */
bool unload(void); //  очистка

#endif // DICTIONARY_H
