//
//  LinkList.c
//  List
//
//  Created by Frank on 16/8/15.
//  Copyright (c) 2015年 Frank. All rights reserved.
//

#include "LinkList.h"

Link initNode(int number) {
    Node nodeA;
    Link head = &nodeA;
    Link t = head;
    head = t;
    for (int i = 0; i < number; i++) {
        t->next = malloc(sizeof(Node));
        t = t->next; t->next = NULL;
        t->a = i;
    }
    t = head;
    for (int i = 0; i < 5; i++) {
        t = t->next;
        printf("t.a = %d\n",t->a);
    }
    return head;
}

Link newNode(int number) {
    Link head = NULL;
    Link t = malloc(sizeof(Node));
    head = t;
    for (int i = 0; i < number; i++) {
        t->next = malloc(sizeof(Node));
        t->a = i;
        t = (t->next);
    }
    t->next = NULL;
    
    t = head;
    for (int i = 0; i < 5; i++) {
        printf("t.a = %d\n",t->a);
        t = t->next;
    }
    return head;
}

void freeNode(Link link) {
    while (link->next != NULL) {
        Link c = link;
        link = link->next;
        free(c);
    }
}

void insertNext(Link current,Link nodeLink) {
    nodeLink->next = current->next->next;
    current->next = nodeLink;
}

void deleteNext(Link current,Link nodeLink) {
    if (current->next == nodeLink) {
        current->next = nodeLink->next;
        free(nodeLink);
    }
}

Link next(Link current) {
    return current->next;
}

int item(Link current) {
    return current->a;
}

void printNode(Link current) {
    while (current != NULL) {
        printf("item = %d\n",current->a);
        current = current->next;
    }
}

Link reverseLink(Link head) {
    Link end = head;
    Link track = NULL,record = NULL;
    while (end->next->next != NULL) {
        track = end->next;
        end->next = end->next->next;
    }
    return NULL;
}
