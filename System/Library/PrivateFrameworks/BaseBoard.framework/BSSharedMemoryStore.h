/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, BSSharedMemoryStoreData;
#import <BaseBoard/BaseBoard-Structs.h>
@class NSObject, NSString;

@interface BSSharedMemoryStore : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _basePath;
	SCD_Struct_BS3 _queue_path;
	id<BSSharedMemoryStoreData> _queue_data;
	unsigned char _queue_lastState;
	unsigned char _queue_nextWriteFailure;
	BOOL _queue_writeFailedOnce;
	BOOL _queue_invalidated;

}

@property (nonatomic,readonly) unsigned char _lastState; 
@property (nonatomic,copy) id<BSSharedMemoryStoreData> data; 
+(id)deserializeDataOfClass:(Class)arg1 withSerializedFromData:(id)arg2 ;
+(void)_unlinkAllForIdentifier:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id<BSSharedMemoryStoreData>)data;
-(void)invalidate;
-(void)setData:(id<BSSharedMemoryStoreData>)arg1 ;
-(id)initWithIdentifier:(id)arg1 dataClass:(Class)arg2 ;
-(unsigned char)_lastState;
-(void)_setFailureModeForNextWrite:(unsigned char)arg1 ;
@end
