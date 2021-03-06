/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/ICUserIdentityStoreBackend.h>

@protocol ICUserIdentityStoreBackendDelegate;
@class NSNumber, NSMutableDictionary, ICLocalStoreAccountProperties, NSString;

@interface ICUserIdentityStoreTestingBackend : NSObject <ICUserIdentityStoreBackend> {

	NSNumber* _activeAccountDSID;
	NSNumber* _activeLockerAccountDSID;
	NSMutableDictionary* _identityProperties;
	ICLocalStoreAccountProperties* _localStoreAccountProperties;
	id<ICUserIdentityStoreBackendDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ICUserIdentityStoreBackendDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)defaultActiveAccountDSID;
+(void)setDefaultActiveAccountDSID:(id)arg1 ;
+(id)defaultActiveLockerAccountDSID;
+(void)setDefaultActiveLockerAccountDSID:(id)arg1 ;
+(id)defaultStorefrontIdentifier;
+(void)setDefaultStorefrontIdentifier:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<ICUserIdentityStoreBackendDelegate>)delegate;
-(void)setDelegate:(id<ICUserIdentityStoreBackendDelegate>)arg1 ;
-(void)synchronize;
-(id)activeAccountDSIDWithError:(id*)arg1 ;
-(BOOL)updateActiveAccountDSID:(id)arg1 error:(id*)arg2 ;
-(id)activeLockerAccountDSIDWithError:(id*)arg1 ;
-(BOOL)updateActiveLockerAccountDSID:(id)arg1 error:(id*)arg2 ;
-(id)identityPropertiesForDSID:(id)arg1 error:(id*)arg2 ;
-(id)identityPropertiesForPrimaryICloudAccountWithError:(id*)arg1 ;
-(void)removeIdentityForDSID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)replaceIdentityProperties:(id)arg1 forDSID:(id)arg2 error:(id*)arg3 ;
-(BOOL)setIdentityProperties:(id)arg1 forDSID:(id)arg2 error:(id*)arg3 ;
-(id)localStoreAccountPropertiesWithError:(id*)arg1 ;
-(BOOL)setLocalStoreAccountProperties:(id)arg1 error:(id*)arg2 ;
-(id)verificationContextForDSID:(id)arg1 error:(id*)arg2 ;
-(id)verificationContextForAccountEstablishmentWithError:(id*)arg1 ;
-(id)_propertiesToSaveForProperties:(id)arg1 ;
@end

