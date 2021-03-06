/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class NSNumber, NSDate;

@interface MovingAverageEntry : HMFObject {

	NSNumber* _value;
	NSDate* _date;

}

@property (readonly) NSNumber * value;              //@synthesize value=_value - In the implementation block
@property (readonly) NSDate * date;                 //@synthesize date=_date - In the implementation block
-(NSDate *)date;
-(NSNumber *)value;
-(id)initWithValue:(id)arg1 ;
@end

