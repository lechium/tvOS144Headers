/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSMutableArray, NSMutableDictionary, NSArray;

@interface OSAReport : NSObject {

	NSString* _incidentID;
	NSString* _logType;
	double _capture_time;
	NSMutableArray* _notes;
	NSMutableDictionary* _logWritingOptions;
	NSString* _logfile;

}

@property (nonatomic,readonly) double capture_time;              //@synthesize capture_time=_capture_time - In the implementation block
@property (nonatomic,readonly) NSArray * notes;                  //@synthesize notes=_notes - In the implementation block
@property (nonatomic,readonly) NSString * logfile;               //@synthesize logfile=_logfile - In the implementation block
+(id)systemIDWithDescription:(BOOL)arg1 ;
+(unsigned char)executeWithTimeout:(unsigned)arg1 Code:(/*^block*/id)arg2 ;
+(id)kernelVersionDescription;
+(id)bootArgs;
-(id)init;
-(id)problemType;
-(id)incidentID;
-(id)getSyslogForPid:(int)arg1 andOptionalSenders:(id)arg2 ;
-(id)appleCareDetails;
-(id)reportNamePrefix;
-(void)generateLogAtLevel:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)isActionable;
-(id)additionalIPSMetadata;
-(BOOL)secondChanceToSylog;
-(int)streamContentAtLevel:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)saveWithOptions:(id)arg1 ;
-(NSArray *)notes;
-(BOOL)isAppleTV;
-(void)alignIncident:(id)arg1 at:(double)arg2 ;
-(double)captureTime;
-(void)symlink:(id)arg1 ;
-(double)capture_time;
-(NSString *)logfile;
@end

