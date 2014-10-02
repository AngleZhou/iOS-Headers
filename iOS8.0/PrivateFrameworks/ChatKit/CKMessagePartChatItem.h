//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ChatKit/CKBalloonChatItem.h>

@class IMMessage, NSArray;

@interface CKMessagePartChatItem : CKBalloonChatItem
{
}

@property(readonly, copy, nonatomic) NSArray *pasteboardItems;
@property(readonly, nonatomic) BOOL color;
@property(readonly, retain, nonatomic) IMMessage *message;
- (void)configureBalloonView:(id)arg1;
- (id)sender;
- (id)time;
- (BOOL)failed;
- (BOOL)isFromMe;
- (BOOL)canSendAsTextMessage;
- (BOOL)canForward;
- (BOOL)canCopy;
- (id)description;
- (id)composition;

@end
