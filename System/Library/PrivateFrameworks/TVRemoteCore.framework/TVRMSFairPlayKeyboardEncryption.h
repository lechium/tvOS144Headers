/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TVRemoteCore/TVRemoteCore-Structs.h>
@class NSData;

@interface TVRMSFairPlayKeyboardEncryption : NSObject {

	NSData* _challenge;
	BOOL _certIsTrusted;
	SecKeyRef _pubKeyRef;

}
-(void)dealloc;
-(BOOL)isTrusted;
-(void)reset;
-(id)_convertDataToString:(id)arg1 ;
-(id)_convertStringToData:(id)arg1 ;
-(BOOL)_verifyCert:(id)arg1 ;
-(id)encryptString:(id)arg1 ;
-(void)setLeafString:(id)arg1 ;
-(void)setChallengeString:(id)arg1 ;
@end

