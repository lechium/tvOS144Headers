/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface _UIAppCACommitFuture : NSObject {

	/*^block*/id _block;
	BOOL _invalidated;
	BOOL _finished;

}

@property (getter=_isInvalidated,nonatomic,readonly) BOOL invalidated;              //@synthesize invalidated=_invalidated - In the implementation block
@property (getter=_isFinished,nonatomic,readonly) BOOL finished;                    //@synthesize finished=_finished - In the implementation block
+(id)scheduledPostCommitFuture:(/*^block*/id)arg1 ;
+(id)scheduledPreCommitFuture:(/*^block*/id)arg1 ;
-(void)invalidate;
-(BOOL)_isFinished;
-(BOOL)_isInvalidated;
-(void)_invoke;
-(id)initWithPhase:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
@end

