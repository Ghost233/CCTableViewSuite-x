//
//  GTableViewDelegate.h
//  GTableViewSuite
//
//  Created by Ghost on 12-9-11.
//
//

#ifndef GTableViewSuite_GTableViewDelegate_h
#define GTableViewSuite_GTableViewDelegate_h

#include "cocos2d.h"

using namespace cocos2d;

class GTableView;
class GTableViewCell;

/**
 * Sole purpose of this delegate is to single touch event in this version.
 */
class GTableViewDelegate
{
public:
/**
 * Delegate to responde touch event
 *
 * @param table table contains the given cell
 * @param cell  cell that is touched
 */
    virtual void table_cellTouched(GTableView *table, GTableViewCell *cell, CCPoint localpoint) = 0;
};

#endif
