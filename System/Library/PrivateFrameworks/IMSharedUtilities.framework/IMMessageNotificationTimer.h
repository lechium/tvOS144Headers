/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:08 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate, NSNumber;

@interface IMMessageNotificationTimer : NSObject {

	NSDate* _date;
	NSNumber* _numberDingsLeft;

}

@property (nonatomic,retain) NSDate * date;                             //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSNumber * numberDingsLeft;              //@synthesize numberDingsLeft=_numberDingsLeft - In the implementation block
@property (nonatomic,readonly) BOOL areDingsRemaining; 
-(void)dealloc;
-(NSDate *)date;
-(id)initWithDate:(id)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(BOOL)areDingsRemaining;
-(void)reduceNumberDingsLeft;
-(NSNumber *)numberDingsLeft;
@end
