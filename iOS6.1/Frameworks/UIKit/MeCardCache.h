/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface MeCardCache : NSObject
{
    void *_me;
}

+ (void)provideMeCardIfAvailableToBlock:(id)arg1;
+ (void)provideMeCardToBlock:(id)arg1;
+ (void)_provideMeCardIfAvailableToBlock:(id)arg1 otherwiseCompleteWithBlock:(void)arg2;
+ (id)sharedCache;
- (void *)copyMeRecord;
- (void)setMeRecord:(void *)arg1;
- (void)_addressBookChanged:(id)arg1;
- (void)_requestMeCardWithBlock:(id)arg1;
- (void)dealloc;
- (id)init;

@end
