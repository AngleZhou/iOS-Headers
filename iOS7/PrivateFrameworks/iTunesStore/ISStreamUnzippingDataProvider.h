/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iTunesStore/ISDataProvider.h>

@class NSArray, NSError, NSString, SZExtractor;

@interface ISStreamUnzippingDataProvider : ISDataProvider
{
    unsigned long long _expectedUncompressedSize;
    SZExtractor *_extractor;
    _Bool _extractorComplete;
    NSString *_localFilePath;
    long long _streamedBytes;
    NSArray *_hashes;
    long long _numberOfBytesToHash;
    NSError *_unzipError;
    _Bool _shouldResumeFromLocalBytes;
}

+ (_Bool)isHashMismatchError:(id)arg1;
@property(readonly) NSError *unzipError; // @synthesize unzipError=_unzipError;
@property long long numberOfBytesToHash; // @synthesize numberOfBytesToHash=_numberOfBytesToHash;
@property(retain) NSArray *hashes; // @synthesize hashes=_hashes;
@property long long streamedBytes; // @synthesize streamedBytes=_streamedBytes;
@property _Bool shouldResumeFromLocalBytes; // @synthesize shouldResumeFromLocalBytes=_shouldResumeFromLocalBytes;
@property(retain) NSString *localFilePath; // @synthesize localFilePath=_localFilePath;
@property(getter=isExtractorComplete) _Bool extractorComplete; // @synthesize extractorComplete=_extractorComplete;
@property(readonly) SZExtractor *extractor; // @synthesize extractor=_extractor;
@property(readonly) unsigned long long expectedUncompressedSize; // @synthesize expectedUncompressedSize=_expectedUncompressedSize;
- (void)_suspendStream;
- (_Bool)_openExtractor;
- (void)_completeStream;
- (void)streamDidFailWithError:(id)arg1;
- (void)streamCancelled;
- (void)setup;
- (void)resetStream;
- (_Bool)parseData:(id)arg1 returningError:(id *)arg2;
- (_Bool)isStreamComplete;
- (_Bool)isStream;
- (id)hashFailureHeaderStringForUnzipError;
- (id)closeStream;
- (_Bool)canStreamContentLength:(long long)arg1 error:(id *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithExpectedUncompressedSize:(unsigned long long)arg1;

@end

