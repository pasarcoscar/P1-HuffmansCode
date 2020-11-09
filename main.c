/**
 * \file HuffmanCode.c
 * \brief The main source where the main function takes place
 * \date 21 oct. 2020
 * \author Kylian.S, Tommy Lee.A, Joel.G, Jules.R, Oscar.V
 * \version 0.1
 *
 * Compression program using Huffman Algorith, with trees and queues
 *
 */

#include "./UseHuffmanCode/includes/treesActions.h"
#include "./IHMHuffmanCode/includes/fileActions.h"
#include "./IHMHuffmanCode/includes/text2bin.h"

static void printTreePrefixe(Node* a){
	if(a != NULL){
		printf("%d\n", a->data);
		printTreePrefixe(a->left);
		printTreePrefixe(a->right);
	}
}

/**
 * \brief Program entry
 *
 * \return EXIT_SUCCESS - Normal stop from the program
 */
int main(){
	/*
	char* a = "Alice was beginning to get very tired of \n sitting by her sister on the bank, and of having nothing to do";
	printf("%s\n %s\n", a, text2bin(a));
	*/
	/*
	char a = ' ';
	printf("%c, %d, %s", a, (int)a, char2bin(a));
	*/
	char* a;
	a = read_txt();
	printf("%s, %s", a, text2bin(a));

	return EXIT_SUCCESS;
}
