/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>

@class CUIShapeEffectPreset;

@interface _CUIThemeEffectRendition : CUIThemeRendition {

	const cuieffectdata* effectData;
	CUIShapeEffectPreset* _effectPreset;
	float _minimumShadowSpread;

}
-(void)dealloc;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(id)effectPreset;
-(void)_setStructuredThemeStore:(id)arg1 ;
@end

