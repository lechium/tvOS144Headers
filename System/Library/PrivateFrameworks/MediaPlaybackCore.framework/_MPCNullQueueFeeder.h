/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPQueueFeeder.h>
#import <libobjc.A.dylib/MPCQueueControllerDataSource.h>

@class NSString;

@interface _MPCNullQueueFeeder : MPQueueFeeder <MPCQueueControllerDataSource> {

	NSString* _uniqueIdentifier;

}

@property (nonatomic,readonly) BOOL containsLiveStream; 
@property (nonatomic,readonly) BOOL containsTransportableContent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)uniqueIdentifier;
-(id)playbackInfoForItem:(id)arg1 ;
-(void)reloadSection:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)containsTransportableContent;
-(BOOL)section:(id)arg1 supportsShuffleType:(long long)arg2 ;
-(void)loadPlaybackContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)itemForItem:(id)arg1 inSection:(id)arg2 ;
-(BOOL)supportsAutoPlayForItem:(id)arg1 inSection:(id)arg2 ;
-(BOOL)containsLiveStream;
@end

