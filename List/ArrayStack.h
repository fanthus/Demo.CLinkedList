//
//  PushDownStack.h
//  List
//
//  Created by xiushan.fan on 22/8/15.
//  Copyright (c) 2015年 Frank. All rights reserved.
//


typedef int Item;

static Item *s;     //保存数组地址.
static int N;       //记录下标

#include <stdio.h>
#include <stdlib.h>

void STACKinit(int maxN);

int STACKempty(void);

void STACKpush(Item item);

Item STACKpop();

