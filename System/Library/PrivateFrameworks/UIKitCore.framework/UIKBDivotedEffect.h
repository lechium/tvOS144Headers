/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:33 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIKBRenderEffect.h>

@class UIKBGradient, NSString;

@interface UIKBDivotedEffect : NSObject <UIKBRenderEffect> {

	double _weight;

}

@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,readonly) BOOL renderUnder; 
@property (nonatomic,readonly) SEL renderSelector; 
@property (assign,nonatomic) double weight;                          //@synthesize weight=_weight - In the implementation block
@property (nonatomic,readonly) BOOL usesRGBColors; 
@property (nonatomic,readonly) UIKBGradient * gradient; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isValid;
-(double)weight;
-(void)setWeight:(double)arg1 ;
-(CGColorRef)CGColor;
-(UIKBGradient *)gradient;
-(BOOL)renderUnder;
-(SEL)renderSelector;
-(BOOL)usesRGBColors;
@end

