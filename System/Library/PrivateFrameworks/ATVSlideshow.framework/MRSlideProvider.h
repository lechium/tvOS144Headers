/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <libobjc.A.dylib/MRLoadable.h>
#import <libobjc.A.dylib/MRRenderable.h>

@class NSString, NSDictionary, NSInvocationOperation, NSLock, NSConditionLock, MRFrame, MRImage, MRLayerEffect, MCSlide, MRLayer, MRAudioPlayer;

@interface MRSlideProvider : NSObject <MRLoadable, MRRenderable> {

	CGSize mDefaultSize;
	float mStillTime;
	NSString* mImageSizeScript;
	NSDictionary* mEffectAttributes;
	NSString* mShowTimeScript;
	NSInvocationOperation* mPreloadOperation;
	NSLock* mPreloadOperationLock;
	NSConditionLock* mPreloadSemaphore;
	MRFrame* mFrame;
	MRImage* mOriginalImage;
	MRImage* mOutputImage;
	CGSize mRequestedSize;
	double mShowTime;
	double mShowDuration;
	double mSlideStartTime;
	double mSlideDuration;
	MRLayerEffect* mEffectLayer;
	MCSlide* mSlide;
	int mKenBurnsType;
	NSString* mAssetPath;
	double mOriginalImageAspectRatio;
	MRLayer* mSlideLayer;
	CGSize mImageSize;
	CGSize mLastImageSize;
	double mLastTime;
	CGSize mLastDaSize;
	CGSize mSizeFactor;
	BOOL mIsAnimatedGIF;
	MCSlide* mSlideCopy;
	unsigned long long mSlideIndex;
	MRAudioPlayer* mFakeAudioPlayer;
	unsigned mFlags;

}

@property (assign,nonatomic) CGSize defaultSize; 
@property (assign,nonatomic) BOOL isMonochromatic; 
@property (assign,nonatomic) BOOL useMipmapping; 
@property (assign,nonatomic) BOOL isStill; 
@property (assign,nonatomic) float stillTime; 
@property (nonatomic,copy) NSString * imageSizeScript; 
@property (nonatomic,retain) NSDictionary * effectAttributes; 
@property (nonatomic,copy) NSString * showTimeScript; 
@property (assign,nonatomic) BOOL slideIsReadonly; 
@property (readonly) BOOL hasFilters; 
@property (assign,nonatomic) double showTime; 
@property (assign,nonatomic) double showDuration; 
@property (readonly) BOOL canPlay; 
@property (assign,nonatomic) BOOL isPlaying; 
@property (assign,nonatomic) double time; 
@property (assign,nonatomic) CGSize sizeFactor; 
@property (nonatomic,retain) MCSlide * slide; 
@property (assign) int kenBurnsType; 
@property (assign,nonatomic) BOOL needsToUpdateLayout; 
@property (readonly) MRFrame * frame; 
@property (nonatomic,readonly) CGSize requestedSize; 
@property (nonatomic,readonly) float imageAspectRatio; 
@property (nonatomic,readonly) double slideStartTime; 
@property (nonatomic,readonly) double slideDuration; 
@property (nonatomic,readonly) BOOL isLoaded; 
@property (nonatomic,readonly) BOOL isNative3D; 
@property (nonatomic,readonly) BOOL isOpaque; 
@property (nonatomic,readonly) BOOL isAlphaFriendly; 
@property (nonatomic,readonly) BOOL isInfinite; 
+(void)applyKenBurnsForSlide:(id)arg1 inPlug:(id)arg2 forSize:(CGSize)arg3 atTime:(double)arg4 withTargetSize:(CGSize)arg5 kenBurnsType:(int)arg6 translation:(CGPoint*)arg7 scale:(double*)arg8 rotation:(double*)arg9 ;
-(void)dealloc;
-(void)finalize;
-(void)cleanup;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)unload;
-(BOOL)isLoaded;
-(double)time;
-(BOOL)isOpaque;
-(MRFrame *)frame;
-(void)setTime:(double)arg1 ;
-(BOOL)isPlaying;
-(void)cancelLoading;
-(BOOL)isInfinite;
-(CGSize)defaultSize;
-(BOOL)canPlay;
-(float)stillTime;
-(void)setStillTime:(float)arg1 ;
-(CGSize)requestedSize;
-(float)imageAspectRatio;
-(CGSize)sizeFactor;
-(void)setSizeFactor:(CGSize)arg1 ;
-(NSDictionary *)effectAttributes;
-(void)setEffectAttributes:(NSDictionary *)arg1 ;
-(double)showTime;
-(void)setSlide:(MCSlide *)arg1 ;
-(MCSlide *)slide;
-(double)showDuration;
-(int)kenBurnsType;
-(void)setKenBurnsType:(int)arg1 ;
-(BOOL)isLoadedForTime:(double)arg1 ;
-(void)loadWithArguments:(id)arg1 ;
-(void)loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 now:(BOOL)arg4 ;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)retainedByUserRenderedImageAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)patchworkAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)isNative3D;
-(BOOL)isAlphaFriendly;
-(void)setImageSizeScript:(NSString *)arg1 ;
-(void)setDefaultSize:(CGSize)arg1 ;
-(void)setUseMipmapping:(BOOL)arg1 ;
-(void)setShowTime:(double)arg1 ;
-(void)setShowDuration:(double)arg1 ;
-(id)initWithEffectLayer:(id)arg1 ;
-(BOOL)updateStuffWithAssetManager:(id)arg1 ;
-(NSString *)imageSizeScript;
-(NSString *)showTimeScript;
-(BOOL)beginLiveUpdate;
-(BOOL)endLiveUpdate;
-(void)setIsMonochromatic:(BOOL)arg1 ;
-(BOOL)isMonochromatic;
-(void)setIsPlaying:(BOOL)arg1 ;
-(void)_loadTextureWithArguments:(id)arg1 ;
-(void)loadTextureWithArguments:(id)arg1 ;
-(BOOL)useMipmapping;
-(BOOL)isStill;
-(void)setNeedsToUpdateLayout:(BOOL)arg1 ;
-(void)setIsStill:(BOOL)arg1 ;
-(void)setSlideIsReadonly:(BOOL)arg1 ;
-(void)setShowTimeScript:(NSString *)arg1 ;
-(void)updateShowTimeAndDurationWithPlug:(id)arg1 andAttributes:(id)arg2 ;
-(double)slideDuration;
-(void)_unloadIfNotUpdatingLive;
-(CGSize)framedImageSizeAtIndex:(unsigned)arg1 aspectRatio:(float)arg2 ;
-(CGSize)unframedImageSizeForAspectRatio:(float)arg1 frameID:(id)arg2 andFrameAttributes:(id)arg3 atIndex:(unsigned)arg4 framedImageSize:(CGSize*)arg5 ;
-(void)_computeImageSizeInContext:(id)arg1 withArguments:(id)arg2 ;
-(BOOL)slideIsReadonly;
-(BOOL)needsToUpdateLayout;
-(BOOL)hasFilters;
-(double)slideStartTime;
-(void)printFlags;
@end

