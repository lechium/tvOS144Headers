/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSString, SSVPlatformContext, NSObject, NSArray, NSNumber, SSBag;

@interface SSVPlatformRequestOperation : NSOperation {

	NSMutableDictionary* _additionalHeaderFields;
	NSMutableDictionary* _additionalParameters;
	NSString* _caller;
	SSVPlatformContext* _context;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSArray* _itemIdentifiers;
	NSArray* _bundleIdentifiers;
	NSString* _imageProfile;
	NSString* _keyProfile;
	long long _personalizationStyle;
	/*^block*/id _responseBlock;
	NSString* _storeFrontSuffix;
	NSNumber* _timeoutInterval;
	NSString* _userAgent;
	BOOL _shouldSuppressCookies;
	BOOL _shouldSuppressUserInfo;
	SSBag* _bag;

}

@property (copy) NSArray * itemIdentifiers; 
@property (copy) NSArray * bundleIdentifiers; 
@property (copy) NSString * imageProfile; 
@property (copy) NSString * keyProfile; 
@property (assign) long long personalizationStyle; 
@property (copy) NSString * storeFrontSuffix; 
@property (copy) NSNumber * timeoutInterval; 
@property (assign) BOOL shouldSuppressCookies;                  //@synthesize shouldSuppressCookies=_shouldSuppressCookies - In the implementation block
@property (assign) BOOL shouldSuppressUserInfo;                 //@synthesize shouldSuppressUserInfo=_shouldSuppressUserInfo - In the implementation block
@property (copy) id responseBlock; 
@property (nonatomic,retain) SSBag * bag;                       //@synthesize bag=_bag - In the implementation block
-(id)init;
-(void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2 ;
-(id)valueForHTTPHeaderField:(id)arg1 ;
-(NSNumber *)timeoutInterval;
-(void)setTimeoutInterval:(NSNumber *)arg1 ;
-(void)main;
-(void)setBundleIdentifiers:(NSArray *)arg1 ;
-(NSArray *)bundleIdentifiers;
-(NSString *)storeFrontSuffix;
-(void)setStoreFrontSuffix:(NSString *)arg1 ;
-(id)responseBlock;
-(void)setResponseBlock:(id)arg1 ;
-(BOOL)shouldSuppressCookies;
-(BOOL)shouldSuppressUserInfo;
-(SSBag *)bag;
-(void)setBag:(SSBag *)arg1 ;
-(void)setShouldSuppressCookies:(BOOL)arg1 ;
-(void)setShouldSuppressUserInfo:(BOOL)arg1 ;
-(void)setValue:(id)arg1 forRequestParameter:(id)arg2 ;
-(id)_lookupWithRequest:(id)arg1 error:(id*)arg2 ;
-(id)valueForRequestParameter:(id)arg1 ;
-(NSString *)keyProfile;
-(void)setKeyProfile:(NSString *)arg1 ;
-(long long)personalizationStyle;
-(void)setPersonalizationStyle:(long long)arg1 ;
-(id)initWithPlatformContext:(id)arg1 ;
-(void)_makeLocalMescalRequest;
-(void)_makeLocalJSSignRequest;
-(void)_makeLookupRequestWithPersonalizationStyle:(long long)arg1 ;
-(id)_callerValue;
-(NSArray *)itemIdentifiers;
-(NSString *)imageProfile;
-(id)_URLBagContext;
-(void)_enumerateQueryParametersUsingBlock:(/*^block*/id)arg1 ;
-(void)setImageProfile:(NSString *)arg1 ;
-(void)setItemIdentifiers:(NSArray *)arg1 ;
-(void)_setCaller:(id)arg1 ;
-(void)_setUserAgent:(id)arg1 ;
@end

