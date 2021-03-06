/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:04 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject;

@interface MSVCallback : NSObject {

	id _block;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,copy) id block;                                          //@synthesize block=_block - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
+(id)callbackWithQueue:(id)arg1 block:(id)arg2 ;
-(void)invoke;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)block;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setBlock:(id)arg1 ;
-(void)invokeWithObject:(id)arg1 ;
@end

