//Struct definition

typedef struct lexeme{
	char *lexeme;
	char tag;
	int line;
	struct qnode *next;
}lexeme;

typedef struct qnode{
	   void*        dataPtr;
	   struct qnode* next;
}node;

typedef struct{
	node *front;
	node *rear;
	int count;
}queue;

