//bfs for a tree

#include <stdio.h>
#include "bbq.h"
#include "bfs.h"

// change to c code.
void search (Tree root, unsigned int N, Key key, T *val, RetVal *found) {
    //initialisation
    List *q = (List*)malloc(sizeof(List));
    int n = 0;
    
    // add first node
    q->n = root;
    q->next = NULL;
    n ++;
    //
    while (n != 0 && *found == 0) {
        //dequeue
        Tree tmp = q->n;
        q = q->next;
        n --;
        // if found no need to continue the search
        if (tmp->id == key) {
            *found = 1;
            *val = tmp->val;
        } else {
            // else add all the children of the tmp tree.
            List *children = tmp->list;
            while (children != NULL) {
                add(q, children, n);
                n++
                children = children->next;
            }
        }
    }
}

void enq(List *q, Tree v, int n) {
    List *tmp = q;
    int i = 1;
    while (i != n) {
        tmp = tmp->next;
    }
    tmp->next = v;
}


// abstract bounded queue, q
// length of the queue, n
// match key and return val and found. 
