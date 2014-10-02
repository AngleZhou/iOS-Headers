//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DeviceManager, NSString;

@interface ICDevice : NSObject
{
    void *_deviceProperties;
}

- (void)handleImageCaptureEventNotification:(id)arg1;
- (void)handleCommandCompletionNotification:(id)arg1;
@property(readonly) struct CGImage *icon;
- (id)valueForUndefinedKey:(id)arg1;
- (void)requestCloseSession;
- (void)requestOpenSession;
@property BOOL closeSessionPending;
@property BOOL openSessionPending;
@property BOOL autoOpenSession;
@property BOOL hasOpenSession;
@property(copy) NSString *UUIDString;
@property int usbVendorID;
@property int usbProductID;
@property int usbLocationID;
@property(copy) NSString *transportType;
@property(copy) NSString *productKind;
@property(copy) NSString *name;
@property DeviceManager *deviceManager;
@property id <ICDeviceDelegate> delegate;
- (void)finalize;
- (void)dealloc;
- (id)description;
- (id)init;

@end
