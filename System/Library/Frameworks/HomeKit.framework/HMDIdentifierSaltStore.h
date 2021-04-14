/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class HMFUnfairLock, NSData;

@interface HMDIdentifierSaltStore : NSObject {

	HMFUnfairLock* _lock;
	NSData* _identifierSalt;
	NSData* _assistantIdentifierSalt;

}

@property (nonatomic,retain) NSData * identifierSalt;                       //@synthesize identifierSalt=_identifierSalt - In the implementation block
@property (nonatomic,retain) NSData * assistantIdentifierSalt;              //@synthesize assistantIdentifierSalt=_assistantIdentifierSalt - In the implementation block
-(id)init;
-(NSData *)identifierSalt;
-(void)setIdentifierSalt:(NSData *)arg1 ;
-(NSData *)assistantIdentifierSalt;
-(void)setAssistantIdentifierSalt:(NSData *)arg1 ;
@end
