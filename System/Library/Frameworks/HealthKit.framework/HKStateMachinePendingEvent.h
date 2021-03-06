/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate, NSError;

@interface HKStateMachinePendingEvent : NSObject {

	long long _event;
	NSDate* _date;
	NSError* _error;
	/*^block*/id _completion;

}

@property (assign,nonatomic) long long event;              //@synthesize event=_event - In the implementation block
@property (nonatomic,copy) NSDate * date;                  //@synthesize date=_date - In the implementation block
@property (nonatomic,copy) NSError * error;                //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) id completion;                  //@synthesize completion=_completion - In the implementation block
-(NSDate *)date;
-(NSError *)error;
-(id)completion;
-(void)setError:(NSError *)arg1 ;
-(long long)event;
-(void)setDate:(NSDate *)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(void)setEvent:(long long)arg1 ;
@end

