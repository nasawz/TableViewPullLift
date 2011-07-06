//
//  RootViewController.h
//  TableViewPullLift
//
//  Created by zhe wang on 11-7-6.
//  Copyright 2011年 nasawz.com. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "WZRefreshTableHeaderView.h"
#import "WZLoadMoreTableFooterView.h"


@interface RootViewController : UITableViewController <WZRefreshTableHeaderDelegate,WZLoadMoreTableFooterDelegate, UITableViewDelegate, UITableViewDataSource>{
    WZRefreshTableHeaderView * _refreshHeaderView;
    WZLoadMoreTableFooterView * _loadMoreFooterView;
    BOOL _loading;
}

- (void)reloadTableViewDataSource;
- (void)doneLoadingTableViewData;


- (void)loadMoreTableViewDataSource;
- (void)doneLoadMoreTableViewData;
@end
