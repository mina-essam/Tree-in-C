#include "Types.h"
#include "stdio.h"
#include "stdlib.h"
#include "Tree.h"

treeNode* createNewNode(sint32_t value) {

	treeNode* Node = (treeNode*)malloc(sizeof(treeNode));
	
	if (Node != NULL) {
		Node->leftChild  = NULL;
		Node->rightChild = NULL;
		Node->value = value;
		return Node;
	}

	return NULL;
}
static void printTabs(sint32_t NumTabs)
{
	for (sint32_t i = 0; i < NumTabs; i++) {
		printf("\t");
	}
}
static void printTree(treeNode* root, sint32_t depth) {
	if (root == NULL)
	{
		printTabs(depth);
		printf("Empty tree \n");
		return;
	}
	printTabs(depth);
	printf("value = %d\n", root->value);
	printTabs(depth);

	printf("Left of %d :\n", root->value);
	printTree(root->leftChild, depth +1);
	printTabs(depth);

	printf("Right of %d:\n", root->value);
	printTree(root->rightChild, depth + 1);
	printf("Done\n");
}

_bool insertNumber(treeNode** root, sint32_t value) {
	treeNode* _root = *root;
	if (_root == NULL)
	{
		(*root) = createNewNode(value);
		return true;
	}
	if (_root->value == value)
	{
		return false;
	}
	if (value < _root->value)
	{
		return insertNumber(&(_root->leftChild), value);
	} else {
		return insertNumber(&(_root->rightChild), value);
	}
}
_bool isNumberFound(treeNode* root, sint32_t value) {
	if (root == NULL)
		return false;
	if (root->value == value)
		return true;

	if (value < root->value)
	{
		return 	isNumberFound(root->leftChild, value);
	}
	else {
		return isNumberFound(root->rightChild, value);
	}
}
void PrintTree(treeNode* root) {
	printTree(root, 0);
}
