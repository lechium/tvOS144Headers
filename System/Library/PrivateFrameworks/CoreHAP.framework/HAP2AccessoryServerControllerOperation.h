/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/HAP2AsynchronousOperation.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol HAP2AccessoryServerEncoding, HAP2AccessoryServerTransportCommon, HAP2AccessoryServerTransportRequestEndpoint, HAP2EncodedRequest, HAP2EncodedResponse;
@class HMFTimer, HAP2AccessoryServerController, NSString;

@interface HAP2AccessoryServerControllerOperation : HAP2AsynchronousOperation <HMFTimerDelegate> {

	BOOL _attemptedSessionRefresh;
	HMFTimer* _timer;
	HAP2AccessoryServerController* _controller;
	id<HAP2AccessoryServerEncoding> _encoding;
	id<HAP2AccessoryServerTransportCommon> _transport;
	id<HAP2AccessoryServerTransportRequestEndpoint> _endpoint;
	NSString* _mimeType;
	double _timeout;
	unsigned long long _options;
	id<HAP2EncodedRequest> _request;
	id<HAP2EncodedResponse> _response;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)cancel;
-(void)main;
-(void)finish;
-(void)cancelWithError:(id)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(void)timerDidFire:(id)arg1 ;
-(void)_openTransport;
-(void)_cleanUp;
-(void)_sendRequest;
-(void)_parseResponseData:(id)arg1 ;
-(id)initWithName:(id)arg1 controller:(id)arg2 encoding:(id)arg3 transport:(id)arg4 request:(id)arg5 endpoint:(id)arg6 mimeType:(id)arg7 timeout:(double)arg8 options:(unsigned long long)arg9 ;
@end

