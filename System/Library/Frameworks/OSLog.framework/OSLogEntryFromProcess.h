/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:20 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/OSLog.framework/OSLog
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol OSLogEntryFromProcess
@property (nonatomic,readonly) unsigned long long activityIdentifier; 
@property (nonatomic,readonly) NSString * process; 
@property (nonatomic,readonly) int processIdentifier; 
@property (nonatomic,readonly) NSString * sender; 
@property (nonatomic,readonly) unsigned long long threadIdentifier; 
@required
-(NSString *)sender;
-(int)processIdentifier;
-(NSString *)process;
-(unsigned long long)threadIdentifier;
-(unsigned long long)activityIdentifier;

@end

