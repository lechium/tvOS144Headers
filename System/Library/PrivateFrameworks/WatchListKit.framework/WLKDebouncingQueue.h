/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSOperationQueue;

@interface WLKDebouncingQueue : NSObject {

	unsigned _delay;
	NSOperationQueue* _queue;

}

@property (nonatomic,retain) NSOperationQueue * queue;              //@synthesize queue=_queue - In the implementation block
@property (assign) unsigned delay;                                  //@synthesize delay=_delay - In the implementation block
-(id)init;
-(void)addOperationWithBlock:(/*^block*/id)arg1 ;
-(NSOperationQueue *)queue;
-(unsigned)delay;
-(void)setDelay:(unsigned)arg1 ;
-(void)setQueue:(NSOperationQueue *)arg1 ;
@end

