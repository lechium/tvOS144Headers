/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <LoggingSupport/LoggingSupport-Structs.h>
#import <LoggingSupport/OSActivityEvent.h>

@interface OSActivityCreateEvent : OSActivityEvent {

	unsigned long long _creatorActivityID;
	unsigned long long _creatorProcessUniqueID;
	unsigned long long _senderProgramCounter;

}

@property (nonatomic,readonly) unsigned long long creatorActivityID;                   //@synthesize creatorActivityID=_creatorActivityID - In the implementation block
@property (nonatomic,readonly) unsigned long long creatorProcessUniqueID;              //@synthesize creatorProcessUniqueID=_creatorProcessUniqueID - In the implementation block
@property (nonatomic,readonly) unsigned long long senderProgramCounter;                //@synthesize senderProgramCounter=_senderProgramCounter - In the implementation block
-(id)initWithEntry:(os_activity_stream_entry_s*)arg1 ;
-(void)_addProperties:(id)arg1 ;
-(unsigned long long)creatorActivityID;
-(unsigned long long)creatorProcessUniqueID;
-(unsigned long long)senderProgramCounter;
@end

