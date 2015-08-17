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
    Link headA = circleList(3);
    Link headB = circleList(8);
    
    printCircleList(headA);
    printf("******\n");
    printCircleList(headB);
    printf("\n");
    
    Link randomA = randomCircleNode(headA);
    printf("randomA = %d\n",randomA->a);
    Link randomB = randomCircleNode(headB);
    printf("randomB = %d\n",randomB->a);
    printf("******\n");
    
    insertLinkToAnotherLink(randomA, randomB);
    

    printCircleList(randomA);
    
}
