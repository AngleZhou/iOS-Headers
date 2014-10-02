//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface TSTLayoutProcessChangesActions : NSObject
{
    BOOL _layoutInvalidate;
    BOOL _layoutInvalidateProvider;
    BOOL _layoutInvalidateSize;
    BOOL _layoutInvalidateTableNameVisibility;
    BOOL _layoutSpacesInvalidateCoordinates;
    BOOL _layoutSpacesInvalidateTableOffsets;
    BOOL _layoutInvalidateChildren;
    BOOL _layoutUpdateChildren;
}

@property(nonatomic) BOOL layoutUpdateChildren; // @synthesize layoutUpdateChildren=_layoutUpdateChildren;
@property(nonatomic) BOOL layoutInvalidateChildren; // @synthesize layoutInvalidateChildren=_layoutInvalidateChildren;
@property(nonatomic) BOOL layoutSpacesInvalidateTableOffsets; // @synthesize layoutSpacesInvalidateTableOffsets=_layoutSpacesInvalidateTableOffsets;
@property(nonatomic) BOOL layoutSpacesInvalidateCoordinates; // @synthesize layoutSpacesInvalidateCoordinates=_layoutSpacesInvalidateCoordinates;
@property(nonatomic) BOOL layoutInvalidateTableNameVisibility; // @synthesize layoutInvalidateTableNameVisibility=_layoutInvalidateTableNameVisibility;
@property(nonatomic) BOOL layoutInvalidateSize; // @synthesize layoutInvalidateSize=_layoutInvalidateSize;
@property(nonatomic) BOOL layoutInvalidateProvider; // @synthesize layoutInvalidateProvider=_layoutInvalidateProvider;
@property(nonatomic) BOOL layoutInvalidate; // @synthesize layoutInvalidate=_layoutInvalidate;

@end
