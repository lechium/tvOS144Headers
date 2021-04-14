/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableString;

@interface TIMecabraIMLogger : NSObject {

	NSMutableString* _loggedMessage;

}

@property (nonatomic,retain) NSMutableString * loggedMessage;              //@synthesize loggedMessage=_loggedMessage - In the implementation block
+(BOOL)isLoggingEnabled;
-(id)logFilePath;
-(NSMutableString *)loggedMessage;
-(void)beginLogging;
-(void)markTime:(unsigned long long)arg1 ;
-(void)endLoggingForInput:(id)arg1 atFinalTimeMark:(unsigned long long)arg2 ;
-(void)writeLogToFile;
-(void)setLoggedMessage:(NSMutableString *)arg1 ;
@end

