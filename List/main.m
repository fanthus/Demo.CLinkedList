//
//  main.m
//  List
//
//  Created by xiushan.fan on 16/8/15.
//  Copyright (c) 2015年 Frank. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef struct node * Link;

typedef struct node {
    int a;
    Link next;
}Node;

#define LinkNum  5

int main(int argc, const char * argv[]) {
    Link head = NULL;
    Link t = malloc(sizeof(Node));
    head = t;
    for (int i = 0; i < 5; i++) {
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
    return 0;
}
