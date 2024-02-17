#include "Types.h"
#include "stdio.h"
#include "stdlib.h"
#include "Tree.h"


int main() {
	treeNode* root = NULL;
	insertNumber(&root, 17);
	insertNumber(&root, 23);
	insertNumber(&root, 14);
	insertNumber(&root, 7);
	insertNumber(&root, 10);
	insertNumber(&root, 3);
	insertNumber(&root, 8);
	insertNumber(&root, 77);
	insertNumber(&root, 87);

	PrintTree(root);
	printf("is Number found %d = (%d)\n",17, isNumberFound(root, 17));
	return 0;
}