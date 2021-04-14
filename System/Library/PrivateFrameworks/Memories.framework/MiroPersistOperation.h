/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@class MiroMemory;

@interface MiroPersistOperation : NSOperation {

	BOOL _isFinished;
	BOOL _isExecuting;
	MiroMemory* _memory;

}

@property (retain) MiroMemory * memory;              //@synthesize memory=_memory - In the implementation block
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isAsynchronous;
-(MiroMemory *)memory;
-(void)setMemory:(MiroMemory *)arg1 ;
@end
