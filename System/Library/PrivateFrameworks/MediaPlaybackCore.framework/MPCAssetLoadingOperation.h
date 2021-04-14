/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@protocol MPCAssetLoaderDelegate, OS_dispatch_queue;
@class MPAVItem, MPCPlayerItemConfigurator, NSObject;

@interface MPCAssetLoadingOperation : NSOperation {

	MPAVItem* _item;
	id<MPCAssetLoaderDelegate> _delegate;
	MPCPlayerItemConfigurator* _configurator;
	long long _token;
	/*^block*/id _completion;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (nonatomic,copy,readonly) MPAVItem * item;                                           //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<MPCAssetLoaderDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MPCPlayerItemConfigurator * configurator;                         //@synthesize configurator=_configurator - In the implementation block
@property (nonatomic,readonly) long long token;                                                //@synthesize token=_token - In the implementation block
@property (nonatomic,copy,readonly) id completion;                                             //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
-(id<MPCAssetLoaderDelegate>)delegate;
-(void)setDelegate:(id<MPCAssetLoaderDelegate>)arg1 ;
-(id)completion;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(long long)token;
-(void)main;
-(MPAVItem *)item;
-(void)setConfigurator:(MPCPlayerItemConfigurator *)arg1 ;
-(MPCPlayerItemConfigurator *)configurator;
-(id)initWithPlayerItem:(id)arg1 configurator:(id)arg2 delegate:(id)arg3 token:(long long)arg4 callbackQueue:(id)arg5 completion:(/*^block*/id)arg6 ;
@end

