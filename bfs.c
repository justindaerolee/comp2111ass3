//bfs for a tree

#include <stdio.h>
#include "bbq.h"
#include "bfs.h"


// change to c code.
void search (Tree root, unsigned int N, Key key, T *val, RetVal *found) {
    //initialisation
    //(1)-(4)
    Tree r[N+1];
    int h = 0;
    int t = -1;
    int n = 0;
    *found = Failure;
    //(5)-(6)
    if (root = null)return;
    t++; 
    r[t % (N+1)] = root;
    //(7)
    n++;
    //(8-) while loop
    while (n != 0 && *found == Failure) {
        //(9)-(10)dequeue
        Tree tmp = r[h % (N+1)];
        h ++;
        //(11)
        n --;//do n--/n++ or n = b-a+1?
        //(12-)if statement
        // if found no need to continue the search
        if (tmp->id == key) {
        	//(8)(c)
            *found = Success;
            *val = tmp->val;
        } else {
        	//(8)(d)
            // else add all the children of the tmp tree.
            List *m = tmp->list;
            while (m != NULL) {
            	Tree c = m->n;
                t++;
                r[t % (N+1)] = c;
                n++;
                m = m->next;
            }
        }
    }
}

// void enq(List *q, Tree v, int n) {
//     List *tmp = q;
//     int i = 1;
//     while (i != n) {
//         tmp = tmp->next;
//     }
//     tmp->next = v;
// }


// abstract bounded queue, q
// length of the queue, n
// match key and return val and found. 
