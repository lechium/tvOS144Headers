/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSString;

@interface IDSQueryKeyTransparencyContext : NSObject <NSSecureCoding, NSCopying> {

	NSUUID* _ticket;
	NSString* _accountIdentifier;

}

@property (nonatomic,readonly) NSUUID * ticket;                           //@synthesize ticket=_ticket - In the implementation block
@property (nonatomic,readonly) NSString * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)accountIdentifier;
-(NSUUID *)ticket;
-(BOOL)isEqualToQueryKeyTransparencyContext:(id)arg1 ;
-(id)initWithTicket:(id)arg1 accountIdentifier:(id)arg2 ;
@end

