#include "doublyLinkedSwap.h"

bool isValid(Node * p) {
    if(p->prev==nullptr || p==nullptr || p->next==nullptr || p->next->next==nullptr || p->next->prev==nullptr || p->prev->next==nullptr) {
        return false;
    } else {
        return true;
    }
}

void swapWithNext(Node * p) {
    if(isValid(p)) {
        p->next->next->prev = p;
        p->next->prev = p->prev;
        p->prev->next = p->next;
        p->prev = p->next;
        p->next = p->next->next;
        p->prev->next = p;
    }
}