struct node{
		int data;
		int next;
		int valid;
	};

int getFirst(struct node *LL, int *error){

	if (LL[0].next == -1){
		*error = 1;
		return 0;
	}
	else{
		*error = 0;
		return LL[LL[0].next].data;
	}
}