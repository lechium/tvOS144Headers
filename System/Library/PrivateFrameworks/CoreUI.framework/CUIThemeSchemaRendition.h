/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:56 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>

@class NSDictionary, CUIPSDGradient;

@interface CUIThemeSchemaRendition : CUIThemeRendition {

	NSDictionary* cuiInfo;
	unsigned long long _nimages;
	CGImage* _image[9];
	CGRect _layoutRects[9];
	CGSize _intrinsicSize;
	CGRect _elementRect;
	long long _columnSlices;
	long long _rowSlices;
	SCD_Struct_CS11 _contentInsets;
	CUIPSDGradient* _gradient;

}

@property (nonatomic,readonly) unsigned long long numberOfSlices; 
@property (nonatomic,readonly) CGRect* sliceRects; 
@property (nonatomic,readonly) CUIPSDGradient * gradient; 
-(id)description;
-(void)dealloc;
-(unsigned short)size;
-(unsigned short)identifier;
-(unsigned short)state;
-(unsigned short)value;
-(double)scale;
-(unsigned short)previousState;
-(unsigned short)layer;
-(unsigned short)direction;
-(unsigned short)appearance;
-(CUIPSDGradient *)gradient;
-(unsigned long long)numberOfSlices;
-(id)referenceImage;
-(unsigned short)dimension1;
-(unsigned short)presentationState;
-(unsigned short)dimension2;
-(unsigned short)drawingLayer;
-(unsigned short)keyScale;
-(id)stringForState:(unsigned short)arg1 ;
-(id)stringForValue:(unsigned short)arg1 ;
-(unsigned short)previousValue;
-(CGRect*)sliceRects;
-(id)initWithCoreUIOptions:(id)arg1 forKey:(const renditionkeytoken*)arg2 ;
-(id)slices;
-(CGRect)alignmentRectangle;
-(CGRect)edgeInsets:(BOOL)arg1 ;
-(SCD_Struct_CS11)contentInsets;
-(id)coreUIOptions;
-(id)defaultTemplateName;
-(long long)columnSlices;
-(long long)rowSlices;
-(CGPoint)renditionCoordinatesForPartFeatures:(long long)arg1 ;
-(unsigned short)localization;
-(id)typeLocalizedString;
-(id)stateLocalizedString;
-(id)previousStateLocalizedString;
-(id)directionLocalizedString;
-(id)valueLocalizedString;
-(id)previousValueLocalizedString;
-(id)sizeLocalizedString;
-(id)presentationStateLocalizedString;
-(id)dimension1LocalizedString;
-(id)dimension2LocalizedString;
-(id)drawingLayerLocalizedString;
-(id)scaleLocalizedString;
@end
