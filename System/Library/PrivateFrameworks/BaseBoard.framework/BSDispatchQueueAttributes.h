/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:11 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue_attr, OS_dispatch_queue;
@class NSObject;

@interface BSDispatchQueueAttributes : NSObject <NSCopying> {

	NSObject*<OS_dispatch_queue_attr> _attrs;
	NSObject*<OS_dispatch_queue> _targetQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue_attr> attributes;              //@synthesize attrs=_attrs - In the implementation block
+(id)serial;
+(id)concurrent;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSObject*<OS_dispatch_queue_attr>)attributes;
-(id)serviceClass:(unsigned)arg1 ;
-(id)serviceClass:(unsigned)arg1 relativePriority:(int)arg2 ;
-(id)autoreleaseFrequency:(unsigned long long)arg1 ;
-(id)targetQueue:(id)arg1 ;
-(id)inactive;
@end

