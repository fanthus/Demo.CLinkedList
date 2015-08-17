//
//  324.h
//  List
//
//  Created by Frank on 17/8/15.
//  Copyright (c) 2015年 Frank. All rights reserved.
//

#ifndef __List___24__
#define __List___24__

#include <stdio.h>
#include "LinkList.h"

Link circleList(int number);

void printCircleList(Link head);

Link randomCircleNode(Link head);

int circleNodeNumber(Link circleLink);

int gapOfCircleLinks(Link a,Link b);

Link insertLinkToAnotherLink(Link a,Link b);

#endif /* defined(__List___24__) */
