/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MFQueueControlling.h>

@protocol MPCQueueItemProviding;
@class NSMutableDictionary;

@interface MPCMediaFoundationTranslator : NSObject <MFQueueControlling> {

	NSMutableDictionary* _mapping;
	id<MPCQueueItemProviding> _queueController;

}

@property (nonatomic,copy,readonly) NSMutableDictionary * mapping;                     //@synthesize mapping=_mapping - In the implementation block
@property (nonatomic,readonly) id<MPCQueueItemProviding> queueController;              //@synthesize queueController=_queueController - In the implementation block
-(NSMutableDictionary *)mapping;
-(id<MPCQueueItemProviding>)queueController;
-(void)resetMapping;
-(id)initWithQueueController:(id)arg1 ;
-(void)setMPAVItem:(id)arg1 forMFPlayerItem:(id)arg2 ;
-(id)MPAVItemForMFPlayerItem:(id)arg1 ;
-(id)_MPAVItemForMFPlayerItem:(id)arg1 allowReuse:(BOOL)arg2 ;
-(id)itemToFollowItem:(id)arg1 direction:(long long)arg2 distance:(long long)arg3 reason:(long long)arg4 ;
-(id)queueItemForPlayerItem:(id)arg1 allowReuse:(BOOL)arg2 ;
-(BOOL)canSkipInDirection:(long long)arg1 fromItem:(id)arg2 ;
@end
