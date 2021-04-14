/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class NSNumber, NSString;

@interface PKPeerPaymentWebServiceBadRequestResponse : PKPeerPaymentWebServiceResponse {

	NSNumber* _errorCode;
	NSString* _serverDebugDescription;

}

@property (nonatomic,copy,readonly) NSNumber * errorCode;                           //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * serverDebugDescription;              //@synthesize serverDebugDescription=_serverDebugDescription - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSNumber *)errorCode;
-(NSString *)serverDebugDescription;
@end

