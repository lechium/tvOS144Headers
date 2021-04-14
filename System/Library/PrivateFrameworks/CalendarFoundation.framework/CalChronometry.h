/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CalChronometry : NSObject
+(void)initialize;
+(id)currentLanguageCode;
+(id)activeTimeZone;
+(id)activeCalendar;
+(void)_configureChronometry;
+(void)_updateActiveCalendar;
+(void)_currentLocaleDidChange:(id)arg1 ;
+(void)_currentTimeZoneDidChange:(id)arg1 ;
+(void)_updateForLocaleChange;
+(void)_updateEveything;
+(void)_updateActiveTimeZone;
+(void)setActiveTimeZone:(id)arg1 ;
+(id)currentLocationCode;
@end

