/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/CannedVideoFrameFeeder.h>

@class AVURLAsset, AVAssetReader, AVAssetTrack, AVAssetReaderTrackOutput, NSString, VideoScaler;

@interface CannedEncodedVideoCapture : NSObject <CannedVideoFrameFeeder> {

	AVURLAsset* _compressedFileAsset;
	AVAssetReader* _assetReader;
	AVAssetTrack* _videoTrack;
	AVAssetReaderTrackOutput* _readerVideoTrackOutput;
	NSString* _movieURLString;
	VideoScaler* _videoScaler;
	CVPixelBufferPoolRef _pixelBufferPool;
	CVPixelBufferPoolRef _rotatedPixelBufferPool;
	int _width;
	int _height;
	int _allFrameCount;
	double _allFrameRate;
	int _frameCount;
	opaque_pthread_mutex_t _inputMutex;
	opaque_pthread_mutex_t _attributeMutex;

}

@property (nonatomic,retain) AVURLAsset * compressedFileAsset;                               //@synthesize compressedFileAsset=_compressedFileAsset - In the implementation block
@property (nonatomic,retain) AVAssetReader * assetReader;                                    //@synthesize assetReader=_assetReader - In the implementation block
@property (nonatomic,retain) AVAssetTrack * videoTrack;                                      //@synthesize videoTrack=_videoTrack - In the implementation block
@property (nonatomic,retain) AVAssetReaderTrackOutput * readerVideoTrackOutput;              //@synthesize readerVideoTrackOutput=_readerVideoTrackOutput - In the implementation block
@property (nonatomic,retain) NSString * movieURLString;                                      //@synthesize movieURLString=_movieURLString - In the implementation block
@property (nonatomic,retain) VideoScaler * videoScaler;                                      //@synthesize videoScaler=_videoScaler - In the implementation block
@property (assign,nonatomic) int width;                                                      //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) int height;                                                     //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) int allFrameCount;                                              //@synthesize allFrameCount=_allFrameCount - In the implementation block
@property (assign,nonatomic) double allFrameRate;                                            //@synthesize allFrameRate=_allFrameRate - In the implementation block
@property (assign,nonatomic) int frameCount;                                                 //@synthesize frameCount=_frameCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)initialize;
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(int)width;
-(int)height;
-(void)setWidth:(int)arg1 ;
-(void)setHeight:(int)arg1 ;
-(int)frameCount;
-(AVAssetReader *)assetReader;
-(AVAssetTrack *)videoTrack;
-(void)setVideoTrack:(AVAssetTrack *)arg1 ;
-(void)setAssetReader:(AVAssetReader *)arg1 ;
-(void)setCompressedFileAsset:(AVURLAsset *)arg1 ;
-(AVURLAsset *)compressedFileAsset;
-(void)setReaderVideoTrackOutput:(AVAssetReaderTrackOutput *)arg1 ;
-(AVAssetReaderTrackOutput *)readerVideoTrackOutput;
-(int)initializeDecoder;
-(CVBufferRef)createPixelBufferForFrameIndex:(int)arg1 ;
-(void)getFrameRate:(double*)arg1 frameCount:(int*)arg2 ;
-(int)setWidth:(int)arg1 height:(int)arg2 ;
-(NSString *)movieURLString;
-(void)setMovieURLString:(NSString *)arg1 ;
-(VideoScaler *)videoScaler;
-(void)setVideoScaler:(VideoScaler *)arg1 ;
-(int)allFrameCount;
-(void)setAllFrameCount:(int)arg1 ;
-(double)allFrameRate;
-(void)setAllFrameRate:(double)arg1 ;
-(void)setFrameCount:(int)arg1 ;
@end

