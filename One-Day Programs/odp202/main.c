#include <stdio.h>

void init(node*);

int main(int argc, char const *argv[]){

	node myNode[100];
	myNode[0].data = 44;
	printf("DaTA:%d\n", myNode[0].data);

	init(myNode);

	//print myNode
	for(int i=0; i<100; i++){
		printf("%d -- DATA:%d, NEXT:%d, VALID:%d\n", i, myNode[i].data, myNode[i].next, myNode[i].valid);
	}

	return 0;
}

