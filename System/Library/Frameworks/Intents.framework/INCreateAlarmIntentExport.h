/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSNumber, INDateComponentsRange, INSpeakableString;


@protocol INCreateAlarmIntentExport <NSObject,JSExport>
@property (nonatomic,copy) NSNumber * relativeOffsetInMinutes; 
@property (nonatomic,copy) INDateComponentsRange * time; 
@property (nonatomic,copy) INSpeakableString * label; 
@property (assign,nonatomic) unsigned long long alarmRepeatScheduleOptions; 
@required
-(id)init;
-(INDateComponentsRange *)time;
-(INSpeakableString *)label;
-(void)setLabel:(id)arg1;
-(void)setTime:(id)arg1;
-(unsigned long long)alarmRepeatScheduleOptions;
-(NSNumber *)relativeOffsetInMinutes;
-(void)setRelativeOffsetInMinutes:(id)arg1;
-(void)setAlarmRepeatScheduleOptions:(unsigned long long)arg1;

@end

