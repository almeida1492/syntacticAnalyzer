queue* create(void){
//	Local Definitions 
	queue* the_queue;

//	Statements 
	the_queue = (queue*) malloc(sizeof(queue));
	if (the_queue){
	    the_queue->front  = NULL;
	    the_queue->rear   = NULL;
	    the_queue->count  = 0;
	   } 
	return the_queue;
}	// create 
