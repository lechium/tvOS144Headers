/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:03 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGridInlinePlaybackController.h>

@protocol OS_dispatch_queue, PXPhotosDetailsInlinePlaybackControllerDelegate;
@class NSObject, PXTilingController;

@interface PXPhotosDetailsInlinePlaybackController : PXGridInlinePlaybackController {

	NSObject*<OS_dispatch_queue> _recordCreationQueue;
	PXTilingController* _tilingController;
	id<PXPhotosDetailsInlinePlaybackControllerDelegate> _delegate;

}

@property (nonatomic,readonly) PXTilingController * tilingController;                                          //@synthesize tilingController=_tilingController - In the implementation block
@property (assign,nonatomic,__weak) id<PXPhotosDetailsInlinePlaybackControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<PXPhotosDetailsInlinePlaybackControllerDelegate>)delegate;
-(void)setDelegate:(id<PXPhotosDetailsInlinePlaybackControllerDelegate>)arg1 ;
-(void)checkInTile:(void*)arg1 withIdentifier:(PXTileIdentifier)arg2 ;
-(PXTilingController *)tilingController;
-(id)createPlaybackRecordForDisplayAsset:(id)arg1 mediaProvider:(id)arg2 geometryReference:(id)arg3 ;
-(CGRect)currentVisibleRect;
-(CGRect)frameForPlaybackRecord:(id)arg1 minPlayableSize:(out CGSize*)arg2 ;
-(BOOL)shouldEnablePlayback;
-(BOOL)canPlayAsset:(id)arg1 ;
-(id)initWithTilingController:(id)arg1 ;
-(BOOL)_isRecognizedTileIdentifier:(PXTileIdentifier)arg1 ;
-(PXTileIdentifier)_currentTileIdentifierForRecord:(id)arg1 ;
-(void)checkOutTile:(void*)arg1 withIdentifier:(PXTileIdentifier)arg2 ;
-(void)updatePlaybackEnabled;
@end

