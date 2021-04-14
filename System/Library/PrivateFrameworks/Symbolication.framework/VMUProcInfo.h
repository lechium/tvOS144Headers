/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Symbolication/Symbolication-Structs.h>
@class NSString, NSArray;

@interface VMUProcInfo : NSObject {

	unsigned _task;
	BOOL _needTaskPortDealloc;
	NSString* _name;
	NSArray* _arguments;
	NSArray* _envVars;
	NSString* _procTableName;
	NSString* _realAppName;
	NSString* _requestedAppName;
	NSString* _firstArg;
	int _pid;
	int _ppid;
	timeval _startTime;

}
+(id)getProcessIds;
+(int)processParentId:(int)arg1 ;
+(BOOL)isProcessRunning:(int)arg1 ;
-(id)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)dealloc;
-(long long)compare:(id)arg1 ;
-(timeval)startTime;
-(id)initWithTask:(unsigned)arg1 ;
-(id)arguments;
-(BOOL)isRunning;
-(BOOL)terminate;
-(int)pid;
-(int)cpuType;
-(id)firstArgument;
-(id)userAppName;
-(id)procTableName;
-(id)initWithPid:(int)arg1 ;
-(unsigned)platform;
-(void)update;
-(unsigned)task;
-(id)platformName;
-(int)ppid;
-(id)envVars;
-(id)valueForEnvVar:(id)arg1 ;
-(BOOL)isApp;
-(id)realAppName;
-(id)_infoFromCommandLine:(int)arg1 ;
-(id)requestedAppName;
-(BOOL)isCFM;
-(BOOL)isMachO;
-(BOOL)isNative;
-(BOOL)signal:(int)arg1 ;
-(long long)compareByName:(id)arg1 ;
-(long long)compareByUserAppName:(id)arg1 ;
@end

