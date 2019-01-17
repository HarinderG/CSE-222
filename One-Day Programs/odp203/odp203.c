struct node{
		int data;
		int next;
		int valid;
	};

int get_node(struct node myNode[]){

	for (int i = 0; i < 100; ++i)
	{
		if (myNode[i].valid == 0)
			return i;
	}
	return -1;
}