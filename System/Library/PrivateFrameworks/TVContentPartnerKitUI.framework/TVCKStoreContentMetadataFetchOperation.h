/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:20 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@protocol TVCKStoreContentMetadataFetchOperationDelegate;
@class NSSet, NSString, NSValueTransformer, NSDictionary, NSOperationQueue, NSArray;

@interface TVCKStoreContentMetadataFetchOperation : NSOperation {

	BOOL _executing;
	BOOL _finished;
	NSSet* _adamIDs;
	NSString* _keyProfile;
	long long _personalizationStyle;
	id<TVCKStoreContentMetadataFetchOperationDelegate> _delegate;
	NSValueTransformer* _lookupItemValueTransformer;
	NSDictionary* _lookupItemsByAdamID;
	NSOperationQueue* _requestQueue;

}

@property (nonatomic,retain) NSDictionary * lookupItemsByAdamID;                                              //@synthesize lookupItemsByAdamID=_lookupItemsByAdamID - In the implementation block
@property (nonatomic,retain) NSOperationQueue * requestQueue;                                                 //@synthesize requestQueue=_requestQueue - In the implementation block
@property (nonatomic,copy,readonly) NSSet * adamIDs;                                                          //@synthesize adamIDs=_adamIDs - In the implementation block
@property (nonatomic,copy,readonly) NSString * keyProfile;                                                    //@synthesize keyProfile=_keyProfile - In the implementation block
@property (nonatomic,readonly) long long personalizationStyle;                                                //@synthesize personalizationStyle=_personalizationStyle - In the implementation block
@property (assign,nonatomic,__weak) id<TVCKStoreContentMetadataFetchOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * lookupItems; 
@property (nonatomic,retain) NSValueTransformer * lookupItemValueTransformer;                                 //@synthesize lookupItemValueTransformer=_lookupItemValueTransformer - In the implementation block
-(id)init;
-(id<TVCKStoreContentMetadataFetchOperationDelegate>)delegate;
-(void)setDelegate:(id<TVCKStoreContentMetadataFetchOperationDelegate>)arg1 ;
-(void)cancel;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isConcurrent;
-(NSOperationQueue *)requestQueue;
-(void)setRequestQueue:(NSOperationQueue *)arg1 ;
-(NSString *)keyProfile;
-(long long)personalizationStyle;
-(NSSet *)adamIDs;
-(id)initWithAdamIDs:(id)arg1 ;
-(id)lookupItemForAdamID:(id)arg1 ;
-(id)initWithAdamIDs:(id)arg1 keyProfile:(id)arg2 personalizationStyle:(long long)arg3 ;
-(NSArray *)lookupItems;
-(NSDictionary *)lookupItemsByAdamID;
-(void)setLookupItemsByAdamID:(NSDictionary *)arg1 ;
-(NSValueTransformer *)lookupItemValueTransformer;
-(void)_obtainedLookupItems:(id)arg1 withExpirationDate:(id)arg2 ;
-(void)setLookupItemValueTransformer:(NSValueTransformer *)arg1 ;
@end

