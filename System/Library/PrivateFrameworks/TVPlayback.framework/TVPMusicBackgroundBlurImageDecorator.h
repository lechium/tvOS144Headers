/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:33 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVPlayback/TVPlayback-Structs.h>
#import <TVMLKit/TVImageDecorator.h>

@class _UIBackdropViewSettings;

@interface TVPMusicBackgroundBlurImageDecorator : TVImageDecorator {

	_UIBackdropViewSettings* _backdropSettings;
	long long _privateBackdropStyle;
	double _saturationDeltaFactor;

}

@property (assign,nonatomic) long long privateBackdropStyle;              //@synthesize privateBackdropStyle=_privateBackdropStyle - In the implementation block
@property (assign,nonatomic) double blurRadius; 
@property (assign,nonatomic) double grayscaleTintAlpha; 
@property (assign,nonatomic) double saturationDeltaFactor;                //@synthesize saturationDeltaFactor=_saturationDeltaFactor - In the implementation block
-(id)init;
-(double)blurRadius;
-(void)setBlurRadius:(double)arg1 ;
-(CGSize)expectedSize;
-(void)setSaturationDeltaFactor:(double)arg1 ;
-(void)setGrayscaleTintAlpha:(double)arg1 ;
-(double)grayscaleTintAlpha;
-(double)saturationDeltaFactor;
-(id)blurImageWithImage:(id)arg1 targetSize:(CGSize)arg2 scaleSize:(CGSize)arg3 ;
-(id)resizeImage:(CGImageRef)arg1 targetSize:(CGSize)arg2 shouldDither:(BOOL)arg3 ;
-(id)decorate:(id)arg1 scaledWithSize:(CGSize)arg2 croppedToFit:(BOOL)arg3 ;
-(CGSize)loaderScaleToSize;
-(BOOL)loaderCropToFit;
-(id)decoratorIdentifier;
-(void)_setupBackdropSettings;
-(long long)privateBackdropStyle;
-(void)setPrivateBackdropStyle:(long long)arg1 ;
@end

