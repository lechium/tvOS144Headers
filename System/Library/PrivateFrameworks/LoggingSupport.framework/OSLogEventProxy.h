/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:15 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <LoggingSupport/LoggingSupport-Structs.h>
#import <libobjc.A.dylib/OSLogEventProvider.h>

@class NSString, NSDate, NSTimeZone, NSUUID, OSLogEventBacktrace, OSLogEventDecomposedMessage;

@interface OSLogEventProxy : NSObject <OSLogEventProvider> {

	SCD_Struct_OS13* _eint;
	os_activity_map_sRef _aid_map;
	SCD_Struct_OS18* _event;
	unsigned long long _efv;
	os_timesync_db_sRef _tsdb;
	int _uuiddbfd;
	timezone _tz;
	BOOL _sensitive;
	BOOL _trackActivities;
	unsigned long long _thread;
	unsigned long long _retainCount;
	NSString* _processImagePath;
	NSString* _senderImagePath;
	OSLogEventBacktrace* _backtrace;
	NSString* _logMessage;
	BOOL _logMessageIsHidden;
	OSLogEventDecomposedMessage* _decomposedMessage;
	unsigned long long _uuidi;

}

@property (nonatomic,readonly) unsigned _oversizeIdentifier; 
@property (assign,nonatomic) unsigned long long _timesyncRangeUUIDIndex;                         //@synthesize uuidi=_uuidi - In the implementation block
@property (nonatomic,readonly) NSString * composedMessage; 
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) unsigned long long logType; 
@property (nonatomic,readonly) unsigned long long size; 
@property (nonatomic,readonly) unsigned long long timeToLive; 
@property (nonatomic,readonly) unsigned long long traceIdentifier; 
@property (nonatomic,readonly) unsigned long long threadIdentifier; 
@property (nonatomic,readonly) NSDate * date; 
@property (nonatomic,readonly) NSTimeZone * timeZone; 
@property (nonatomic,readonly) timeval* unixDate; 
@property (nonatomic,readonly) timezone* unixTimeZone; 
@property (nonatomic,readonly) int processIdentifier; 
@property (nonatomic,readonly) unsigned long long activityIdentifier; 
@property (nonatomic,readonly) unsigned long long parentActivityIdentifier; 
@property (nonatomic,readonly) unsigned long long transitionActivityIdentifier; 
@property (nonatomic,readonly) NSUUID * bootUUID; 
@property (nonatomic,readonly) unsigned long long continuousNanosecondsSinceBoot; 
@property (nonatomic,readonly) unsigned long long machContinuousTimestamp; 
@property (nonatomic,readonly) NSUUID * processImageUUID; 
@property (nonatomic,readonly) const char* processImageUUIDBytes; 
@property (nonatomic,readonly) NSString * processImagePath; 
@property (nonatomic,readonly) NSString * process; 
@property (nonatomic,readonly) NSUUID * senderImageUUID; 
@property (nonatomic,readonly) const char* senderImageUUIDBytes; 
@property (nonatomic,readonly) NSString * senderImagePath; 
@property (nonatomic,readonly) NSString * sender; 
@property (nonatomic,readonly) unsigned long long senderImageOffset; 
@property (nonatomic,readonly) OSLogEventBacktrace * backtrace; 
@property (nonatomic,readonly) NSString * subsystem; 
@property (nonatomic,readonly) NSString * category; 
@property (nonatomic,readonly) NSString * formatString; 
@property (nonatomic,readonly) OSLogEventDecomposedMessage * decomposedMessage; 
@property (nonatomic,readonly) unsigned long long signpostIdentifier; 
@property (nonatomic,readonly) unsigned long long signpostType; 
@property (nonatomic,readonly) unsigned long long signpostScope; 
@property (nonatomic,readonly) NSString * signpostName; 
@property (nonatomic,readonly) unsigned long long creatorActivityIdentifier; 
@property (nonatomic,readonly) unsigned long long creatorProcessUniqueIdentifier; 
@property (nonatomic,readonly) unsigned long long lossStartMachContinuousTimestamp; 
@property (nonatomic,readonly) timeval* lossStartUnixDate; 
@property (nonatomic,readonly) timezone* lossStartUnixTimeZone; 
@property (nonatomic,readonly) unsigned long long lossEndMachContinuousTimestamp; 
@property (nonatomic,readonly) timeval* lossEndUnixDate; 
@property (nonatomic,readonly) timezone* lossEndUnixTimeZone; 
@property (nonatomic,readonly) SCD_Struct_OS0 lossCount; 
+(id)_make;
-(id)retain;
-(oneway void)release;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)init;
-(unsigned long long)size;
-(NSDate *)date;
-(unsigned long long)type;
-(NSTimeZone *)timeZone;
-(NSString *)sender;
-(NSString *)category;
-(int)processIdentifier;
-(NSString *)process;
-(OSLogEventBacktrace *)backtrace;
-(unsigned long long)signpostType;
-(id)formatArguments;
-(unsigned long long)timeToLive;
-(NSString *)subsystem;
-(unsigned long long)threadIdentifier;
-(NSString *)formatString;
-(unsigned long long)activityIdentifier;
-(unsigned long long)logType;
-(NSString *)composedMessage;
-(OSLogEventDecomposedMessage *)decomposedMessage;
-(unsigned long long)traceIdentifier;
-(timeval*)unixDate;
-(timezone*)unixTimeZone;
-(unsigned long long)parentActivityIdentifier;
-(unsigned long long)transitionActivityIdentifier;
-(NSUUID *)bootUUID;
-(unsigned long long)continuousNanosecondsSinceBoot;
-(unsigned long long)machContinuousTimestamp;
-(NSUUID *)processImageUUID;
-(const char*)processImageUUIDBytes;
-(NSString *)processImagePath;
-(NSUUID *)senderImageUUID;
-(const char*)senderImageUUIDBytes;
-(NSString *)senderImagePath;
-(unsigned long long)senderImageOffset;
-(unsigned long long)signpostIdentifier;
-(unsigned long long)signpostScope;
-(NSString *)signpostName;
-(unsigned long long)creatorActivityIdentifier;
-(unsigned long long)creatorProcessUniqueIdentifier;
-(unsigned long long)lossStartMachContinuousTimestamp;
-(timeval*)lossStartUnixDate;
-(timezone*)lossStartUnixTimeZone;
-(unsigned long long)lossEndMachContinuousTimestamp;
-(timeval*)lossEndUnixDate;
-(timezone*)lossEndUnixTimeZone;
-(SCD_Struct_OS0)lossCount;
-(oneway void)_unmake;
-(void)_assertBalanced;
-(void)_setThreadCrumb;
-(void)_setIncludeSensitive:(BOOL)arg1 ;
-(BOOL)_shouldIncludeSensitive;
-(void)_setTimesyncDatabase:(os_timesync_db_sRef)arg1 ;
-(void)_setUUIDDBFileDescriptor:(int)arg1 ;
-(void)_setFallbackTimezone;
-(void)_setDoNotTrackActivites:(BOOL)arg1 ;
-(void)_setBuffer:(const void*)arg1 size:(unsigned long long)arg2 privateBuffer:(const void*)arg3 privateSize:(unsigned long long)arg4 ;
-(BOOL)_setLogEvent:(SCD_Struct_OS18*)arg1 rangeUUIDIndex:(unsigned long long)arg2 machTimebase:(mach_timebase_info*)arg3 ;
-(void)_fillFromXPCEventObject:(id)arg1 ;
-(unsigned)_oversizeIdentifier;
-(unsigned)processIdentifierVersion;
-(unsigned long long)processUniqueIdentifier;
-(unsigned long long)_timesyncRangeUUIDIndex;
-(void)set_timesyncRangeUUIDIndex:(unsigned long long)arg1 ;
@end

