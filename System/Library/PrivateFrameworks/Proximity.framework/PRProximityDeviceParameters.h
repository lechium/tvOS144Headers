/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Proximity/Proximity-Structs.h>
@class NSNumber;

@interface PRProximityDeviceParameters : NSObject {

	BtProximityFilterBase* _filter;
	unsigned long long _samplesize;
	NSNumber* _rssiImmediate;
	NSNumber* _rssiNear;

}

@property (readonly) BtProximityFilterBase* filter;              //@synthesize filter=_filter - In the implementation block
@property (readonly) unsigned long long samplesize;              //@synthesize samplesize=_samplesize - In the implementation block
@property (readonly) NSNumber * rssiImmediate;                   //@synthesize rssiImmediate=_rssiImmediate - In the implementation block
@property (readonly) NSNumber * rssiNear;                        //@synthesize rssiNear=_rssiNear - In the implementation block
-(id)init;
-(BtProximityFilterBase*)filter;
-(id)initWithFilter:(BtProximityFilterBase*)arg1 sampleSize:(unsigned long long)arg2 rssiImmediate:(id)arg3 rssiNear:(id)arg4 ;
-(unsigned long long)samplesize;
-(NSNumber *)rssiImmediate;
-(NSNumber *)rssiNear;
@end

