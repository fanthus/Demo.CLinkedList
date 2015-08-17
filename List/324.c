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
        srand(time(NULL) + i);
        int randomNumber = rand()%100;
        t->a = randomNumber;
        t->next = head;
        pre->next = t;
        pre = t;
    }
    return head;
}

void printCircleList(Link head) {
    Link t = head->next;
    printf("item = %d\n",head->a);
    while (t != head) {
        printf("item = %d\n",t->a);
        t = t->next;
    }
}

Link randomCircleNode(Link head) {
    srand((unsigned int)time(NULL));
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

Link insertLinkToAnotherLink(Link a,Link b) {
    Link randomNextA = a->next;
    Link randomNextB = b->next;
    
    a->next = randomNextB;
    b->next = randomNextA;
    return a;
}
