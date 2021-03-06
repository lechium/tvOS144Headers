/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MPAVQueueCoordinating.h>

@protocol MFPlaybackStackControllerMFQueueManagement;
@class MPAVItem, NSArray, NSString;

@interface MPCMediaFoundationQueueCoordinator : NSObject <MPAVQueueCoordinating> {

	id<MFPlaybackStackController><MFQueueManagement> _playbackStackController;

}

@property (nonatomic,__weak,readonly) id<MFPlaybackStackController><MFQueueManagement> playbackStackController;              //@synthesize playbackStackController=_playbackStackController - In the implementation block
@property (nonatomic,readonly) MPAVItem * currentItem; 
@property (assign,nonatomic) BOOL shouldExpectEmptyQueue; 
@property (assign,nonatomic) BOOL shouldDeferItemLoading; 
@property (nonatomic,readonly) NSArray * items; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reset;
-(NSArray *)items;
-(MPAVItem *)currentItem;
-(void)reloadItemsKeepingCurrentItem:(BOOL)arg1 ;
-(BOOL)shouldExpectEmptyQueue;
-(void)setShouldExpectEmptyQueue:(BOOL)arg1 ;
-(BOOL)shouldDeferItemLoading;
-(void)setShouldDeferItemLoading:(BOOL)arg1 ;
-(id<MFPlaybackStackController><MFQueueManagement>)playbackStackController;
-(id)initWithStackController:(id)arg1 ;
@end

