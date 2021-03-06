/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class TransparencySignatureVerifier, NSDictionary;

@interface TransparencyTrustedKeyStore : NSObject {

	TransparencySignatureVerifier* _signatureVerifier;
	NSDictionary* _trustedKeys;

}

@property (retain) NSDictionary * trustedKeys;                                     //@synthesize trustedKeys=_trustedKeys - In the implementation block
@property (retain) TransparencySignatureVerifier * signatureVerifier;              //@synthesize signatureVerifier=_signatureVerifier - In the implementation block
-(TransparencySignatureVerifier *)signatureVerifier;
-(void)setTrustedKeys:(NSDictionary *)arg1 ;
-(id)initWithTrustedKeys:(id)arg1 ;
-(void)setSignatureVerifier:(TransparencySignatureVerifier *)arg1 ;
-(NSDictionary *)trustedKeys;
@end

