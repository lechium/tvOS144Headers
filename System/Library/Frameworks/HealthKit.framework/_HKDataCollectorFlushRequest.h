/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:15 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate;

@interface _HKDataCollectorFlushRequest : NSObject {

	NSDate* _date;
	/*^block*/id _completion;

}

@property (nonatomic,copy,readonly) NSDate * date;              //@synthesize date=_date - In the implementation block
@property (nonatomic,copy,readonly) id completion;              //@synthesize completion=_completion - In the implementation block
-(NSDate *)date;
-(id)completion;
-(id)initWithDate:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
