bool enqueue(queue* the_queue, void* itemPtr){
//	Local Definitions 
	node* newPtr;

//	Statements 
	if (!(newPtr = (node*) malloc(sizeof(node))))
	   return false;

	newPtr->dataPtr = itemPtr; 
	newPtr->next = NULL; 
	 
	if (the_queue->count == 0)
	   the_queue->front  = newPtr;
	else
	   the_queue->rear->next = newPtr; 

	(the_queue->count)++;
	the_queue->rear = newPtr;
	return true;
}	// enqueue 