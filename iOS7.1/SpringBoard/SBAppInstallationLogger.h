//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBFileLogger.h"

@interface SBAppInstallationLogger : SBFileLogger
{
    _Bool _enabled;
}

- (void)reloadFromDefaults;
- (_Bool)includeConsole;
- (_Bool)isEnabled;
- (id)name;

@end

