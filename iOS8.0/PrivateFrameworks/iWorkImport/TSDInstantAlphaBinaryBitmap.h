//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface TSDInstantAlphaBinaryBitmap : NSObject
{
    int mWidth;
    int mHeight;
    int mRowBytes;
    char *mData;
}

@property(readonly, nonatomic) char *data; // @synthesize data=mData;
@property(readonly, nonatomic) int rowBytes; // @synthesize rowBytes=mRowBytes;
@property(readonly, nonatomic) int height; // @synthesize height=mHeight;
@property(readonly, nonatomic) int width; // @synthesize width=mWidth;
- (id)medianBitmap;
- (void)unionWithBitmap:(id)arg1;
- (void)dealloc;
- (id)initWithWidth:(int)arg1 height:(int)arg2;
- (id)initWithWidth:(int)arg1 height:(int)arg2 rowBytes:(int)arg3;

@end
