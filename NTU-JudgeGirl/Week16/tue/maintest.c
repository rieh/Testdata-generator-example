#include <stdio.h>
#include "tree.h"

void printAndFree(Node *u) {
	if (u == NULL)	return ;
	printf("%d ", u->label);
	printAndFree(u->left);
	printAndFree(u->right);
	free(u);
}

int main() {
	int A[32767], n;
	while (scanf("%d", &n) == 1 && n != 0) {
		for (int i = 0; i < n; i++)
			scanf("%d", &A[i]);
		Node *root = construct(A, n);
		printAndFree(root);
		puts("");
	}
	return 0;
}
/*
1
8
3
1 3 2
8
1 2 3 7 5 1 1 6
*/
