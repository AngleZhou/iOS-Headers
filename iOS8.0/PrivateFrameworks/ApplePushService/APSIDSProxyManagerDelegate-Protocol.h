//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APSIDSProxyManager, NSData, NSString;

@protocol APSIDSProxyManagerDelegate <NSObject>
- (void)proxyManager:(APSIDSProxyManager *)arg1 incomingPresenceWithGuid:(NSString *)arg2 token:(NSData *)arg3 certificate:(NSData *)arg4 nonce:(NSData *)arg5 signature:(NSData *)arg6 environmentName:(NSString *)arg7;
- (void)proxyManager:(APSIDSProxyManager *)arg1 canUseProxyChanged:(BOOL)arg2;
@end
