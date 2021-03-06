/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ICUserIdentity, ICUserIdentityStore, NSURL, NSString, NSNumber;

@interface ICConnectionConfiguration : NSObject <NSSecureCoding, NSCopying> {

	ICUserIdentity* _userIdentity;
	ICUserIdentityStore* _userIdentityStore;
	NSURL* _baseURL;
	NSString* _libraryBagKey;
	NSString* _buildIdentifier;
	NSString* _purchaseClientIdentifier;
	long long _requestReason;
	NSNumber* _familyMemberStoreID;

}

@property (nonatomic,copy) ICUserIdentity * userIdentity;                            //@synthesize userIdentity=_userIdentity - In the implementation block
@property (nonatomic,readonly) ICUserIdentityStore * userIdentityStore;              //@synthesize userIdentityStore=_userIdentityStore - In the implementation block
@property (nonatomic,copy) NSURL * baseURL;                                          //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,copy) NSString * libraryBagKey;                                 //@synthesize libraryBagKey=_libraryBagKey - In the implementation block
@property (nonatomic,copy) NSString * buildIdentifier;                               //@synthesize buildIdentifier=_buildIdentifier - In the implementation block
@property (nonatomic,copy) NSString * purchaseClientIdentifier;                      //@synthesize purchaseClientIdentifier=_purchaseClientIdentifier - In the implementation block
@property (assign,nonatomic) long long requestReason;                                //@synthesize requestReason=_requestReason - In the implementation block
@property (nonatomic,copy) NSNumber * familyMemberStoreID;                           //@synthesize familyMemberStoreID=_familyMemberStoreID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)configurationFromSourceConfiguration:(id)arg1 userIdentity:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)baseURL;
-(void)setBaseURL:(NSURL *)arg1 ;
-(ICUserIdentity *)userIdentity;
-(void)setUserIdentity:(ICUserIdentity *)arg1 ;
-(id)initWithUserIdentity:(id)arg1 ;
-(ICUserIdentityStore *)userIdentityStore;
-(id)initWithUserIdentity:(id)arg1 userIdentityStore:(id)arg2 ;
-(NSString *)libraryBagKey;
-(NSString *)buildIdentifier;
-(NSString *)purchaseClientIdentifier;
-(long long)requestReason;
-(NSNumber *)familyMemberStoreID;
-(void)setLibraryBagKey:(NSString *)arg1 ;
-(void)setBuildIdentifier:(NSString *)arg1 ;
-(void)setPurchaseClientIdentifier:(NSString *)arg1 ;
-(void)setRequestReason:(long long)arg1 ;
-(void)setFamilyMemberStoreID:(NSNumber *)arg1 ;
@end

