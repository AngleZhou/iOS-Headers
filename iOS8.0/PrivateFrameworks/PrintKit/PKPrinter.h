//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSNumber, NSString, NSURL, PKPaperList;

@interface PKPrinter : NSObject
{
    NSString *name;
    int type;
    int accessState;
    NSDictionary *printInfoSupported;
    struct _http_s {
        int _field1;
        int _field2;
        int _field3;
        int _field4;
        int _field5;
        int _field6;
        int _field7;
        int _field8;
        struct sockaddr_in _field9;
        char _field10[256];
        char _field11[27][256];
        char *_field12;
        int _field13;
        int _field14;
        int _field15;
        char _field16[2048];
        int _field17;
        struct _cups_md5_state_s {
            unsigned int _field1[2];
            unsigned int _field2[4];
            unsigned char _field3[64];
        } _field18;
        char _field19[256];
        int _field20;
        struct SSLContext *_field21;
        int _field22;
        struct fd_set *_field23;
        int _field24;
        char *_field25;
        char _field26[256];
        char _field27[256];
        int _field28;
        long long _field29;
        union _http_addr_u *_field30;
        struct http_addrlist_s *_field31;
        char _field32[2048];
        int _field33;
        char *_field34;
        char *_field35;
        struct __CFArray *_field36;
        CDUnknownFunctionPointerType _field37;
        void *_field38;
        double _field39;
        int _field40;
        int _field41;
        int _field42;
        char *_field43;
        char *_field44;
        char *_field45;
        char *_field46;
        char *_field47;
        char *_field48;
        int _field49;
        struct z_stream_s _field50;
        char *_field51;
    } *job_http;
    NSMutableDictionary *privateData;
    NSMutableDictionary *specialFeedOrientation;
    NSArray *printScalingSupported;
    NSArray *mandatoryJobAttributes;
    NSString *quotaManagementURL;
    int maxPDFKBytes;
    int maxJPEGKBytes;
    int maxJPEGXDimension;
    int maxJPEGYDimension;
    int maxCopies;
    int preferred_landscape;
    int printerStateReasons;
    BOOL isLocal;
    BOOL hasIdentifyPrinterOp;
    BOOL connectionShouldNotBeTrusted;
    BOOL isFromMCProfile;
    int kind;
    PKPaperList *_paperList;
}

+ (id)nameForHardcodedURI:(id)arg1;
+ (id)hardcodedURIs;
+ (BOOL)printerLookupWithName:(id)arg1 andTimeout:(double)arg2;
+ (id)printerWithName:(id)arg1 discoveryTimeout:(double)arg2;
+ (id)printerWithName:(id)arg1;
+ (id)requiredPDL;
+ (BOOL)urfIsOptional;
+ (struct _ipp_s *)getAttributes:(const char **)arg1 count:(int)arg2 fromURI:(id)arg3;
@property(retain) PKPaperList *paperList; // @synthesize paperList=_paperList;
@property(readonly) int type; // @synthesize type;
@property(readonly) BOOL hasIdentifyPrinterOp; // @synthesize hasIdentifyPrinterOp;
@property BOOL isFromMCProfile; // @synthesize isFromMCProfile;
@property BOOL isLocal; // @synthesize isLocal;
@property(readonly) int accessState; // @synthesize accessState;
@property(readonly) int kind; // @synthesize kind;
@property(readonly) NSString *name; // @synthesize name;
- (void)setupWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)validatePassCode:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)showPassCodeForSetupWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly) BOOL setupSupportsPasswordScope;
@property(readonly) BOOL needsSetup;
- (void)reconfirmWithForce:(BOOL)arg1;
- (void)cancelUnlock;
- (void)unlockWithCompletionHandler:(CDUnknownBlockType)arg1;
- (int)startJob:(id)arg1 ofType:(id)arg2;
- (int)sendData:(const char *)arg1 ofLength:(int)arg2;
- (int)printURL:(id)arg1 ofType:(id)arg2 printSettings:(id)arg3;
- (int)finishJob;
- (int)abortJob;
- (void)doMedia2:(struct _ipp_s *)arg1;
- (id)matchedPaper:(id)arg1 preferBorderless:(BOOL)arg2 withDuplexMode:(id)arg3 didMatch:(char *)arg4;
- (id)papersForDocumentWithSize:(struct CGSize)arg1 andDuplex:(BOOL)arg2;
- (id)papersForPhotoWithSize:(struct CGSize)arg1;
- (id)paperListForDuplexMode:(id)arg1;
- (id)rollReadyPaperListWithContentSize:(struct CGSize)arg1 forPhoto:(BOOL)arg2;
- (id)rollReadyPaperListWithContentSize:(struct CGSize)arg1;
- (BOOL)knowsReadyPaperList;
- (BOOL)isPaperReady:(id)arg1;
@property(readonly) NSString *uuid; // @dynamic uuid;
@property(readonly) BOOL isIPPS; // @dynamic isIPPS;
@property(readonly) BOOL isAdobeRGBSupported; // @dynamic isAdobeRGBSupported;
@property(readonly) NSDictionary *printInfoSupported;
- (void)checkOperations:(struct _ipp_s *)arg1;
- (void)identifySelf;
@property(readonly) BOOL hasPrintInfoSupported; // @dynamic hasPrintInfoSupported;
- (int)feedOrientation:(id)arg1;
- (void)aggdAppsAndPrinters;
- (id)availableRollPapersPreferBorderless:(BOOL)arg1;
@property(readonly) int jobTypesSupported;
- (id)localizedPrinterWarnings;
- (void)handlePrinterStateReasonsFromResponse:(struct _ipp_s *)arg1;
- (id)makeAndModel;
- (id)location;
- (id)displayName;
- (id)description;
- (void)dealloc;
- (BOOL)isBonjour;
@property(readonly) NSURL *printerURL;
- (void)setPrivateObject:(id)arg1 forKey:(id)arg2;
- (id)privateObjectForKey:(id)arg1;
- (id)localName;
- (int)finalizeJob:(int)arg1;
- (struct _ipp_s *)createRequest:(id)arg1 ofType:(id)arg2 url:(id)arg3;
- (BOOL)resolveWithTimeout:(int)arg1;
- (void)resolve;
@property(readonly, retain) NSString *scheme;
@property(retain) NSNumber *port; // @dynamic port;
@property(retain) NSString *hostname; // @dynamic hostname;
@property(retain) NSDictionary *TXTRecord; // @dynamic TXTRecord;
- (id)TXTRecordWithTimeout:(int)arg1;
- (id)txtRecordObjectForKey:(id)arg1;
- (void)setAccessStateFromTXT;
- (void)updateType;
- (id)initWithName:(id)arg1 TXTRecord:(id)arg2;
- (id)initWithName:(id)arg1 TXT:(id)arg2;
- (struct _ipp_s *)getAttributes:(const char **)arg1 count:(int)arg2;
- (struct _ipp_s *)getPrinterAttributes;

@end
