/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:57 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreUI/CoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CUIStyleEffectConfiguration : NSObject <NSCopying> {

	long long _state;
	long long _presentationState;
	long long _value;
	unsigned long long _dimension1;
	NSString* _appearanceName;
	BOOL _useSimplifiedEffect;
	BOOL _foregroundColorShouldTintEffects;
	double _brightnessMultiplier;
	double _effectScale;
	unsigned long long _colorTemperature;

}

@property (assign,nonatomic) long long state;                                    //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) long long presentationState;                        //@synthesize presentationState=_presentationState - In the implementation block
@property (assign,nonatomic) long long value;                                    //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) unsigned long long dimension1;                      //@synthesize dimension1=_dimension1 - In the implementation block
@property (nonatomic,copy) NSString * appearanceName;                            //@synthesize appearanceName=_appearanceName - In the implementation block
@property (assign,nonatomic) BOOL useSimplifiedEffect;                           //@synthesize useSimplifiedEffect=_useSimplifiedEffect - In the implementation block
@property (assign,nonatomic) BOOL foregroundColorShouldTintEffects;              //@synthesize foregroundColorShouldTintEffects=_foregroundColorShouldTintEffects - In the implementation block
@property (assign,nonatomic) double brightnessMultiplier;                        //@synthesize brightnessMultiplier=_brightnessMultiplier - In the implementation block
@property (assign,nonatomic) unsigned long long colorTemperature;                //@synthesize colorTemperature=_colorTemperature - In the implementation block
@property (assign,nonatomic) double effectScale;                                 //@synthesize effectScale=_effectScale - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(long long)value;
-(void)setValue:(long long)arg1 ;
-(void)setEffectScale:(double)arg1 ;
-(unsigned long long)dimension1;
-(long long)presentationState;
-(NSString *)appearanceName;
-(BOOL)shouldIgnoreForegroundColor;
-(BOOL)foregroundColorShouldTintEffects;
-(BOOL)shouldRespectOutputBlending;
-(void)setDimension1:(unsigned long long)arg1 ;
-(double)effectScale;
-(void)setAppearanceName:(NSString *)arg1 ;
-(BOOL)useSimplifiedEffect;
-(void)setPresentationState:(long long)arg1 ;
-(void)setUseSimplifiedEffect:(BOOL)arg1 ;
-(void)setForegroundColorShouldTintEffects:(BOOL)arg1 ;
-(double)brightnessMultiplier;
-(void)setBrightnessMultiplier:(double)arg1 ;
-(unsigned long long)colorTemperature;
-(void)setColorTemperature:(unsigned long long)arg1 ;
@end

