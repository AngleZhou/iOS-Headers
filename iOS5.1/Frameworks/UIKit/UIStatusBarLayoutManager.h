/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class UIStatusBarForegroundView, UIStatusBarItemView;

@interface UIStatusBarLayoutManager : NSObject
{
    UIStatusBarForegroundView *_foregroundView;
    int _region;
    UIStatusBarItemView *_itemViews[23];
}

@property(nonatomic) UIStatusBarForegroundView *foregroundView; // @synthesize foregroundView=_foregroundView;
- (struct CGRect)_repositionedNewFrame:(struct CGRect)arg1 widthDelta:(float)arg2;
- (float)_positionAfterPlacingItemView:(id)arg1 startPosition:(float)arg2;
- (struct CGRect)_frameForItemView:(id)arg1 startPosition:(float)arg2;
- (float)_startPosition;
- (SEL)_itemSortSelector;
- (id)_itemViewsSortedForLayout;
- (id)_itemViews;
- (id)_createViewForItem:(id)arg1 withData:(id)arg2 actions:(int)arg3;
- (id)_viewForItem:(id)arg1;
- (float)_widthNeededForItemView:(id)arg1;
- (void)itemView:(id)arg1 widthChangedBy:(float)arg2;
- (BOOL)itemIsVisible:(id)arg1;
- (struct CGRect)rectForItems:(id)arg1;
- (float)removeOverlap:(float)arg1 fromItems:(id)arg2;
- (float)distributeOverlap:(float)arg1 amongItems:(id)arg2;
- (void)clearOverlapFromItems:(id)arg1;
- (float)widthNeededForItems:(id)arg1;
- (float)widthNeededForItem:(id)arg1;
- (void)makeVisibleItemsPerformPendedActions;
- (void)positionInvisibleItems;
- (void)removeDisabledItems:(char *)arg1;
- (void)reflowWithVisibleItems:(id)arg1 duration:(double)arg2;
- (BOOL)updateDoubleHeightItem;
- (BOOL)prepareDoubleHeightItemWithEnabledItems:(char *)arg1;
- (BOOL)_updateItemView:(id)arg1 withData:(id)arg2 actions:(int)arg3 animated:(BOOL)arg4;
- (void)_positionNewItemViewsWithEnabledItems:(char *)arg1;
- (void)_prepareEnabledItemType:(int)arg1 withEnabledItems:(char *)arg2 withData:(id)arg3 actions:(int)arg4 itemAppearing:(char *)arg5 itemDisappearing:(char *)arg6;
- (BOOL)updateItemsWithData:(id)arg1 actions:(int)arg2 animated:(BOOL)arg3;
- (BOOL)prepareEnabledItems:(char *)arg1 withData:(id)arg2 actions:(int)arg3;
- (void)dealloc;
- (id)initWithRegion:(int)arg1 foregroundView:(id)arg2;

@end
