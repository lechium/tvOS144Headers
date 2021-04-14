/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:04 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Security.framework/Security
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSDate;

@interface SecItemRateLimit : NSObject {

	BOOL _forceEnabled;
	NSObject*<OS_dispatch_queue> _dataQueue;
	int _roCapacity;
	int _rwCapacity;
	double _roRate;
	double _rwRate;
	double _limitMultiplier;
	NSDate* _roBucket;
	NSDate* _rwBucket;

}

@property (nonatomic,readonly) int roCapacity;                      //@synthesize roCapacity=_roCapacity - In the implementation block
@property (nonatomic,readonly) double roRate;                       //@synthesize roRate=_roRate - In the implementation block
@property (nonatomic,readonly) int rwCapacity;                      //@synthesize rwCapacity=_rwCapacity - In the implementation block
@property (nonatomic,readonly) double rwRate;                       //@synthesize rwRate=_rwRate - In the implementation block
@property (nonatomic,readonly) double limitMultiplier;              //@synthesize limitMultiplier=_limitMultiplier - In the implementation block
@property (nonatomic,readonly) NSDate * roBucket;                   //@synthesize roBucket=_roBucket - In the implementation block
@property (nonatomic,readonly) NSDate * rwBucket;                   //@synthesize rwBucket=_rwBucket - In the implementation block
+(id)instance;
+(id)getStaticRateLimit;
+(void)resetStaticRateLimit;
-(id)init;
-(BOOL)isEnabled;
-(void)forceEnabled:(BOOL)arg1 ;
-(BOOL)isReadOnlyAPICallWithinLimits;
-(BOOL)isModifyingAPICallWithinLimits;
-(BOOL)consumeTokenFromBucket:(BOOL)arg1 ;
-(BOOL)shouldCountAPICalls;
-(int)roCapacity;
-(double)roRate;
-(int)rwCapacity;
-(double)rwRate;
-(double)limitMultiplier;
-(NSDate *)roBucket;
-(NSDate *)rwBucket;
@end
