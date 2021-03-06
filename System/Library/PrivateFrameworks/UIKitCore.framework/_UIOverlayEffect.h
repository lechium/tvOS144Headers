/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:57 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIVisualEffect.h>

@class NSString, UIImage, UIColor;

@interface _UIOverlayEffect : UIVisualEffect {

	NSString* _filterType;
	UIImage* _image;
	UIColor* _color;
	double _alpha;

}

@property (nonatomic,copy) NSString * filterType;              //@synthesize filterType=_filterType - In the implementation block
@property (nonatomic,retain) UIImage * image;                  //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) UIColor * color;                    //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) double alpha;                     //@synthesize alpha=_alpha - In the implementation block
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)alpha;
-(NSString *)filterType;
-(void)setFilterType:(NSString *)arg1 ;
-(UIImage *)image;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3 ;
@end

