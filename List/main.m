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
#import "ArrayStack.h"
#import "LinkStack.h"


#define LinkNum  5

int main(int argc, const char * argv[]) {
    STACKLinkInit(5);
    for (int i = 0; i < 5; i++) {
        STACKLinkPush(i);
    }
    
    for (int i = 0; i < 5; i++) {
        int popResult = STACKLinkPop();
        printf("pop %d \n",popResult);
    }
    
    
}
