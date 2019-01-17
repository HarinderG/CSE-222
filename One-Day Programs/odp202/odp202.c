struct node{
		int data;
		int next;
		int valid;
	};

void init(struct node myNode[]){
	myNode[0].valid = 1;
	myNode[0].data = 42;
	myNode[0].next = -1;
	for(int i=1; i<100; i++){
		myNode[i].valid = 0;
		myNode[i].data = 999;
		myNode[i].next = -99999;
	}
}