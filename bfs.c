//bfs for a tree

#include <stdio.h>
#include "bbq.h"
#include "bfs.h"

// change to c code.
void search (Tree root, unsigned int N, Key key, T *val, RetVal *found) {
	List *q = (List*)malloc(sizeof(List));
	int n = 0;
	q.add(root);
	n ++;
	while (n != 0 && *found == 0) {
		Tree tmp = q.dequeue();
		n --;
		if (q->t->id == key) {
			*found = 1;
			*val = q->t->val;
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
