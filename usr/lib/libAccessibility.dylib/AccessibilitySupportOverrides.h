/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:00 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libAccessibility.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSNumber;

@interface AccessibilitySupportOverrides : NSObject {

	NSNumber* _boldText;
	NSNumber* _increaseContrast;
	NSNumber* _reduceTransparency;
	NSNumber* _reduceMotion;
	NSNumber* _onOffLabels;
	NSNumber* _buttonShapes;
	NSNumber* _grayscale;
	NSNumber* _smartInvert;
	NSNumber* _differentiateWithoutColor;

}

@property (nonatomic,retain) NSNumber * boldText;                               //@synthesize boldText=_boldText - In the implementation block
@property (nonatomic,retain) NSNumber * increaseContrast;                       //@synthesize increaseContrast=_increaseContrast - In the implementation block
@property (nonatomic,retain) NSNumber * reduceTransparency;                     //@synthesize reduceTransparency=_reduceTransparency - In the implementation block
@property (nonatomic,retain) NSNumber * reduceMotion;                           //@synthesize reduceMotion=_reduceMotion - In the implementation block
@property (nonatomic,retain) NSNumber * onOffLabels;                            //@synthesize onOffLabels=_onOffLabels - In the implementation block
@property (nonatomic,retain) NSNumber * buttonShapes;                           //@synthesize buttonShapes=_buttonShapes - In the implementation block
@property (nonatomic,retain) NSNumber * grayscale;                              //@synthesize grayscale=_grayscale - In the implementation block
@property (nonatomic,retain) NSNumber * smartInvert;                            //@synthesize smartInvert=_smartInvert - In the implementation block
@property (nonatomic,retain) NSNumber * differentiateWithoutColor;              //@synthesize differentiateWithoutColor=_differentiateWithoutColor - In the implementation block
+(id)shared;
-(void)setGrayscale:(NSNumber *)arg1 ;
-(void)_installGrayscaleFilter;
-(void)_installInvertColorsFilter;
-(NSNumber *)smartInvert;
-(void)_addFilter:(id)arg1 ;
-(void)_removeFilterWithName:(id)arg1 ;
-(NSNumber *)grayscale;
-(void)setBoldText:(NSNumber *)arg1 ;
-(void)setReduceMotion:(NSNumber *)arg1 ;
-(void)setReduceTransparency:(NSNumber *)arg1 ;
-(void)setIncreaseContrast:(NSNumber *)arg1 ;
-(void)setOnOffLabels:(NSNumber *)arg1 ;
-(void)setSmartInvert:(NSNumber *)arg1 ;
-(void)setButtonShapes:(NSNumber *)arg1 ;
-(void)setDifferentiateWithoutColor:(NSNumber *)arg1 ;
-(NSNumber *)boldText;
-(NSNumber *)increaseContrast;
-(NSNumber *)reduceTransparency;
-(NSNumber *)reduceMotion;
-(NSNumber *)onOffLabels;
-(NSNumber *)buttonShapes;
-(NSNumber *)differentiateWithoutColor;
@end

