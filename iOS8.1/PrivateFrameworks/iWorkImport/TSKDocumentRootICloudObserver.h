//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue;

__attribute__((visibility("hidden")))
@interface TSKDocumentRootICloudObserver : NSObject
{
    long long _identifier;
    NSOperationQueue *_operationQueue;
    CDUnknownBlockType _block;
    long long _identifer;
}

@property(readonly, nonatomic) long long identifer; // @synthesize identifer=_identifer;
- (void)invokeWithDocumentRoot:(id)arg1;
- (void)dealloc;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end
