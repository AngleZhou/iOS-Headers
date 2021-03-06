/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class OADFill, OADStroke, OADTableCell3DProperties;

@interface OADTableCellProperties : NSObject
{
    OADStroke *mLeftStroke;
    BOOL mIsLeftStrokeOverridden;
    OADStroke *mRightStroke;
    BOOL mIsRightStrokeOverridden;
    OADStroke *mTopStroke;
    BOOL mIsTopStrokeOverridden;
    OADStroke *mBottomStroke;
    BOOL mIsBottomStrokeOverridden;
    OADStroke *mTopLeftToBottomRightStroke;
    BOOL mIsTopLeftToBottomRightStrokeOverridden;
    OADStroke *mBottomLeftToTopRightStroke;
    BOOL mIsBottomLeftToTopRightStrokeOverridden;
    OADTableCell3DProperties *mThreeDProperties;
    BOOL mIsThreeDPropertiesOverridden;
    OADFill *mFill;
    BOOL mIsFillOverridden;
    float mLeftMargin;
    BOOL mIsLeftMarginOverridden;
    float mRightMargin;
    BOOL mIsRightMarginOverridden;
    float mTopMargin;
    BOOL mIsTopMarginOverridden;
    float mBottomMargin;
    BOOL mIsBottomMarginOverridden;
    int mTextVertical;
    BOOL mIsTextVerticalOverridden;
    int mTextAnchor;
    BOOL mIsTextAnchorOverridden;
    BOOL mTextAnchorCenter;
    BOOL mIsTextAnchorCenterOverridden;
    int mTextHorizontalOverflow;
    BOOL mIsTextHorizontalOverflowOverridden;
}

- (void)dealloc;
- (id)stroke:(int)arg1;
- (id)leftStroke;
- (void)setLeftStroke:(id)arg1;
- (BOOL)isLeftStrokeOverridden;
- (id)rightStroke;
- (void)setRightStroke:(id)arg1;
- (BOOL)isRightStrokeOverridden;
- (id)topStroke;
- (void)setTopStroke:(id)arg1;
- (BOOL)isTopStrokeOverridden;
- (id)bottomStroke;
- (void)setBottomStroke:(id)arg1;
- (BOOL)isBottomStrokeOverridden;
- (id)topLeftToBottomRightStroke;
- (void)setTopLeftToBottomRightStroke:(id)arg1;
- (BOOL)isTopLeftToBottomRightStrokeOverridden;
- (id)bottomLeftToTopRightStroke;
- (void)setBottomLeftToTopRightStroke:(id)arg1;
- (BOOL)isBottomLeftToTopRightStrokeOverridden;
- (id)strokeNormalToDir:(int)arg1 bound:(int)arg2;
- (id)threeDProperties;
- (void)setThreeDProperties:(id)arg1;
- (BOOL)isThreeDPropertiesOverridden;
- (id)fill;
- (void)setFill:(id)arg1;
- (BOOL)isFillOverridden;
- (float)leftMargin;
- (void)setLeftMargin:(float)arg1;
- (BOOL)isLeftMarginOverridden;
- (float)rightMargin;
- (void)setRightMargin:(float)arg1;
- (BOOL)isRightMarginOverridden;
- (float)topMargin;
- (void)setTopMargin:(float)arg1;
- (BOOL)isTopMarginOverridden;
- (float)bottomMargin;
- (void)setBottomMargin:(float)arg1;
- (BOOL)isBottomMarginOverridden;
- (int)textVertical;
- (void)setTextVertical:(int)arg1;
- (BOOL)isTextVerticalOverridden;
- (int)textAnchor;
- (void)setTextAnchor:(int)arg1;
- (BOOL)isTextAnchorOverridden;
- (BOOL)textAnchorCenter;
- (void)setTextAnchorCenter:(BOOL)arg1;
- (BOOL)isTextAnchorCenterOverridden;
- (int)textHorizontalOverflow;
- (void)setTextHorizontalOverflow:(int)arg1;
- (BOOL)isTextHorizontalOverflowOverridden;

@end

