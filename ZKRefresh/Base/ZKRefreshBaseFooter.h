//
//  ZKRefreshBaseFooter.h
//  ZKRefresh
//
//  Created by doggy on 11/13/16.
//  Copyright © 2016 doggy. All rights reserved.
//

#import "ZKRefreshBase.h"

@interface ZKRefreshBaseFooter : ZKRefreshBase

// NS_DESIGNATED_INITIALIZER
+ (instancetype)footerWithRefreshingBlock:(ZKRefreshBaseRefreshingBlock)refreshingBlock;

// State: NoMoreData
- (void)endRefreshingWithNoMoreData;
// State: Idle
- (void)resetNoMoreData;

// Show or hide footer view based on current tableView/collectionView's dataCount. Default is NO
@property (assign, nonatomic, getter=isAutomaticallyHidden) BOOL automaticallyHidden;

// Trigger refreshing before you scrolling to the last item on page.
// Set a percent float value of scrollView's frameHeight.
// Default is Zero which means the refreshing only occur at scrollView's bottom
@property (assign, nonatomic) CGFloat triggerAutomaticallyRefreshPercent;

// KVO `contentOffset` handler
- (void)scrollViewContentOffsetDidChange:(NSDictionary *)change NS_REQUIRES_SUPER;
// KVO `contentSize` handler
- (void)scrollViewContentSizeDidChange:(NSDictionary *)change NS_REQUIRES_SUPER;
@end
