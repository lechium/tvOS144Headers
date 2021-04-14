/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:41 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/HAP2AccessoryServerPairingDriverWorkItem.h>
#import <libobjc.A.dylib/HAPAuthSessionDelegate.h>

@protocol HAP2AccessoryServerSecureTransport, HAP2AccessoryServerEncoding;
@class HAPPairSetupSession, HAPAccessoryProtocolInfo, NSError, HAPAuthSession, NSString;

@interface HAP2AccessoryServerPairingDriverSoftwareAuthWorkItem : HAP2AccessoryServerPairingDriverWorkItem <HAPAuthSessionDelegate> {

	BOOL _sendPDUHeader;
	id<HAP2AccessoryServerSecureTransport> _transport;
	id<HAP2AccessoryServerEncoding> _encoding;
	HAPPairSetupSession* _pairingSession;
	HAPAccessoryProtocolInfo* _authenticatedProtocolInfo;
	NSError* _cancelError;
	HAPAuthSession* _authSession;

}

@property (nonatomic,readonly) id<HAP2AccessoryServerSecureTransport> transport;                //@synthesize transport=_transport - In the implementation block
@property (nonatomic,readonly) id<HAP2AccessoryServerEncoding> encoding;                        //@synthesize encoding=_encoding - In the implementation block
@property (nonatomic,retain) HAPPairSetupSession * pairingSession;                              //@synthesize pairingSession=_pairingSession - In the implementation block
@property (nonatomic,retain) HAPAccessoryProtocolInfo * authenticatedProtocolInfo;              //@synthesize authenticatedProtocolInfo=_authenticatedProtocolInfo - In the implementation block
@property (nonatomic,retain) NSError * cancelError;                                             //@synthesize cancelError=_cancelError - In the implementation block
@property (nonatomic,retain) HAPAuthSession * authSession;                                      //@synthesize authSession=_authSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)doSoftwareAuth;
-(id<HAP2AccessoryServerEncoding>)encoding;
-(void)cancelWithError:(id)arg1 ;
-(id<HAP2AccessoryServerSecureTransport>)transport;
-(NSError *)cancelError;
-(void)setCancelError:(NSError *)arg1 ;
-(void)setPairingSession:(HAPPairSetupSession *)arg1 ;
-(HAPPairSetupSession *)pairingSession;
-(void)authSession:(id)arg1 sendAuthExchangeData:(id)arg2 ;
-(void)authSession:(id)arg1 validateUUID:(id)arg2 token:(id)arg3 ;
-(void)authSession:(id)arg1 authenticateUUID:(id)arg2 token:(id)arg3 ;
-(void)authSession:(id)arg1 confirmUUID:(id)arg2 token:(id)arg3 ;
-(void)authSession:(id)arg1 authComplete:(id)arg2 ;
-(HAPAuthSession *)authSession;
-(HAPAccessoryProtocolInfo *)authenticatedProtocolInfo;
-(void)setAuthenticatedProtocolInfo:(HAPAccessoryProtocolInfo *)arg1 ;
-(void)runForPairingDriver:(id)arg1 ;
-(void)setAuthSession:(HAPAuthSession *)arg1 ;
-(void)_startSoftwareAuth;
-(void)_validateAccessoryInfoWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_isProtocolInfoValid:(id)arg1 ;
-(void)_sendSoftwareAuthMessageWithData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleAuthCompleteWithError:(id)arg1 ;
-(void)_softwareAuthFinished;
@end

