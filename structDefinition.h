//Struct definition

typedef struct qnode{
	char *lexeme;
	char tag;
	int line;
	struct qnode *next;
}node;

typedef struct{
	node *front;
	node *rear;
	int count;
}queue;

