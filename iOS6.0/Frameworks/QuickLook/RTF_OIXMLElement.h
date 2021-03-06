/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <QuickLook/RTF_OIXMLNode.h>

@interface RTF_OIXMLElement : RTF_OIXMLNode
{
    id _attributes;
    id _children;
    BOOL _hasMultipleAttributes;
    BOOL _hasMultipleChildren;
}

+ (BOOL)isEmptyHTMLElement:(id)arg1;
+ (void)_initEmptyHTMLNames;
- (id)closingTagString;
- (id)contentString;
- (id)openingTagString;
- (void)_appendXMLStringToString:(struct __CFString *)arg1;
- (int)attributeCount;
- (int)childrenCount;
- (id)stringValue;
- (id)objectValue;
- (void)setObjectValue:(id)arg1;
- (void)insertChild:(id)arg1 atIndex:(unsigned int)arg2;
- (void)addChild:(id)arg1;
- (void)addAttribute:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 stringValue:(id)arg2;

@end

