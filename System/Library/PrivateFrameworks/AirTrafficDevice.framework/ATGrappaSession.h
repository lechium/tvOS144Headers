/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData;

@interface ATGrappaSession : NSObject {

	unsigned _sessionId;
	unsigned long long _sessionType;
	NSData* _sessionResponseData;
	NSData* _sessionRequestData;

}
-(id)initWithType:(unsigned long long)arg1 ;
-(id)deviceInfo;
-(id)createSignature:(id*)arg1 forData:(id)arg2 ;
-(id)verifySignature:(id)arg1 forData:(id)arg2 ;
-(id)establishHostSessionWithDeviceInfo:(id)arg1 clientRequestData:(id*)arg2 ;
-(id)establishDeviceSessionWithRequestData:(id)arg1 responseData:(id*)arg2 ;
-(id)beginHostSessionWithDeviceResponseData:(id)arg1 ;
-(id)_deviceCreateSignature:(id*)arg1 forData:(id)arg2 ;
-(id)_hostCreateSignature:(id*)arg1 forData:(id)arg2 ;
-(id)_deviceVerifySignature:(id)arg1 forData:(id)arg2 ;
-(id)_hostVerifySignature:(id)arg1 forData:(id)arg2 ;
@end

