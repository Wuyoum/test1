#include "testLib.h"

void showMsg(char *msg) {
	if (msg == NULL)
		printf("msg is NULL\n");
		
	printf("[%s] msg is %s\n", __FUNCTION__, msg);
	
}

