#include "caput.h"

bool in_wait(char *token, queue *lex_queue){
	char *in_token;

	dequeue(lex_queue, (void**)&in_token);
	if(strcmp(token, in_token)){
		return true;
	}
	else{
		printf("error/ waits for %s, receives %s\n", token, in_token);
		return false;
	}
}

void program(queue *lex_queue, FILE *translation){
	if (in_wait("t_program", lex_queue) &&
		in_wait("t_id", lex_queue)		&&
		in_wait("t_pv ", lex_queue)		){

		fprintf(translation, "int main(){\n");
	}
}

int main (){
	//Definitions
	FILE *file, *translation;
	char token[10];
	queue *lexeme_queue;

	//Statements
	file = fopen("../lexicalAnalyzer/output.txt", "r");
	translation = fopen("code.txt", "a");
	lexeme_queue = create();

	while(fscanf(file, "%s", token) != EOF){
		/*printf("%s\n", token);*/
		enqueue(lexeme_queue, token);
	}
	fclose(file);

	program(lexeme_queue, translation);

	return 0;
}