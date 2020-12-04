#include <stdlib.h>
#include "../includes/occurrence.h"

static OccurrenceLetter* createOccurrenceLetter(char letter){
    OccurrenceLetter* newOccurrenceLetter = (OccurrenceLetter*) malloc(sizeof(OccurrenceLetter));

    newOccurrenceLetter->letter = letter;
    newOccurrenceLetter->occurrence = 1;

    return newOccurrenceLetter;
}

static ElementOccurrenceLetter* createElementOccurrenceLetter(char letter){
    ElementOccurrenceLetter* newElementOccurrenceLetter = (ElementOccurrenceLetter*) malloc(sizeof(ElementOccurrenceLetter));
    
    newElementOccurrenceLetter->data = createOccurrenceLetter(letter);
    newElementOccurrenceLetter->next = NULL;

    return newElementOccurrenceLetter;
}

static void actualizeOccurrenceLetter(ElementOccurrenceLetter** listOccurrenceLetters, char letter){
    if (*listOccurrenceLetters == NULL){
        // the letter doesn't exist, so we add it at the queue
        ElementOccurrenceLetter* newLetter = createElementOccurrenceLetter(letter);
        *listOccurrenceLetters = newLetter;
    }else{
        if ((*listOccurrenceLetters)->data->letter == letter){
            ++(*listOccurrenceLetters)->data->occurrence;
        }else{
            actualizeOccurrenceLetter(&(*listOccurrenceLetters)->next, letter);
        }
    }
}

void findOccurrenceLettersInText(ElementOccurrenceLetter** listOccurrenceLetters, char* text){
    int i = 0;

    while (text[i] != '\0'){
        actualizeOccurrenceLetter(listOccurrenceLetters, text[i]);
        ++i;
    }
}