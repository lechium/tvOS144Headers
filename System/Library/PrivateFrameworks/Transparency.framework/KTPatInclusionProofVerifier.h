/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class KTApplicationPublicKeyStore, NSString;

@interface KTPatInclusionProofVerifier : NSObject {

	KTApplicationPublicKeyStore* _keyStore;
	NSString* _application;

}

@property (readonly) KTApplicationPublicKeyStore * keyStore;              //@synthesize keyStore=_keyStore - In the implementation block
@property (retain) NSString * application;                                //@synthesize application=_application - In the implementation block
-(KTApplicationPublicKeyStore *)keyStore;
-(NSString *)application;
-(void)setApplication:(NSString *)arg1 ;
-(id)initWithKeyStore:(id)arg1 application:(id)arg2 ;
-(unsigned long long)verifyPatInclusionProofWithPerAppLogEntry:(id)arg1 topLevelTreeEntry:(id)arg2 error:(id*)arg3 ;
@end

