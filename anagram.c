#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

void makeUpperStr(char str[]) {
    /*
    Function to convert a string to uppercase 
    @str[] : String to be converted to uppercase 
    @returns : Does not return anything 
    */
    for (int i = 0; str[i] != '\0'; ++i) {
        str[i] = toupper(str[i]);
    }
    str[strlen(str)] = '\0'; // Terminate the string properly
}

int isAnagram(char word1[], char word2[], int wordlen1, int wordlen2, char temp1[], char temp2[]) {
    if (wordlen1 != wordlen2) {
        printf("%s is NOT an anagram of %s", temp1, temp2);
        return 0;
    }
    /*
    Fucntion to check anagram
    @word1[]: The first which is to be compared 
    @word2[]: the second word to be compared 
    @wordlen1: the length of the first word 
    @temp1: Stores the orginal of the first word 
    @temp2: Stores the orginal of the second word 
    @returns : Returns 0 to terminate the loop 
    
    */

    
    for (int i = 0; i < wordlen1; i++) {
        if (word1[i] != word2[i]) {
              printf("%s is NOT an anagram of %s", temp1, temp2);
            return 0;
        }
    }

     printf("%s is an anagram of %s", temp1, temp2);
    return 0;
}

void sort(char word[], int wordlen) {
    /*
    Function to sort an array 
    @word[]: the word to be sorted 
    @wordlen: The length of word to be sorted 
    @returns : Function does not return anything 
    
    */
    char temp;
    for (int i = 0; i < wordlen - 1; i++) {
        for (int j = i + 1; j < wordlen; j++) {
            if (word[i] > word[j]) {
                temp = word[i];
                word[i] = word[j];
                word[j] = temp;
            }
        }
    }
}

int main() {
   /*
   Function to accept two strings and call functions accordingly to check if they are anagrams 
   @returns: Returns 0 if program runs successfully.
   */
    char word1[20];
    char word2[20];
    char temp1[20];
    char temp2[20];
    printf("Please enter the first word:");
    scanf("%s", word1);
    printf("Please enter the second word:");
    scanf("%s", word2);
    
    int wordlen1 = strlen(word1);
    int wordlen2 = strlen(word2);
     strcpy(temp1, word1);
     strcpy(temp2,word2);
    // Convert strings to uppercase and sort them
    makeUpperStr(word1);
    makeUpperStr(word2);
    sort(word1, wordlen1);
    sort(word2, wordlen2);

    isAnagram(word1, word2, wordlen1, wordlen2,temp1,temp2);

    return 0;
}