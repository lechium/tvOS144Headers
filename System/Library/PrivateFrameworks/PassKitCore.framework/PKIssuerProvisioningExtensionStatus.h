/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PKIssuerProvisioningExtensionStatus : NSObject <NSSecureCoding> {

	BOOL _requiresAuthentication;
	BOOL _passEntriesAvailable;
	BOOL _remotePassEntriesAvailable;

}

@property (assign,nonatomic) BOOL requiresAuthentication;                  //@synthesize requiresAuthentication=_requiresAuthentication - In the implementation block
@property (assign,nonatomic) BOOL passEntriesAvailable;                    //@synthesize passEntriesAvailable=_passEntriesAvailable - In the implementation block
@property (assign,nonatomic) BOOL remotePassEntriesAvailable;              //@synthesize remotePassEntriesAvailable=_remotePassEntriesAvailable - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setRequiresAuthentication:(BOOL)arg1 ;
-(BOOL)requiresAuthentication;
-(BOOL)passEntriesAvailable;
-(void)setPassEntriesAvailable:(BOOL)arg1 ;
-(BOOL)remotePassEntriesAvailable;
-(void)setRemotePassEntriesAvailable:(BOOL)arg1 ;
@end

