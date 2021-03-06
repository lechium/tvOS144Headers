/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <SecurityFoundation/_SFCredential.h>

@class NSString;

@interface _SFPasswordCredential : _SFCredential {

	NSString* _username;
	NSString* _password;

}

@property (getter=_cachedPassword,nonatomic,copy) NSString * password; 
@property (nonatomic,copy) NSString * username; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)username;
-(void)setPassword:(NSString *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(id)initWithUsername:(id)arg1 password:(id)arg2 primaryServiceIdentifier:(id)arg3 supplementaryServiceIdentifiers:(id)arg4 ;
-(id)_cachedPassword;
-(id)descriptionShowingPassword:(BOOL)arg1 ;
-(id)initWithUsername:(id)arg1 password:(id)arg2 primaryServiceIdentifier:(id)arg3 ;
-(id)_initWithUsername:(id)arg1 primaryServiceIdentifier:(id)arg2 supplementaryServiceIdentifiers:(id)arg3 ;
-(void)usePasswordWithHandler:(/*^block*/id)arg1 ;
@end

