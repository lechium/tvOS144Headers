/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class INAlarmSearch, NSArray;


@protocol INSearchAlarmIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INAlarmSearch * alarmSearch; 
@property (assign,nonatomic) long long alarmSearchType; 
@property (nonatomic,copy) NSArray * alarms; 
@required
-(id)init;
-(INAlarmSearch *)alarmSearch;
-(void)setAlarmSearch:(id)arg1;
-(NSArray *)alarms;
-(void)setAlarms:(id)arg1;
-(long long)alarmSearchType;
-(void)setAlarmSearchType:(long long)arg1;

@end

