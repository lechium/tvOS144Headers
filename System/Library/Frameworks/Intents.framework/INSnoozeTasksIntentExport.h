/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray, INDateComponentsRange, NSNumber;


@protocol INSnoozeTasksIntentExport <NSObject,JSExport>
@property (nonatomic,copy) NSArray * tasks; 
@property (nonatomic,copy) INDateComponentsRange * nextTriggerTime; 
@property (nonatomic,copy) NSNumber * all; 
@required
-(id)init;
-(NSArray *)tasks;
-(void)setTasks:(id)arg1;
-(INDateComponentsRange *)nextTriggerTime;
-(void)setNextTriggerTime:(id)arg1;
-(NSNumber *)all;
-(void)setAll:(id)arg1;

@end

