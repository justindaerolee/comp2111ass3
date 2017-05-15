//bfs for a tree

#include <stdio.h>
#include "bbq.h"
#include "bfs.h"

typedef struct llist {
	llist next;
	Tree node;
} *llist

// change to c code.
void search (Tree root, unsigned int N, Key key, T *val, RetVal *found) {
	int n = 0;
	llist q = (llist*)malloc(sizeof(llist));;
	q.add(root);
	while (n != 0 && *found == 0) {
		Tree tmp = q.dequeue();
		n --;
		if (q->node->key == key) {
			*found = 1;
			*val = q->node->payload;
		} else {
			for child in children :
				q.add(child);
				n ++;
		}
	}
}

// abstract bounded queue, q
// length of the queue, n
// match key and return val and found. 
