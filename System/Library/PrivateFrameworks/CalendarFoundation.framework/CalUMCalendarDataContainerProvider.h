/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CalendarFoundation/CalCalendarDataContainerProvider.h>

@class NSString;

@interface CalUMCalendarDataContainerProvider : NSObject <CalCalendarDataContainerProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)containerForPersonaIdentifier:(id)arg1 ;
-(id)_calendarGroupContainer;
-(id)_containerForPersonaIdentifier:(id)arg1 containerProviderBlock:(/*^block*/id)arg2 ;
-(void)_performBlockAsPersonaWithIdentifier:(id)arg1 block:(/*^block*/id)arg2 ;
@end

