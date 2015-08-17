//
//  324.c
//  List
//
//  Created by Frank on 17/8/15.
//  Copyright (c) 2015年 Frank. All rights reserved.
//

#include "324.h"
#include <time.h>


Link circleList(int number) {
    Link head = malloc(sizeof(Node));
    head->next = head;
    head->a = 1;
    Link t = NULL,pre = head;
    for (int i = 2; i < number; i++) {
        t = malloc(sizeof(Node));
        t->a = i;
        t->next = head;
        pre->next = t;
        pre = t;
    }
    return head;
}

Link randomCircleNode(Link head) {
    srand(time(NULL));
    int randomNumber = rand()%10;
    int i = 0;
    Link t = head;
    while (t->next != NULL) {
        t = t->next;
        
        if (i == randomNumber) {
            break;
        }
        i++;
    }
    return t;
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

int gapOfCircleLinks(Link a,Link b) {
    int i = 0;
    while (a->next != b) {
        i++;
        a = a->next;
    }
    return i;
}
