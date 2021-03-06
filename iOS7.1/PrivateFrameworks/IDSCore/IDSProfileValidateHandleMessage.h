//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDSCore/IDSProfileMessage.h>

#import "NSCopying.h"

@class NSNumber, NSString;

@interface IDSProfileValidateHandleMessage : IDSProfileMessage <NSCopying>
{
    NSString *_uri;
    NSNumber *_responseVettingStatus;
    NSString *_deviceName;
}

@property(copy) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(copy) NSNumber *responseVettingStatus; // @synthesize responseVettingStatus=_responseVettingStatus;
@property(copy, setter=setURI:) NSString *URI; // @synthesize URI=_uri;
- (void)handleResponseDictionary:(id)arg1;
- (id)messageBody;
- (id)requiredKeys;
- (id)bagKey;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

