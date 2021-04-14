/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UIView;


@protocol _UIFieldEditorHostingViewRequirements <UITraitEnvironment,UITextInput>
@property (nonatomic,readonly) UIView * _contentView; 
@property (nonatomic,readonly) UIView * _backgroundView; 
@property (nonatomic,readonly) BOOL _fieldEditorAttached; 
@property (nonatomic,readonly) BOOL _hasContent; 
@property (nonatomic,readonly) long long _blurEffectStyleForAppearance; 
@required
-(UIView *)_contentView;
-(UIView *)_backgroundView;
-(BOOL)_hasContent;
-(CGRect*)placeholderRectForBounds:(CGRect)arg1;
-(long long)_blurEffectStyleForAppearance;
-(BOOL)_fieldEditorAttached;

@end

