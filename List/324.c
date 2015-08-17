//
//  324.c
//  List
//
//  Created by Frank on 17/8/15.
//  Copyright (c) 2015年 Frank. All rights reserved.
//

#include "324.h"


Link circleList(int number) {
    Link head = malloc(sizeof(Node));
    head->next = head;
    head->a = 100;
    Link t = NULL,pre = head;
    for (int i = 0; i < number; i++) {
        t = malloc(sizeof(Node));
        t->a = i;
        t->next = head;
        pre->next = t;
        pre = t;
    }
    return head;
}


int circleNodeNumber(Link circleLink) {
    Link head = circleLink;
    int number = 0;
    while (circleLink->next != head) {
        number++;
        circleLink = circleLink->next;
    }
    return number+1;
}