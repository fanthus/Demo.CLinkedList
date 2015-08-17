//
//  main.m
//  List
//
//  Created by Frank on 16/8/15.
//  Copyright (c) 2015年 Frank. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LinkList.h"
#import "324.h"



#define LinkNum  5

int main(int argc, const char * argv[]) {
    Link head = circleList(5);
    printf("circle node number = %d\n",circleNodeNumber(head));
    Link randomLink = randomCircleNode(head);
    printf("head.item = %d\n",head->a);
    printf("randomLink.item = %d\n",randomLink->a);
    printf("gap = %d",gapOfCircleLinks(head, randomLink));
}
