/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID, NSDate, NSArray;

@interface HKOAuth2Credential : NSObject <NSCopying, NSSecureCoding> {

	NSString* _accessToken;
	os_unfair_lock_s _accessTokenLock;
	NSUUID* _identifier;
	NSDate* _expiration;
	NSArray* _scope;
	NSString* _requestedScopeString;

}

@property (nonatomic,copy,readonly) NSUUID * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSDate * expiration;                          //@synthesize expiration=_expiration - In the implementation block
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (nonatomic,copy,readonly) NSArray * scope;                              //@synthesize scope=_scope - In the implementation block
@property (nonatomic,copy,readonly) NSString * scopeString; 
@property (nonatomic,copy,readonly) NSString * requestedScopeString;              //@synthesize requestedScopeString=_requestedScopeString - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)scopeFromScopeString:(id)arg1 ;
+(id)_scopeStringFromScope:(id)arg1 ;
+(id)expirationFromTimeInterval:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(NSArray *)scope;
-(BOOL)isExpired;
-(NSDate *)expiration;
-(id)_commonInitWithIdentifier:(id)arg1 requestedScopeString:(id)arg2 expiration:(id)arg3 scope:(id)arg4 ;
-(id)initWithIdentifier:(id)arg1 requestedScopeString:(id)arg2 expiration:(id)arg3 scope:(id)arg4 ;
-(id)_accessTokenIdentifier;
-(id)_refreshTokenIdentifier;
-(BOOL)storeAccessToken:(id)arg1 error:(id*)arg2 ;
-(BOOL)storeRefreshToken:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqualToCredential:(id)arg1 epsilonExpiration:(double)arg2 ;
-(id)initWithIdentifier:(id)arg1 requestedScopeString:(id)arg2 expiration:(id)arg3 scopeString:(id)arg4 ;
-(id)fetchAccessTokenWithError:(id*)arg1 ;
-(id)fetchRefreshTokenWithError:(id*)arg1 ;
-(BOOL)deleteTokensWithError:(id*)arg1 ;
-(NSString *)scopeString;
-(NSString *)requestedScopeString;
@end

