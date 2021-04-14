/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreServices/SSVComplexOperation.h>

@class NSNumber, NSMutableOrderedSet, NSMutableArray, NSString, SSURLRequestProperties, NSLock, NSURL;

@interface SSVLoadDownloadQueueOperation : SSVComplexOperation {

	NSNumber* _accountIdentifier;
	NSMutableOrderedSet* _downloads;
	BOOL _needsAuthentication;
	NSMutableArray* _rangesToLoad;
	long long _reason;
	NSString* _requestIdentifier;
	SSURLRequestProperties* _requestProperties;
	NSString* _mdSyncState;
	NSLock* _lock;
	NSURL* _requestURL;
	NSString* _powerAssertionIdentifier;
	NSString* _storeCorrelationID;

}

@property (readonly) SSURLRequestProperties * requestProperties; 
@property (retain) NSNumber * accountIdentifier; 
@property (assign) BOOL needsAuthentication; 
@property (assign) long long reason; 
@property (copy) NSString * requestIdentifier; 
@property (nonatomic,copy) NSURL * requestURL;                                //@synthesize requestURL=_requestURL - In the implementation block
@property (readonly) NSMutableOrderedSet * downloads; 
@property (retain) NSString * powerAssertionIdentifier;                       //@synthesize powerAssertionIdentifier=_powerAssertionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * storeCorrelationID;                     //@synthesize storeCorrelationID=_storeCorrelationID - In the implementation block
+(id)newLoadAutomaticDownloadQueueOperation;
-(id)init;
-(void)lock;
-(void)unlock;
-(long long)reason;
-(void)main;
-(void)setReason:(long long)arg1 ;
-(NSString *)requestIdentifier;
-(id)_account;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(NSNumber *)accountIdentifier;
-(void)setRequestIdentifier:(NSString *)arg1 ;
-(NSMutableOrderedSet *)downloads;
-(BOOL)needsAuthentication;
-(void)setNeedsAuthentication:(BOOL)arg1 ;
-(SSURLRequestProperties *)requestProperties;
-(id)initWithRequestProperties:(id)arg1 ;
-(NSString *)storeCorrelationID;
-(NSURL *)requestURL;
-(void)setRequestURL:(NSURL *)arg1 ;
-(void)setStoreCorrelationID:(NSString *)arg1 ;
-(void)setPowerAssertionIdentifier:(NSString *)arg1 ;
-(id)resolveBagURLForKey:(id)arg1 bagContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)_loadDownloadsFromStart:(id)arg1 toEnd:(id)arg2 url:(id)arg3 ;
-(id)_newURLOperationWithStartIdentifier:(id)arg1 endIdentifier:(id)arg2 url:(id)arg3 ;
-(void)importKeybagSync:(id)arg1 ;
-(void)_handleResponse:(id)arg1 ;
-(void)addGUIDToBody:(id)arg1 ;
-(void)addKeybagSyncToBody:(id)arg1 ;
-(BOOL)featureEnabledForBagKey:(id)arg1 bagContext:(id)arg2 error:(id*)arg3 ;
-(id)gzipData:(id)arg1 ;
-(void)setDownloadsMetadata:(id)arg1 ;
-(NSString *)powerAssertionIdentifier;
@end
