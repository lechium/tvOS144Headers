/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, IKViewElementStyle, TVAppStyle, NSString, NSShadow, TVColor;

@interface TVViewElementStyle : NSObject <NSCopying> {

	NSMutableDictionary* _cachedColorObjects;
	IKViewElementStyle* _style;

}

@property (nonatomic,__weak,readonly) IKViewElementStyle * style;              //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) TVAppStyle * styleMetrics; 
@property (nonatomic,readonly) NSString * textTransform; 
@property (nonatomic,readonly) NSShadow * shadow; 
@property (nonatomic,readonly) TVColor * backgroundColor; 
@property (nonatomic,readonly) TVColor * color; 
@property (nonatomic,readonly) double fontSize; 
@property (nonatomic,readonly) NSString * fontWeight; 
@property (nonatomic,readonly) double height; 
@property (nonatomic,readonly) UIEdgeInsets margin; 
@property (nonatomic,readonly) UIEdgeInsets focusMargin; 
@property (nonatomic,readonly) double maxHeight; 
@property (nonatomic,readonly) double maxWidth; 
@property (nonatomic,readonly) double minHeight; 
@property (nonatomic,readonly) double minWidth; 
@property (nonatomic,readonly) UIEdgeInsets padding; 
@property (nonatomic,readonly) long long textAlignment; 
@property (nonatomic,readonly) double width; 
@property (nonatomic,readonly) long long alignment; 
@property (nonatomic,readonly) long long contentAlignment; 
@property (nonatomic,readonly) TVColor * highlightColor; 
@property (nonatomic,readonly) NSString * imageTreatmentName; 
@property (nonatomic,readonly) double interitemSpacing; 
@property (nonatomic,readonly) NSString * textHighlightStyle; 
@property (nonatomic,readonly) double textMinimumScaleFactor; 
@property (nonatomic,readonly) long long position; 
@property (nonatomic,readonly) NSString * ratingStyle; 
@property (nonatomic,readonly) unsigned long long maxTextLines; 
@property (nonatomic,readonly) NSString * textStyle; 
@property (nonatomic,readonly) TVColor * tintColor; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)position;
-(IKViewElementStyle *)style;
-(double)width;
-(double)height;
-(long long)alignment;
-(double)fontSize;
-(TVColor *)color;
-(TVColor *)backgroundColor;
-(UIEdgeInsets)padding;
-(NSShadow *)shadow;
-(double)minWidth;
-(double)maxWidth;
-(double)minHeight;
-(double)maxHeight;
-(TVColor *)highlightColor;
-(NSString *)fontWeight;
-(UIEdgeInsets)margin;
-(NSString *)textTransform;
-(NSString *)textStyle;
-(TVColor *)tintColor;
-(id)initWithStyle:(id)arg1 ;
-(long long)textAlignment;
-(double)interitemSpacing;
-(unsigned long long)maxTextLines;
-(long long)contentAlignment;
-(id)darkTintColor;
-(NSString *)ratingStyle;
-(id)valueForStyleProperty:(id)arg1 ;
-(TVAppStyle *)styleMetrics;
-(void)setStyleMetrics:(TVAppStyle *)arg1 ;
-(id)cssValueForStyleProperty:(id)arg1 ;
-(UIEdgeInsets)focusMargin;
-(NSString *)imageTreatmentName;
-(NSString *)textHighlightStyle;
-(double)textMinimumScaleFactor;
@end

