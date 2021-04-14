/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_os_log;
@class NSObject, NSDate;

@interface AXSSRateLimitingLogger : NSObject {

	unsigned char _logLevel;
	double _timeInterval;
	NSObject*<OS_os_log> _categoryLog;
	NSDate* __dateSinceLastLog;

}

@property (nonatomic,retain) NSDate * _dateSinceLastLog;                      //@synthesize _dateSinceLastLog=__dateSinceLastLog - In the implementation block
@property (nonatomic,readonly) double timeInterval;                           //@synthesize timeInterval=_timeInterval - In the implementation block
@property (nonatomic,readonly) unsigned char logLevel;                        //@synthesize logLevel=_logLevel - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> categoryLog;              //@synthesize categoryLog=_categoryLog - In the implementation block
-(double)timeInterval;
-(unsigned char)logLevel;
-(BOOL)logString:(id)arg1 ;
-(NSDate *)_dateSinceLastLog;
-(void)set_dateSinceLastLog:(NSDate *)arg1 ;
-(void)_logStringAtProperLevel:(id)arg1 ;
-(NSObject*<OS_os_log>)categoryLog;
-(id)initWithLogLevel:(unsigned char)arg1 categoryLog:(id)arg2 timeInterval:(double)arg3 ;
@end

