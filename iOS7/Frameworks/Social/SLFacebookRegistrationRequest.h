/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Social/SLFacebookRequest.h>

@class SLFacebookRegistrationInfo;

@interface SLFacebookRegistrationRequest : SLFacebookRequest
{
    SLFacebookRegistrationInfo *_registrationInfo;
}

- (void).cxx_destruct;
- (id)_urlEncodedString:(id)arg1;
- (id)_tokenSecret;
- (void)performRequestWithHandler:(id)arg1;
- (id)_sha1HashForString:(id)arg1;
- (void)_prepareRequestForValidation;
- (id)initWithRegistrationInfo:(id)arg1;

@end
