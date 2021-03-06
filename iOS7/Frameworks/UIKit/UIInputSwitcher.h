/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, UIDelayedAction, UIInputSwitcherView;

// Not exported
@interface UIInputSwitcher : NSObject
{
    UIDelayedAction *m_switcherDelay;
    int m_state;
    UIInputSwitcherView *m_switcherView;
    NSString *_newMode;
}

+ (id)activeInstance;
+ (id)sharedInstance;
- (_Bool)handleModifiersChangedEvent:(id)arg1;
- (_Bool)switchMode:(id)arg1 withDelay:(_Bool)arg2;
- (_Bool)handleSwitchCommand:(_Bool)arg1;
- (_Bool)isVisible;
- (void)clearSwitcherTimer;
- (void)cancelSwitcherTimer;
- (void)touchSwitcherTimer;
- (void)showSwitcher;
- (void)clearHideSwitcherTimer;
- (void)touchHideSwitcherTimer;
- (void)hideSwitcher;
- (void)handleRotate:(id)arg1;
- (void)setNewMode:(id)arg1;
- (id)newMode;
- (void)dealloc;
- (id)init;

@end

