/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface IMAVMicrophone : NSObject
{
    id _internalDevice;
}

- (id)description;
@property(readonly, nonatomic) NSString *uniqueID;
- (id)_FTAudioDevice;
@property(readonly, nonatomic) NSString *name;
- (void)dealloc;
- (id)init;
- (id)_initWithFTAudioDevice:(id)arg1;

@end

