/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:15 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface HKRegionAvailabilityMask : NSObject {

	unsigned long long _bitmask;
	long long _group;

}

@property (nonatomic,readonly) unsigned long long bitmask;              //@synthesize bitmask=_bitmask - In the implementation block
@property (nonatomic,readonly) long long group;                         //@synthesize group=_group - In the implementation block
+(id)maskWithBitmask:(unsigned long long)arg1 group:(long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)group;
-(unsigned long long)bitmask;
-(id)initWithBitMask:(unsigned long long)arg1 regionGroup:(long long)arg2 ;
-(BOOL)_isEqualToMask:(id)arg1 ;
@end

