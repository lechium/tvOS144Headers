/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSString, UIImage, WFAirQualityProviderStation, NSURL, NSObject, NSMutableArray;

@interface WFAirQualityProviderAttribution : NSObject <NSSecureCoding, NSCopying> {

	BOOL _logoRequestInFlight;
	os_unfair_lock_s _dataSynchronizationLock;
	NSString* _name;
	long long _dataOrigination;
	UIImage* _cachedLogoImage;
	WFAirQualityProviderStation* _station;
	NSURL* _logoURL;
	NSObject*<OS_dispatch_queue> _logoImageLoadingQueue;
	NSMutableArray* _outstandingRequestsCompletionBlocks;

}

@property (nonatomic,copy) NSString * name;                                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSURL * logoURL;                                                     //@synthesize logoURL=_logoURL - In the implementation block
@property (assign,nonatomic) long long dataOrigination;                                         //@synthesize dataOrigination=_dataOrigination - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> logoImageLoadingQueue;                //@synthesize logoImageLoadingQueue=_logoImageLoadingQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * outstandingRequestsCompletionBlocks;              //@synthesize outstandingRequestsCompletionBlocks=_outstandingRequestsCompletionBlocks - In the implementation block
@property (assign,nonatomic) BOOL logoRequestInFlight;                                          //@synthesize logoRequestInFlight=_logoRequestInFlight - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s dataSynchronizationLock;                          //@synthesize dataSynchronizationLock=_dataSynchronizationLock - In the implementation block
@property (nonatomic,copy) UIImage * cachedLogoImage;                                           //@synthesize cachedLogoImage=_cachedLogoImage - In the implementation block
@property (nonatomic,retain) WFAirQualityProviderStation * station;                             //@synthesize station=_station - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)defaultProviderAttribution;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(WFAirQualityProviderStation *)station;
-(void)setStation:(WFAirQualityProviderStation *)arg1 ;
-(NSURL *)logoURL;
-(void)setLogoURL:(NSURL *)arg1 ;
-(void)setDataSynchronizationLock:(os_unfair_lock_s)arg1 ;
-(os_unfair_lock_s)dataSynchronizationLock;
-(void)loadLogoImageWithCompletion:(/*^block*/id)arg1 ;
-(UIImage *)cachedLogoImage;
-(void)setCachedLogoImage:(UIImage *)arg1 ;
-(long long)dataOrigination;
-(void)setDataOrigination:(long long)arg1 ;
-(id)initWithName:(id)arg1 logoURL:(id)arg2 dataOrigination:(long long)arg3 station:(id)arg4 ;
-(id)initWithName:(id)arg1 logoImage:(id)arg2 dataOrigination:(long long)arg3 station:(id)arg4 ;
-(void)_initInternal;
-(NSObject*<OS_dispatch_queue>)logoImageLoadingQueue;
-(void)p_loadRemoteLogoImageForProvider:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)p_checkRequestInFlight;
-(void)p_queueCompletionBlock:(/*^block*/id)arg1 ;
-(void)p_setRequestInFlight;
-(id)p_imageWithData:(id)arg1 ;
-(void)p_invokeAndClearCompletionBlocksWithImage:(id)arg1 error:(id)arg2 ;
-(void)p_clearRequestInFlight;
-(BOOL)logoRequestInFlight;
-(void)setLogoRequestInFlight:(BOOL)arg1 ;
-(NSMutableArray *)outstandingRequestsCompletionBlocks;
-(id)initWithName:(id)arg1 logoURL:(id)arg2 dataOrigination:(long long)arg3 ;
-(void)setLogoImageLoadingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setOutstandingRequestsCompletionBlocks:(NSMutableArray *)arg1 ;
@end

