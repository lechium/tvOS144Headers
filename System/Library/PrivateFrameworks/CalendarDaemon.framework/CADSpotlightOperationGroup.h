/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CalendarDaemon/CADOperationGroup.h>

@interface CADSpotlightOperationGroup : CADOperationGroup
+(BOOL)requiresEventAccess;
+(BOOL)requiresReminderAccess;
+(BOOL)requiresEventOrReminderAccess;
+(id)whitelistedBundles;
-(BOOL)accessGrantedToPerformSelector:(SEL)arg1 ;
-(void)CADPushItemsToSpotlight:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)_gatherAllCalendarItemUUIDs;
@end

