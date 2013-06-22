/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GeoServices/GEOPlaceSearchRequest.h>

@class NSString;

@interface GEOGeocodeRequest : GEOPlaceSearchRequest
{
    unsigned short _provider;
    NSString *_logRequestToFile;
    NSString *_logResponseToFile;
}

@property(retain, nonatomic) NSString *logResponseToFile; // @synthesize logResponseToFile=_logResponseToFile;
@property(retain, nonatomic) NSString *logRequestToFile; // @synthesize logRequestToFile=_logRequestToFile;
@property(nonatomic) unsigned short provider; // @synthesize provider=_provider;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initForwardGeocodeWithAddressString:(id)arg1;
- (id)initForwardGeocodeWithAddressDictionary:(id)arg1;
- (id)initReverseGeocodeWithCoordinate:(CDStruct_2c43369c)arg1;
- (id)init;

@end
