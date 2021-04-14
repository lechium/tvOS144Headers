/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:05 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AXAccessQueueTimer;

@interface AXPostConnectionTask : NSObject {

	BOOL _didTimeout;
	/*^block*/id _postConnectionBlock;
	AXAccessQueueTimer* _timeoutTimer;

}

@property (nonatomic,copy) id postConnectionBlock;                           //@synthesize postConnectionBlock=_postConnectionBlock - In the implementation block
@property (nonatomic,retain) AXAccessQueueTimer * timeoutTimer;              //@synthesize timeoutTimer=_timeoutTimer - In the implementation block
@property (assign,nonatomic) BOOL didTimeout;                                //@synthesize didTimeout=_didTimeout - In the implementation block
-(void)setPostConnectionBlock:(id)arg1 ;
-(void)setTimeoutTimer:(AXAccessQueueTimer *)arg1 ;
-(AXAccessQueueTimer *)timeoutTimer;
-(void)setDidTimeout:(BOOL)arg1 ;
-(void)_performTask;
-(id)postConnectionBlock;
-(BOOL)didTimeout;
-(id)initWithConnectBlock:(/*^block*/id)arg1 timeout:(double)arg2 accessQueue:(id)arg3 ;
-(void)performTask;
@end
