/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL, NSString;

@interface FTServerBag : NSObject {

	long long _type;

}

@property (readonly) NSURL * bagURL; 
@property (readonly) NSString * apsEnvironmentName; 
@property (readonly) BOOL allowSelfSignedCertificates; 
@property (readonly) BOOL allowUnsignedBags; 
@property (readonly) BOOL isLoaded; 
@property (readonly) BOOL isLoading; 
@property (readonly) BOOL isInDebilitatedMode; 
@property (readonly) BOOL isServerAvailable; 
+(id)sharedInstance;
+(id)sharedInstanceForBagType:(long long)arg1 ;
+(id)_sharedInstance;
+(id)_sharedInstanceForType:(long long)arg1 ;
-(void)dealloc;
-(id)objectForKey:(id)arg1 ;
-(BOOL)isLoaded;
-(BOOL)isLoading;
-(id)_bag;
-(void)startBagLoad;
-(NSString *)apsEnvironmentName;
-(id)_cachedBag;
-(BOOL)isInDebilitatedMode;
-(BOOL)isServerAvailable;
-(void)forceBagLoad;
-(id)urlWithKey:(id)arg1 ;
-(NSURL *)bagURL;
-(BOOL)allowSelfSignedCertificates;
-(BOOL)allowUnsignedBags;
-(id)initWithBagType:(long long)arg1 ;
@end

