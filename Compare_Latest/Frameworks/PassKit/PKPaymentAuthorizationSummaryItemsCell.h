//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSMutableArray, PKPaymentAuthorizationLayout;

@interface PKPaymentAuthorizationSummaryItemsCell : UITableViewCell
{
    PKPaymentAuthorizationLayout *_layout;
    NSMutableArray *_labelViews;
    NSMutableArray *_valueViews;
    NSMutableArray *_constraints;
}

- (id)_valueAttributedStringWithString:(id)arg1;
- (id)_labelAttributedStringWithString:(id)arg1;
- (void)updateConstraints;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)addLabel:(id)arg1 value:(id)arg2;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 reuseIdentifier:(id)arg2;

@end

