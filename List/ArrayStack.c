//
//  PushDownStack.c
//  List
//
//  Created by xiushan.fan on 22/8/15.
//  Copyright (c) 2015年 Frank. All rights reserved.
//

#include "ArrayStack.h"

void STACKinit(int maxN) {
    s = malloc(sizeof(Item)*maxN);
    N = 0;
}

int STACKempty() {
    return N == 0;
}

void STACKpush(Item item) {
    s[N] = item;
    N = N+1;
}

Item STACKpop(){
    N = N - 1;
    Item item = s[N];
    return item;
}

