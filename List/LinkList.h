//
//  LinkList.h
//  List
//
//  Created by Frank on 16/8/15.
//  Copyright (c) 2015年 Frank. All rights reserved.
//

#ifndef __List__LinkList__
#define __List__LinkList__

typedef struct node * Link;

typedef struct node {
    int a;
    Link next;
}Node;

#include <stdio.h>
#include <stdlib.h>

Link initNode(int number);

Link newNode(int);

void freeNode(Link link);

void insertNext(Link current,Link nodeLink);

void deleteNext(Link current,Link nodeLink);

Link next(Link current);

int item(Link current);

void printNode(Link current);

Link reverseLink(Link head);


#endif /* defined(__List__LinkList__) */
