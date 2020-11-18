/**
 * \file huffmanCode.c
 * \brief Source where all encoding-related function take places
 * \date 13 nov. 2020
 * \author Kylian.S, Tommy Lee.A, Joel.G, Jules.R, Oscar.V
 * \version 0.1
 *
 * Compression program using Huffman Algorith, with trees and queues
 *
 */
#include <stdio.h>

static char* findLetterCode(char letter, FILE* dictionary) {
	char letterCode[100];

    while (fgetc(dictionary) != letter) {
    	// we pass to the next letter in the next line
    	while (fgetc(dictionary) != '\n') {
    	}
    }

    // we set the cursor to the code
    fseek(dictionary, 1, SEEK_CUR);

    fscanf(dictionary, "%s", letterCode);

    return letterCode;
}

void findTextEncoded(char* text, FILE* textEncoded, FILE* dictionary) {
    int i = 0;
    
    while (text[i] != '\0') {
        char* letterCode = findLetterCode(text[i], dictionary);

        fprintf(textEncoded, letterCode);
        fseek(dictionary, 0, SEEK_SET);
        ++i;
    }
}