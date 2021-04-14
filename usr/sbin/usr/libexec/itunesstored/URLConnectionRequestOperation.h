//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

#import "ISURLOperationDelegate-Protocol.h"

@class NSNumber, NSString, NSURL, SSAuthenticationContext, SSURLConnectionResponse, SSURLRequestProperties;

@interface URLConnectionRequestOperation : ISOperation <ISURLOperationDelegate>
{
    SSAuthenticationContext *_authenticationContext;	// 96 = 0x60
    NSURL *_destinationFileURL;	// 104 = 0x68
    SSURLRequestProperties *_properties;	// 112 = 0x70
    SSURLConnectionResponse *_response;	// 120 = 0x78
    _Bool _sendsResponseForHTTPFailures;	// 128 = 0x80
    _Bool _shouldMescalSign;	// 129 = 0x81
}

- (_Bool)_shouldSendMachineDataHeadersForProperties:(id)arg1;	// IMP=0x00000001001d7de8
- (id)_newStoreURLOperationWithProperties:(id)arg1;	// IMP=0x00000001001d7c54
- (id)_metricsPageEventWithResponse:(id)arg1 performance:(id)arg2;	// IMP=0x00000001001d7ab4
- (void)_importKeybagFromDictionary:(id)arg1;	// IMP=0x00000001001d7a40
- (void)_addKBSyncDataToRequestProperties:(id)arg1 forAccountID:(id)arg2;	// IMP=0x00000001001d77dc
- (id)_accountIdentifier;	// IMP=0x00000001001d7780
- (void)operation:(id)arg1 didAuthenticateWithDSID:(id)arg2;	// IMP=0x00000001001d773c
- (void)run;	// IMP=0x00000001001d71bc
@property(readonly) SSURLConnectionResponse *URLResponse;
@property _Bool shouldMescalSign;
@property _Bool sendsResponseForHTTPFailures;
@property(copy) NSURL *destinationFileURL;
@property(copy) SSAuthenticationContext *authenticationContext;
@property(readonly) SSURLRequestProperties *requestProperties;
- (void)dealloc;	// IMP=0x00000001001d6e28
- (id)initWithRequestProperties:(id)arg1;	// IMP=0x00000001001d6dc0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property(readonly) Class superclass;

@end

