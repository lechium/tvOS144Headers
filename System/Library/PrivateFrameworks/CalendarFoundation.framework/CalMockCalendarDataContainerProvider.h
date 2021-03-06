/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CalendarFoundation/CalCalendarDataContainerProvider.h>

@class NSURL, NSString;

@interface CalMockCalendarDataContainerProvider : NSObject <CalCalendarDataContainerProvider> {

	NSURL* _calendarDataContainerURL;

}

@property (nonatomic,retain) NSURL * calendarDataContainerURL;              //@synthesize calendarDataContainerURL=_calendarDataContainerURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)calendarDataContainerURL;
-(id)containerForPersonaIdentifier:(id)arg1 ;
-(void)setCalendarDataContainerURL:(NSURL *)arg1 ;
@end

