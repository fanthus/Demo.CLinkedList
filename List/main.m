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
    Link circleLink = circleList(5);
    printf("%d",circleNodeNumber(circleLink));
}
