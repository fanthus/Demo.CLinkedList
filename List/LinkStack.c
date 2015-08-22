//
//  LinkStack.c
//  List
//
//  Created by xiushan.fan on 22/8/15.
//  Copyright (c) 2015年 Frank. All rights reserved.
//

#include "LinkStack.h"
#include <stdlib.h>

StackLink new(Item item,StackLink next) {
    StackLink x = malloc(sizeof(x));
    x->item = item;
    x->next = next;
    return x;
}

void STACKLinkInit(int maxN) {
    head = NULL;
}

int STACKLinkEmpty(void) {
    return head == NULL;
}

void STACKLinkPush(Item item) {
    head = new(item, head);
}

Item STACKLinkPop() {
    Item item = head->item;
    StackLink t = head->next;
    free(head);
    head = t;
    return item;
}
