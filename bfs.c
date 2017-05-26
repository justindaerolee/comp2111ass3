//bfs for a tree

#include <stdio.h>
#include "bbq.h"
#include "bfs.h"


// change to c code.
void search (Tree root, unsigned int N, Key key, T *val, RetVal *found) {
    //initialisation
    //(1)and(5)
    List q[N];
    int n;
    *found = Failure;
    //(6)
    Tree tmp;
    List head;
    head->n = root;
    head->next = NULL;
    q[0] = head;
    n = 1;
    //not shown in the tex file
    int a, b = 0;
    //(4) while loop
    while (n != 0 && *found == Failure) {
    	//(8)(a)
        //dequeue
        tmp = q[a]->n;
        a ++;
        n --;//do n--/n++ or n = b-a+1?
        //(8)(b)
        // if found no need to continue the search
        if (tmp->id == key) {
        	//(8)(c)
            *found = Success;
            *val = tmp->val;
        } else {
        	//(8)(d)
            // else add all the children of the tmp tree.
            List *children = tmp->list;
            while (children != NULL) {
                add(q, children, n);
                b++;
                n++;
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
