/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:47 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFMessagePolicy.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface HMDRemoteMessagePolicy : HMFMessagePolicy <NSMutableCopying> {

	BOOL _requiresSecureMessage;
	BOOL _allowsAnonymousMessage;
	BOOL _requiresAccountMessage;
	unsigned long long _transportRestriction;
	unsigned long long _roles;

}

@property (readonly) BOOL requiresSecureMessage;                           //@synthesize requiresSecureMessage=_requiresSecureMessage - In the implementation block
@property (readonly) BOOL allowsAnonymousMessage;                          //@synthesize allowsAnonymousMessage=_allowsAnonymousMessage - In the implementation block
@property (readonly) BOOL requiresAccountMessage;                          //@synthesize requiresAccountMessage=_requiresAccountMessage - In the implementation block
@property (readonly) unsigned long long transportRestriction;              //@synthesize transportRestriction=_transportRestriction - In the implementation block
@property (readonly) unsigned long long roles;                             //@synthesize roles=_roles - In the implementation block
+(id)defaultPolicy;
+(id)defaultSecurePolicy;
+(id)remoteMessagePolicyWithRequiresSecureMessage:(BOOL)arg1 allowsAnonymousMessage:(BOOL)arg2 requiresAccountMessage:(BOOL)arg3 transportRestriction:(unsigned long long)arg4 roles:(unsigned long long)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)init;
-(unsigned long long)roles;
-(id)__initWithRequiresSecureMessage:(BOOL)arg1 allowsAnonymousMessage:(BOOL)arg2 requiresAccountMessage:(BOOL)arg3 transportRestriction:(unsigned long long)arg4 roles:(unsigned long long)arg5 ;
-(BOOL)requiresSecureMessage;
-(BOOL)allowsAnonymousMessage;
-(BOOL)requiresAccountMessage;
-(unsigned long long)transportRestriction;
@end

