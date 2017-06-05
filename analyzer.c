#include "caput.h"

int main (){
	//Definitions
	FILE *file;
	char token[10];
	queue *lexeme_queue;

	//Statements
	file = fopen("../lexicalAnalyzer/output.txt", "r");
	lexeme_queue = create();

	while(fscanf(file, token) != EOF){
		printf("%s\n", token);
		enqueue(lexeme_queue, token);
	}

	fclose(file);
	return 0;
}