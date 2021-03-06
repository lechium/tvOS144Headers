/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKit/HomeKit-Structs.h>
#import <HMFoundation/HMFOperation.h>

@protocol HMCameraClipFetchAssetContextOperationDataSource;
@class HMCameraClipManager, HMCameraClip, NSURL;

@interface HMCameraClipFetchVideoAssetContextOperation : HMFOperation {

	HMCameraClipManager* _clipManager;
	HMCameraClip* _clip;
	NSURL* _clipDestinationFileURL;
	NSURL* _hlsPlaylistDestinationFileURL;
	/*^block*/id _downloadProgressHandler;
	/*^block*/id _fetchVideoAssetContextCompletionBlock;
	id<HMCameraClipFetchAssetContextOperationDataSource> _dataSource;
	NSRange _videoDataSegmentsRange;

}

@property (readonly) id<HMCameraClipFetchAssetContextOperationDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) HMCameraClipManager * clipManager;                                            //@synthesize clipManager=_clipManager - In the implementation block
@property (readonly) HMCameraClip * clip;                                                          //@synthesize clip=_clip - In the implementation block
@property (assign) NSRange videoDataSegmentsRange;                                                 //@synthesize videoDataSegmentsRange=_videoDataSegmentsRange - In the implementation block
@property (copy) NSURL * clipDestinationFileURL;                                                   //@synthesize clipDestinationFileURL=_clipDestinationFileURL - In the implementation block
@property (copy) NSURL * hlsPlaylistDestinationFileURL;                                            //@synthesize hlsPlaylistDestinationFileURL=_hlsPlaylistDestinationFileURL - In the implementation block
@property (copy) id downloadProgressHandler;                                                       //@synthesize downloadProgressHandler=_downloadProgressHandler - In the implementation block
@property (copy) id fetchVideoAssetContextCompletionBlock;                                         //@synthesize fetchVideoAssetContextCompletionBlock=_fetchVideoAssetContextCompletionBlock - In the implementation block
+(id)logCategory;
-(id)description;
-(void)main;
-(void)cancelWithError:(id)arg1 ;
-(id<HMCameraClipFetchAssetContextOperationDataSource>)dataSource;
-(HMCameraClip *)clip;
-(id)logIdentifier;
-(HMCameraClipManager *)clipManager;
-(id)decryptData:(id)arg1 ;
-(id)initWithClipManager:(id)arg1 clip:(id)arg2 dataSource:(id)arg3 ;
-(NSURL *)clipDestinationFileURL;
-(NSURL *)hlsPlaylistDestinationFileURL;
-(id)fetchVideoAssetContextCompletionBlock;
-(id)fetchVideoAssetContext;
-(id)downloadVideoAsset:(id)arg1 ;
-(id)writeHLSPlaylistForVideoAssetContext:(id)arg1 ;
-(void)finishWithVideoAssetContext:(id)arg1 ;
-(id)downloadProgressHandler;
-(NSRange)videoDataSegmentsRange;
-(void)updateDownloadProgressToPercentageComplete:(unsigned long long)arg1 ;
-(id)videoSegmentsToDownload;
-(id)downloadVideoSegment:(id)arg1 forDataTask:(id)arg2 andAppendToOutputStream:(id)arg3 ;
-(id)initWithClipManager:(id)arg1 clip:(id)arg2 ;
-(void)setVideoDataSegmentsRange:(NSRange)arg1 ;
-(void)setClipDestinationFileURL:(NSURL *)arg1 ;
-(void)setHlsPlaylistDestinationFileURL:(NSURL *)arg1 ;
-(void)setDownloadProgressHandler:(id)arg1 ;
-(void)setFetchVideoAssetContextCompletionBlock:(id)arg1 ;
@end

