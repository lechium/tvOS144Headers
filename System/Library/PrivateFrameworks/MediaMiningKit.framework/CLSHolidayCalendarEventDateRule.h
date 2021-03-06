/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:42 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CLSHolidayCalendarEventDateRuleDelegate;
@class NSDateComponents, NSString;

@interface CLSHolidayCalendarEventDateRule : NSObject {

	id<CLSHolidayCalendarEventDateRuleDelegate> _delegate;
	NSDateComponents* _simpleRuleComponents;
	long long _startYear;
	long long _endYear;
	long long _offsetDays;
	NSString* _relativeToRuleUUID;

}

@property (assign,nonatomic,__weak) id<CLSHolidayCalendarEventDateRuleDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSDateComponents * simpleRuleComponents;                                    //@synthesize simpleRuleComponents=_simpleRuleComponents - In the implementation block
@property (assign,nonatomic) long long startYear;                                                      //@synthesize startYear=_startYear - In the implementation block
@property (assign,nonatomic) long long endYear;                                                        //@synthesize endYear=_endYear - In the implementation block
@property (assign,nonatomic) long long offsetDays;                                                     //@synthesize offsetDays=_offsetDays - In the implementation block
@property (nonatomic,copy) NSString * relativeToRuleUUID;                                              //@synthesize relativeToRuleUUID=_relativeToRuleUUID - In the implementation block
-(id)debugDescription;
-(id<CLSHolidayCalendarEventDateRuleDelegate>)delegate;
-(void)setDelegate:(id<CLSHolidayCalendarEventDateRuleDelegate>)arg1 ;
-(id)initWithEventDescription:(id)arg1 ;
-(BOOL)matchesExplicitYear:(long long)arg1 ;
-(long long)endYear;
-(long long)startYear;
-(BOOL)hasEndYear;
-(BOOL)hasStartYear;
-(BOOL)hasExplicitYear;
-(id)localDateByEvaluatingRuleForYear:(long long)arg1 ;
-(id)_stringDescriptionForDateRuleComponentValue:(long long)arg1 ;
-(NSDateComponents *)simpleRuleComponents;
-(void)setSimpleRuleComponents:(NSDateComponents *)arg1 ;
-(void)setStartYear:(long long)arg1 ;
-(void)setEndYear:(long long)arg1 ;
-(long long)offsetDays;
-(void)setOffsetDays:(long long)arg1 ;
-(NSString *)relativeToRuleUUID;
-(void)setRelativeToRuleUUID:(NSString *)arg1 ;
@end

