/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate;

@interface NGMTimeBasedEvaluations : NSObject {

	NSDate* _date;

}

@property (retain) NSDate * date;              //@synthesize date=_date - In the implementation block
+(id)sharedManager;
+(id)nowDate;
+(BOOL)validateFetchedPrekeyTimestamp:(double)arg1 forEvaluationType:(unsigned long long)arg2 ;
+(BOOL)prekeyShouldBeRolled:(id)arg1 ;
+(BOOL)prekeyCanBeDeleted:(id)arg1 ;
+(id)oldestDateAllowedToSendTo;
+(double)timeIntervalAllowedForAction:(unsigned long long)arg1 ;
+(id)debugDescriptionForAction:(unsigned long long)arg1 ;
+(void)setNowDate:(id)arg1 ;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
@end

