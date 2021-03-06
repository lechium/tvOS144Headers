/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreMaterial/CoreMaterial-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSMutableDictionary;

@interface MTStylingProvidingSolidColorLayer : CALayer {

	NSMutableDictionary* _cmStylingProviders;

}

@property (nonatomic,retain) NSMutableDictionary * cmStylingProviders;              //@synthesize cmStylingProviders=_cmStylingProviders - In the implementation block
-(void)setBackgroundColor:(CGColorRef)arg1 ;
-(void)_updateVisualStylingProviders;
-(id)visualStylingProviderForCategory:(id)arg1 ;
-(void)_updateVisualStylingProviderForCategory:(id)arg1 ;
-(id)_styleSetForCategory:(id)arg1 ;
-(id)_fillLightStyleSet;
-(id)_strokeLightStyleSet;
-(id)_fillDarkStyleSet;
-(id)_strokeDarkStyleSet;
-(id)_styleSetForCategory:(id)arg1 withPrimaryStyleDictionary:(id)arg2 secondaryStyleDictionary:(id)arg3 tertiaryStyleDictionary:(id)arg4 ;
-(id)_styleSetNameForCategory:(id)arg1 ;
-(NSMutableDictionary *)cmStylingProviders;
-(void)setCmStylingProviders:(NSMutableDictionary *)arg1 ;
@end

