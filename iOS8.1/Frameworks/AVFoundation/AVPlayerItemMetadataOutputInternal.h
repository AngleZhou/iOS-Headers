//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVWeakReference, AVWeakReferencingDelegateStorage, NSArray, NSObject<OS_dispatch_queue>;

@interface AVPlayerItemMetadataOutputInternal : NSObject
{
    NSArray *metadataIdentifiers;
    AVWeakReferencingDelegateStorage *delegateStorage;
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    NSObject<OS_dispatch_queue> *accumulationQueue;
    AVWeakReference *weakReferenceToHost;
    double advanceInterval;
    struct __CFDictionary *accumulatedMetadataGroups;
}

@end
