/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUICore/VideosUICore-Structs.h>
#import <UIKitCore/_UIStackedImageContainerView.h>
#import <libobjc.A.dylib/VUIAuxiliaryViewSelecting.h>

@class VUILayeredImageProxy, UIView, UIImage, _UIStackedImageContainerLayer, NSString;

@interface VUILayeredImageContainerView : _UIStackedImageContainerView <VUIAuxiliaryViewSelecting> {

	VUILayeredImageProxy* _layeredImageProxy;
	BOOL _layeredImageLoaded;
	UIView* _overlayView;
	UIImage* _loadedImage;

}

@property (assign,getter=isLayeredImageLoaded,nonatomic) BOOL layeredImageLoaded;                       //@synthesize layeredImageLoaded=_layeredImageLoaded - In the implementation block
@property (nonatomic,retain) UIImage * loadedImage;                                                     //@synthesize loadedImage=_loadedImage - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                                                      //@synthesize overlayView=_overlayView - In the implementation block
@property (assign,nonatomic) BOOL fixedFrameOverlayView; 
@property (nonatomic,retain) VUILayeredImageProxy * layeredImageProxy;                                  //@synthesize layeredImageProxy=_layeredImageProxy - In the implementation block
@property (nonatomic,readonly) _UIStackedImageContainerLayer * layeredImageContainerLayer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSelected:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)willMoveToWindow:(id)arg1 ;
-(UIView *)overlayView;
-(void)setOverlayView:(UIView *)arg1 ;
-(void)setPressed:(BOOL)arg1 ;
-(void)setLayeredImageProxy:(VUILayeredImageProxy *)arg1 ;
-(id)initWithLayeredImageProxy:(id)arg1 ;
-(_UIStackedImageContainerLayer *)layeredImageContainerLayer;
-(UIEdgeInsets)selectionMarginsForSize:(CGSize)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3 ;
-(void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 focusAnimationCoordinator:(id)arg3 ;
-(void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setOverlayView:(id)arg1 masked:(BOOL)arg2 ;
-(void)setLayeredImageLoaded:(BOOL)arg1 ;
-(void)_loadLayeredImage;
-(BOOL)isLayeredImageLoaded;
-(void)setLoadedImage:(UIImage *)arg1 ;
-(void)setFixedFrameOverlayView:(BOOL)arg1 ;
-(BOOL)fixedFrameOverlayView;
-(VUILayeredImageProxy *)layeredImageProxy;
-(UIImage *)loadedImage;
@end
