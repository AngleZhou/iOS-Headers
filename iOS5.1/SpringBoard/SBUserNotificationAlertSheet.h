/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIAlertView.h"

@class UIImage;

@interface SBUserNotificationAlertSheet : UIAlertView
{
    UIImage *_alertImage;
}

- (void)dismissWithClickedButtonIndex:(int)arg1 animated:(BOOL)arg2;
- (void)layout;
- (void)dealloc;
- (id)_maskedAlertImage;
@property(retain, nonatomic) UIImage *alertImage; // @synthesize alertImage=_alertImage;

@end
