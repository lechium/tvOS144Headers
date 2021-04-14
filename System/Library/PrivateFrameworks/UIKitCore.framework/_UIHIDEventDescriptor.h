/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:00 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _UIHIDEventDescriptor : NSObject <NSCopying> {

	unsigned _eventType;
	unsigned long long _senderID;
	long long _usagePage;
	long long _usage;

}

@property (nonatomic,readonly) unsigned long long senderID;              //@synthesize senderID=_senderID - In the implementation block
@property (nonatomic,readonly) unsigned eventType;                       //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) long long usagePage;                      //@synthesize usagePage=_usagePage - In the implementation block
@property (nonatomic,readonly) long long usage;                          //@synthesize usage=_usage - In the implementation block
+(id)descriptorWithEvent:(IOHIDEventRef)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(long long)usage;
-(unsigned long long)senderID;
-(unsigned)eventType;
-(long long)usagePage;
-(id)_initWithSenderID:(unsigned long long)arg1 eventType:(unsigned)arg2 usagePage:(long long)arg3 usage:(long long)arg4 ;
@end

