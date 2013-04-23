//
//  GTableViewDataSource.h
//  CCTableViewSuite
//
//  Created by Ghost on 12-9-12.
//
//

#ifndef CCTableViewSuite_GTableViewDataSource_h
#define CCTableViewSuite_GTableViewDataSource_h

#include "cocos2d.h"

using namespace cocos2d;

#include "GTableViewCell.h"

class GTableView;

/**
 * Data source that governs table backend data.
 */
class GTableViewDataSource
{
public:
    /**
     * Class to be used in the table. As seen, table supports homogeneous cell type. In addition,
     * all cells must have an equal, fixed size.
     *
     * @param table table to hold the instances of Class
     * @return class of the cell instances
     */
    virtual CCSize cellSizeForTable(GTableView *table) = 0;
    /**
     * a cell instance at a given index
     *
     * @param idx index to search for a cell
     * @return cell found at idx
     */
    virtual GTableViewCell* table_cellAtIndex(GTableView *table, int idx) = 0;
    /**
     * Returns number of cells in a given table view.
     *
     * @return number of cells
     */
    virtual int numberOfCellsInTableView(GTableView *table) = 0;
    
};

#endif
