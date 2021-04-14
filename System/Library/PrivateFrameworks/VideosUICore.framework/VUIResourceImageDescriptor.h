/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <VideosUICore/VideosUICore-Structs.h>
@class NSString, UIImageSymbolConfiguration, UIColor;

@interface VUIResourceImageDescriptor : NSObject {

	BOOL _renderAsTemplate;
	BOOL _scaleToSize;
	unsigned long long _type;
	NSString* _name;
	UIImageSymbolConfiguration* _symbolConfiguration;
	double _aspectRatio;
	UIColor* _borderColor;
	double _borderWidth;
	UIColor* _tintColor;
	UIColor* _highlightColor;
	double _focusSizeIncrease;
	NSString* _accessibilityText;
	CGSize _size;
	VUICornerRadii _borderRadii;

}

@property (nonatomic,copy) NSString * name;                                                    //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL scaleToSize;                                                 //@synthesize scaleToSize=_scaleToSize - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) UIImageSymbolConfiguration * symbolConfiguration;               //@synthesize symbolConfiguration=_symbolConfiguration - In the implementation block
@property (nonatomic,readonly) CGSize size;                                                    //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) double aspectRatio;                                             //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (assign,getter=shouldRenderAsTemplate,nonatomic) BOOL renderAsTemplate;              //@synthesize renderAsTemplate=_renderAsTemplate - In the implementation block
@property (assign,nonatomic) VUICornerRadii borderRadii;                                       //@synthesize borderRadii=_borderRadii - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;                                            //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) double borderWidth;                                               //@synthesize borderWidth=_borderWidth - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                                              //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightColor;                                         //@synthesize highlightColor=_highlightColor - In the implementation block
@property (assign,nonatomic) double focusSizeIncrease;                                         //@synthesize focusSizeIncrease=_focusSizeIncrease - In the implementation block
@property (nonatomic,copy) NSString * accessibilityText;                                       //@synthesize accessibilityText=_accessibilityText - In the implementation block
-(NSString *)name;
-(CGSize)size;
-(unsigned long long)type;
-(void)setName:(NSString *)arg1 ;
-(UIColor *)borderColor;
-(void)setBorderColor:(UIColor *)arg1 ;
-(double)borderWidth;
-(void)setBorderWidth:(double)arg1 ;
-(double)aspectRatio;
-(NSString *)accessibilityText;
-(void)setHighlightColor:(UIColor *)arg1 ;
-(UIColor *)highlightColor;
-(VUICornerRadii)borderRadii;
-(void)setTintColor:(UIColor *)arg1 ;
-(UIColor *)tintColor;
-(void)setAccessibilityText:(NSString *)arg1 ;
-(UIImageSymbolConfiguration *)symbolConfiguration;
-(void)setFocusSizeIncrease:(double)arg1 ;
-(double)focusSizeIncrease;
-(void)setScaleToSize:(BOOL)arg1 ;
-(BOOL)scaleToSize;
-(void)setBorderRadii:(VUICornerRadii)arg1 ;
-(id)initWithSymbol:(id)arg1 size:(CGSize)arg2 symbolConfiguration:(id)arg3 ;
-(id)initWithResource:(id)arg1 size:(CGSize)arg2 ;
-(BOOL)shouldRenderAsTemplate;
-(void)setRenderAsTemplate:(BOOL)arg1 ;
@end
