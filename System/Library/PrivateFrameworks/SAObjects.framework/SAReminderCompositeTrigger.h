/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAReminderTrigger.h>

@class SAReminderDateTimeTrigger, SAReminderLocationTrigger;

@interface SAReminderCompositeTrigger : SAReminderTrigger

@property (nonatomic,retain) SAReminderDateTimeTrigger * dateTimeTrigger; 
@property (nonatomic,retain) SAReminderLocationTrigger * locationTrigger; 
+(id)compositeTrigger;
+(id)compositeTriggerWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAReminderDateTimeTrigger *)dateTimeTrigger;
-(SAReminderLocationTrigger *)locationTrigger;
-(void)setDateTimeTrigger:(SAReminderDateTimeTrigger *)arg1 ;
-(void)setLocationTrigger:(SAReminderLocationTrigger *)arg1 ;
@end

