/**
 * \file text2bin.c
 * \brief Source where all text2bin-related tests take places
 * \date 18 nov. 2020
 * \author Kylian.S, Tommy Lee.A, Joel.G, Jules.R, Oscar.V
 * \version 0.1
 *
 * Compression program using Huffman Algorith, with trees and queues
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../../IHMHuffmanCode/includes/text2bin.h"

void testLetterA() {
    char* text = "A";
    char* textInBinary = malloc(8 * sizeof(text));

    text2bin(text, textInBinary);

    if (strcmp(textInBinary, "01000001") == 0) {
        printf("Test 1 : Success");
    } else {
        printf("Test 1 : Failure");
    }
    printf("\n");
}

void testExclamationMark() {
    char* text = "!";
    char* textInBinary = malloc(8 * sizeof(text));

    text2bin(text, textInBinary);

    if (strcmp(textInBinary, "00100001") == 0) {
        printf("Test 2 : Success");
    } else {
        printf("Test 2 : Failure");
    }
    printf("\n");
}

void testWordTasses() {
    char* text = "TASSES";
    char* textInBinary = malloc(8 * sizeof(text));

    text2bin(text, textInBinary);

    if (strcmp(textInBinary, "010101000100000101010011010100110100010101010011") == 0) {
        printf("Test 3 : Success");
    } else {
        printf("Test 3 : Failure");
    }
    printf("\n");
}

void testSimpleSentence() {
    char* text = "Alice was beginning to get very tired of sitting by her sister on the bank, and of having nothing to do";
    char* textInBinary = malloc(8 * sizeof(text));

    text2bin(text, textInBinary);

    if (strcmp(textInBinary, "01000001011011000110100101100011011001010010000001110111011000010111001100100000011000100110010101100111011010010110111001101110011010010110111001100111001000000111010001101111001000000110011101100101011101000010000001110110011001010111001001111001001000000111010001101001011100100110010101100100001000000110111101100110001000000111001101101001011101000111010001101001011011100110011100100000011000100111100100100000011010000110010101110010001000000111001101101001011100110111010001100101011100100010000001101111011011100010000001110100011010000110010100100000011000100110000101101110011010110010110000100000011000010110111001100100001000000110111101100110001000000110100001100001011101100110100101101110011001110010000001101110011011110111010001101000011010010110111001100111001000000111010001101111001000000110010001101111") == 0) {
        printf("Test 4 : Success");
    } else {
        printf("Test 4 : Failure");
    }
    printf("\n");
}

int main() {
    testLetterA();
    testExclamationMark();
    testWordTasses();
    testSimpleSentence();
    return 0;
}
