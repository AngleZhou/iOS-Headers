/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MFDAStreamingContentConsumer-Protocol.h"

@class NSMutableData;

@interface MFDAMessageContentConsumer : NSObject <MFDAStreamingContentConsumer>
{
    int _requestedFormat;
    id <MFCollectingDataConsumer> _dataConsumer;
    id <MFCollectingDataConsumer> _alternatePartConsumer;
    id <MFMessageDataConsumerFactory> _consumerFactory;
    BOOL _triedCreatingAlternatePartConsumer;
    BOOL _succeeded;
    NSMutableData *_bodyData;
    double _timeOfLastActivity;
}

- (BOOL)shouldBeginStreamingForMailMessage:(id)arg1 format:(int)arg2;
- (void)consumeData:(char *)arg1 length:(int)arg2 format:(int)arg3 mailMessage:(id)arg4;
- (void)didEndStreamingForMailMessage:(id)arg1;
- (id)data;
- (BOOL)succeeded;
- (id)dataConsumerForPart:(id)arg1;
- (void)dealloc;
@property(readonly, nonatomic) double timeOfLastActivity; // @synthesize timeOfLastActivity=_timeOfLastActivity;
@property(nonatomic) int requestedFormat; // @synthesize requestedFormat=_requestedFormat;
@property(retain, nonatomic) id <MFMessageDataConsumerFactory> consumerFactory; // @synthesize consumerFactory=_consumerFactory;
@property(readonly, retain, nonatomic) NSMutableData *bodyData; // @synthesize bodyData=_bodyData;
@property(retain, nonatomic) id <MFCollectingDataConsumer> alternatePartConsumer; // @synthesize alternatePartConsumer=_alternatePartConsumer;
@property(retain, nonatomic) id <MFCollectingDataConsumer> dataConsumer; // @synthesize dataConsumer=_dataConsumer;

@end
