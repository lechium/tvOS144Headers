/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID;

@interface PKPeerPaymentTransactionMetadata : NSObject <NSSecureCoding> {

	NSString* _dpanIdentifier;
	NSString* _serviceIdentifier;
	NSUUID* _requestDeviceScoreIdentifier;
	NSUUID* _sendDeviceScoreIdentifier;

}

@property (setter=setDPANIdentifier:,nonatomic,copy) NSString * dpanIdentifier;              //@synthesize dpanIdentifier=_dpanIdentifier - In the implementation block
@property (nonatomic,copy) NSString * serviceIdentifier;                                     //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (nonatomic,copy) NSUUID * requestDeviceScoreIdentifier;                            //@synthesize requestDeviceScoreIdentifier=_requestDeviceScoreIdentifier - In the implementation block
@property (nonatomic,copy) NSUUID * sendDeviceScoreIdentifier;                               //@synthesize sendDeviceScoreIdentifier=_sendDeviceScoreIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)serviceIdentifier;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(NSString *)dpanIdentifier;
-(void)setRequestDeviceScoreIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)requestDeviceScoreIdentifier;
-(void)setDPANIdentifier:(id)arg1 ;
-(BOOL)isEqualToPeerPaymentTransactionMetadata:(id)arg1 ;
-(NSUUID *)sendDeviceScoreIdentifier;
-(void)setSendDeviceScoreIdentifier:(NSUUID *)arg1 ;
@end

