bool dequeue (queue* the_queue, void** itemPtr) {
//	Local Definitions 
	node* deleteLoc;

//	Statements 
	if (!the_queue->count)
	    return false;
	 
	*itemPtr  = the_queue->front->dataPtr;
	deleteLoc = the_queue->front;

	if (the_queue->count == 1)
	   the_queue->rear  = the_queue->front = NULL;
	else
	   the_queue->front = the_queue->front->next;
	
	(the_queue->count)--;
	free(deleteLoc);

	return true;
}	// dequeue 