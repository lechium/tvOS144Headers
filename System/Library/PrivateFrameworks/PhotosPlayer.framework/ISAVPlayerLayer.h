/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:20 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <AVFCore/AVPlayerLayer.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface ISAVPlayerLayer : AVPlayerLayer {

	NSObject*<OS_dispatch_queue> _isolationQueue;
	/*^block*/id _readyForDisplayChangeHandler;

}

@property (nonatomic,copy) id readyForDisplayChangeHandler;              //@synthesize readyForDisplayChangeHandler=_readyForDisplayChangeHandler - In the implementation block
-(id)init;
-(void)dealloc;
-(void)didChangeValueForKey:(id)arg1 ;
-(void)setPlayer:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setWrappedPlayer:(id)arg1 ;
-(void)deferredDealloc;
-(void)setReadyForDisplayChangeHandler:(id)arg1 ;
-(id)readyForDisplayChangeHandler;
@end

