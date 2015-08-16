//
//  main.m
//  List
//
//  Created by xiushan.fan on 16/8/15.
//  Copyright (c) 2015年 Frank. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LinkList.h"



#define LinkNum  5

int main(int argc, const char * argv[]) {
    Link head = NULL;
    head = initNode(LinkNum);
    freeNode(head);
    printf("item = %d",item(head));
    
}
