/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVKit/TVKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSArray, _TVImageLoaderQueue, NSString;

@interface TVParadeView : UIView <CAAnimationDelegate> {

	BOOL _pausedForResignActive;
	BOOL _paused;
	BOOL _shuffled;
	BOOL _inOrder;
	NSArray* _imageProxies;
	_TVImageLoaderQueue* _loaderQueue;
	NSArray* _shuffledImageProxies;
	NSArray* _positionKeyframes;
	NSArray* _depthKeyframes;
	NSArray* _transformKeyframes;
	CGRect _animationBounds;
	CGRect _maximumImageBounds;

}

@property (nonatomic,retain) _TVImageLoaderQueue * loaderQueue;              //@synthesize loaderQueue=_loaderQueue - In the implementation block
@property (nonatomic,copy) NSArray * shuffledImageProxies;                   //@synthesize shuffledImageProxies=_shuffledImageProxies - In the implementation block
@property (assign,nonatomic) CGRect animationBounds;                         //@synthesize animationBounds=_animationBounds - In the implementation block
@property (assign,nonatomic) CGRect maximumImageBounds;                      //@synthesize maximumImageBounds=_maximumImageBounds - In the implementation block
@property (nonatomic,retain) NSArray * positionKeyframes;                    //@synthesize positionKeyframes=_positionKeyframes - In the implementation block
@property (nonatomic,retain) NSArray * depthKeyframes;                       //@synthesize depthKeyframes=_depthKeyframes - In the implementation block
@property (nonatomic,retain) NSArray * transformKeyframes;                   //@synthesize transformKeyframes=_transformKeyframes - In the implementation block
@property (nonatomic,copy) NSArray * imageProxies;                           //@synthesize imageProxies=_imageProxies - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused;                    //@synthesize paused=_paused - In the implementation block
@property (assign,getter=isShuffled,nonatomic) BOOL shuffled;                //@synthesize shuffled=_shuffled - In the implementation block
@property (assign,getter=isInOrder,nonatomic) BOOL inOrder;                  //@synthesize inOrder=_inOrder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)isPaused;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)setPaused:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToSuperview;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(NSArray *)imageProxies;
-(void)setImageProxies:(NSArray *)arg1 ;
-(void)_stopAnimations;
-(void)setInOrder:(BOOL)arg1 ;
-(void)setPreviewPaused:(BOOL)arg1 ;
-(BOOL)isPreviewPaused;
-(_TVImageLoaderQueue *)loaderQueue;
-(void)setLoaderQueue:(_TVImageLoaderQueue *)arg1 ;
-(void)setShuffled:(BOOL)arg1 ;
-(BOOL)isShuffled;
-(BOOL)isInOrder;
-(void)_updateKeyframes;
-(void)_applicationDidFinishSuspensionNotification:(id)arg1 ;
-(void)_updateAnimations;
-(id)_imageProxiesToLoad;
-(long long)_maximumImageCount;
-(id)_createLayerForImage:(CGImageRef)arg1 ;
-(void)setPositionKeyframes:(NSArray *)arg1 ;
-(void)setDepthKeyframes:(NSArray *)arg1 ;
-(void)setTransformKeyframes:(NSArray *)arg1 ;
-(void)_updateAnimationForLayer:(id)arg1 timeOffset:(double)arg2 ;
-(NSArray *)positionKeyframes;
-(NSArray *)depthKeyframes;
-(NSArray *)transformKeyframes;
-(id)_sublayerWithAnimation:(id)arg1 ;
-(NSArray *)shuffledImageProxies;
-(void)setShuffledImageProxies:(NSArray *)arg1 ;
-(CGRect)animationBounds;
-(void)setAnimationBounds:(CGRect)arg1 ;
-(CGRect)maximumImageBounds;
-(void)setMaximumImageBounds:(CGRect)arg1 ;
@end

