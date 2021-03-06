/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CNTimestamped : NSObject {

	id _value;
	double _timestamp;

}

@property (nonatomic,readonly) id value;                      //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) double timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
+(/*^block*/id)wrapTransformWithScheduler:(id)arg1 ;
+(id)timestampedWithValue:(id)arg1 timestamp:(double)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)value;
-(double)timestamp;
-(id)initWithValue:(id)arg1 timestamp:(double)arg2 ;
@end

