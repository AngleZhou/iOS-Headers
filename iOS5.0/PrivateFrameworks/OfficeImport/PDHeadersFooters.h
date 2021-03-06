/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface PDHeadersFooters : NSObject
{
    BOOL mHasDateTime;
    BOOL mHasNowDateTime;
    BOOL mHasUserDateTime;
    BOOL mHasSlideNumber;
    BOOL mHasHeader;
    BOOL mHasFooter;
    int mDateTimeFormat;
    NSString *mUserDateTime;
    NSString *mHeader;
    NSString *mFooter;
}

- (void)dealloc;
- (BOOL)hasDateTime;
- (void)setHasDateTime:(BOOL)arg1;
- (BOOL)hasNowDateTime;
- (void)setHasNowDateTime:(BOOL)arg1;
- (BOOL)hasUserDateTime;
- (void)setHasUserDateTime:(BOOL)arg1;
- (BOOL)hasSlideNumber;
- (void)setHasSlideNumber:(BOOL)arg1;
- (BOOL)hasHeader;
- (void)setHasHeader:(BOOL)arg1;
- (BOOL)hasFooter;
- (void)setHasFooter:(BOOL)arg1;
- (id)userDateTime;
- (void)setUserDateTime:(id)arg1;
- (id)header;
- (void)setHeader:(id)arg1;
- (id)footer;
- (void)setFooter:(id)arg1;

@end

