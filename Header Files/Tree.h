#ifndef TREE_H
#define TREE_H

typedef struct TreeNode {
	int value;
	struct TreeNode* leftChild;
	struct TreeNode* rightChild;

}treeNode;


treeNode* createNewNode(sint32_t);
void printTree(treeNode* , sint32_t );
void PrintTree(treeNode* );
_bool insertNumber(treeNode**, sint32_t);
_bool isNumberFound(treeNode*, sint32_t);
#endif // !TREE_H
