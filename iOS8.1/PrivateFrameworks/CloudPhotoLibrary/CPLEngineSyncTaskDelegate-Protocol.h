//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CPLEngineSyncTask, NSError;

@protocol CPLEngineSyncTaskDelegate <NSObject>
- (void)task:(CPLEngineSyncTask *)arg1 didProgress:(float)arg2;
- (void)task:(CPLEngineSyncTask *)arg1 didFinishWithError:(NSError *)arg2;
@end
