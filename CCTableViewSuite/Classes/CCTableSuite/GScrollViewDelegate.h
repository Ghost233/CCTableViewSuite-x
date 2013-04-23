//
//  GScrollViewDelegate.h
//  GTableViewSuite
//
//  Created by Ghost on 12-9-11.
//
//

#ifndef __GTableViewSuite__GScrollViewDelegate__
#define __GTableViewSuite__GScrollViewDelegate__

#include "cocos2d.h"

using namespace cocos2d;

class GScrollView;

class GScrollViewDelegate
{
public:
    virtual void scrollViewDidScroll(GScrollView *view) = 0;
};

#endif
