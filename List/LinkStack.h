//
//  LinkStack.h
//  List
//
//  Created by xiushan.fan on 22/8/15.
//  Copyright (c) 2015年 Frank. All rights reserved.
//

#ifndef __List__LinkStack__
#define __List__LinkStack__

typedef int Item;

typedef struct stacknode *StackLink;

typedef struct stacknode{
    Item item;
    StackLink next;
}StackNode;

static StackLink head;

#include <stdio.h>

void STACKLinkInit(int maxN);

int STACKLinkEmpty(void);

void STACKLinkPush(Item item);

Item STACKLinkPop();


#endif /* defined(__List__LinkStack__) */
