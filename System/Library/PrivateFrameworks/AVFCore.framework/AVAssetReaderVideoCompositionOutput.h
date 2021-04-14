/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVAssetReaderOutput.h>

@class AVAssetReaderVideoCompositionOutputInternal, NSArray, NSDictionary, AVVideoComposition;

@interface AVAssetReaderVideoCompositionOutput : AVAssetReaderOutput {

	AVAssetReaderVideoCompositionOutputInternal* _videoCompositionOutputInternal;

}

@property (nonatomic,readonly) NSArray * videoTracks; 
@property (nonatomic,readonly) NSDictionary * videoSettings; 
@property (nonatomic,copy) AVVideoComposition * videoComposition; 
@property (nonatomic,readonly) id<AVVideoCompositing> customVideoCompositor; 
+(id)assetReaderVideoCompositionOutputWithVideoComposition:(id)arg1 appliedToAsset:(id)arg2 videoSettings:(id)arg3 ;
+(id)assetReaderVideoCompositionOutputWithVideoTracks:(id)arg1 videoSettings:(id)arg2 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)mediaType;
-(id)_asset;
-(AVVideoComposition *)videoComposition;
-(void)setVideoComposition:(AVVideoComposition *)arg1 ;
-(id<AVVideoCompositing>)customVideoCompositor;
-(NSDictionary *)videoSettings;
-(void)_setVideoComposition:(id)arg1 customVideoCompositorSession:(id)arg2 ;
-(id)_errorForOSStatus:(int)arg1 ;
-(BOOL)_prepareForReadingReturningError:(id*)arg1 ;
-(BOOL)alwaysCopiesSampleData;
-(BOOL)_enableTrackExtractionReturningError:(id*)arg1 ;
-(id)_formatDescriptions;
-(NSArray *)videoTracks;
-(id)initWithVideoTracks:(id)arg1 videoSettings:(id)arg2 ;
-(void)_setVideoComposition:(id)arg1 ;
-(id)_videoCompositionProcessorColorProperties;
@end

