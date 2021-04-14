/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TouchRemote/TRRequestMessage.h>

@class ACAccount, NSString, NSSet;

@interface TRSetupProxyAuthenticationRequest : TRRequestMessage {

	ACAccount* _account;
	NSString* _rawPassword;
	NSSet* _targetedAccountServices;

}

@property (nonatomic,retain) ACAccount * account;                          //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSString * rawPassword;                       //@synthesize rawPassword=_rawPassword - In the implementation block
@property (nonatomic,retain) NSSet * targetedAccountServices;              //@synthesize targetedAccountServices=_targetedAccountServices - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(void)setRawPassword:(NSString *)arg1 ;
-(NSString *)rawPassword;
-(NSSet *)targetedAccountServices;
-(void)setTargetedAccountServices:(NSSet *)arg1 ;
@end

