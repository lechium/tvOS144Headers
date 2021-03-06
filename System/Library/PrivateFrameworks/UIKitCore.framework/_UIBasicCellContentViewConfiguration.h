/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:05 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIContentViewConfiguration.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _UIContentViewEditingConfiguration, _UIContentViewImageViewConfiguration, _UIContentViewLabelConfiguration, NSString;

@interface _UIBasicCellContentViewConfiguration : NSObject <_UIContentViewConfiguration, NSSecureCoding> {

	SCD_Struct_UI60 _configurationFlags;
	unsigned long long _axesPreservingSuperviewLayoutMargins;
	double _imageToTextPadding;
	_UIContentViewEditingConfiguration* _textLabelEditingConfiguration;
	long long _defaultStyle;
	_UIContentViewImageViewConfiguration* _imageView;
	_UIContentViewLabelConfiguration* _textLabel;
	NSDirectionalEdgeInsets _directionalLayoutMargins;

}

@property (assign,setter=_setAxesPreservingSuperviewLayoutMargins:,nonatomic) unsigned long long _axesPreservingSuperviewLayoutMargins;              //@synthesize axesPreservingSuperviewLayoutMargins=_axesPreservingSuperviewLayoutMargins - In the implementation block
@property (assign,setter=_setDirectionalLayoutMargins:,nonatomic) NSDirectionalEdgeInsets _directionalLayoutMargins;                                 //@synthesize directionalLayoutMargins=_directionalLayoutMargins - In the implementation block
@property (assign,setter=_setImageToTextPadding:,nonatomic) double _imageToTextPadding;                                                              //@synthesize imageToTextPadding=_imageToTextPadding - In the implementation block
@property (assign,nonatomic) long long _defaultStyle;                                                                                                //@synthesize defaultStyle=_defaultStyle - In the implementation block
@property (nonatomic,readonly) BOOL _isSidebarStyle; 
@property (nonatomic,readonly) _UIContentViewImageViewConfiguration * imageView;                                                                     //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) _UIContentViewLabelConfiguration * textLabel;                                                                         //@synthesize textLabel=_textLabel - In the implementation block
@property (assign,nonatomic) unsigned long long axesPreservingSuperviewLayoutMargins; 
@property (assign,nonatomic) NSDirectionalEdgeInsets directionalLayoutMargins; 
@property (assign,nonatomic) double imageToTextPadding; 
@property (nonatomic,copy) _UIContentViewEditingConfiguration * _textLabelEditingConfiguration;                                                      //@synthesize textLabelEditingConfiguration=_textLabelEditingConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)defaultConfiguration;
+(id)defaultListCellConfigurationForState:(unsigned long long)arg1 ;
+(id)defaultOutlineCellConfigurationForState:(unsigned long long)arg1 ;
+(id)defaultOutlineParentCellConfigurationForState:(unsigned long long)arg1 ;
+(id)_defaultConfigurationForStyle:(long long)arg1 state:(unsigned long long)arg2 traitCollection:(id)arg3 ;
+(id)defaultListCellConfigurationForState:(unsigned long long)arg1 traitCollection:(id)arg2 ;
+(id)defaultOutlineCellConfigurationForState:(unsigned long long)arg1 traitCollection:(id)arg2 ;
+(id)listCellConfiguration;
+(id)outlineCellConfiguration;
+(id)defaultOutlineRootParentCellConfigurationForState:(unsigned long long)arg1 traitCollection:(id)arg2 ;
+(id)outlineRootParentCellConfiguration;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(_UIContentViewLabelConfiguration *)textLabel;
-(_UIContentViewImageViewConfiguration *)imageView;
-(NSDirectionalEdgeInsets)directionalLayoutMargins;
-(void)setDirectionalLayoutMargins:(NSDirectionalEdgeInsets)arg1 ;
-(id)updatedConfigurationForState:(unsigned long long)arg1 ;
-(unsigned long long)axesPreservingSuperviewLayoutMargins;
-(void)setAxesPreservingSuperviewLayoutMargins:(unsigned long long)arg1 ;
-(double)imageToTextPadding;
-(void)setImageToTextPadding:(double)arg1 ;
-(void)set_defaultStyle:(long long)arg1 ;
-(long long)_defaultStyle;
-(id)updatedConfigurationForState:(unsigned long long)arg1 traitCollection:(id)arg2 ;
-(unsigned long long)_axesPreservingSuperviewLayoutMargins;
-(void)_setAxesPreservingSuperviewLayoutMargins:(unsigned long long)arg1 ;
-(NSDirectionalEdgeInsets)_directionalLayoutMargins;
-(void)_setDirectionalLayoutMargins:(NSDirectionalEdgeInsets)arg1 ;
-(BOOL)_isEqualToConfiguration:(id)arg1 ;
-(BOOL)_isEqualToConfigurationQuick:(id)arg1 ;
-(id)createContentView;
-(void)applyToContentView:(id)arg1 ;
-(void)_setImageToTextPadding:(double)arg1 ;
-(double)_imageToTextPadding;
-(BOOL)_isSidebarStyle;
-(_UIContentViewEditingConfiguration *)_textLabelEditingConfiguration;
-(void)set_textLabelEditingConfiguration:(_UIContentViewEditingConfiguration *)arg1 ;
-(id)_initWithImageView:(id)arg1 textLabel:(id)arg2 directionalLayoutMargins:(NSDirectionalEdgeInsets)arg3 imageToTextPadding:(double)arg4 ;
@end

