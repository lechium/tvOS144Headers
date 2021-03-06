/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIScenePresentationContext.h>

@class UIScenePresentationContext, NSSet, NSString, UIColor, UITransformer;

@interface UIMutableScenePresentationContext : UIScenePresentationContext

@property (setter=_setDefaultPresentationContext:,nonatomic,retain) UIScenePresentationContext * _defaultPresentationContext; 
@property (setter=_setExclusiveLayerTargetsToInclude:,nonatomic,copy) NSSet * _exclusiveLayerTargetsToInclude; 
@property (setter=_setLayerTargetsToExclude:,nonatomic,copy) NSSet * _layerTargetsToExclude; 
@property (assign,setter=_setVisibilityPropagationEnabled:,getter=_isVisibilityPropagationEnabled,nonatomic) BOOL _visibilityPropagationEnabled; 
@property (setter=_setMinificationFilterName:,nonatomic,copy) NSString * _minificationFilterName; 
@property (assign,getter=isClippingDisabled,nonatomic) BOOL clippingDisabled; 
@property (assign,nonatomic) unsigned long long appearanceStyle; 
@property (nonatomic,copy) UIColor * backgroundColorWhileHosting; 
@property (nonatomic,copy) UIColor * backgroundColorWhileNotHosting; 
@property (assign,nonatomic) unsigned long long presentedLayerTypes; 
@property (nonatomic,copy) UITransformer * hostTransformer; 
@property (assign,nonatomic) unsigned long long renderingMode; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRenderingMode:(unsigned long long)arg1 ;
-(void)resetToDefaults;
-(void)setAppearanceStyle:(unsigned long long)arg1 ;
-(void)setPresentedLayerTypes:(unsigned long long)arg1 ;
-(void)_setVisibilityPropagationEnabled:(BOOL)arg1 ;
-(UIScenePresentationContext *)_defaultPresentationContext;
-(void)setClippingDisabled:(BOOL)arg1 ;
-(void)_setMinificationFilterName:(id)arg1 ;
-(void)setBackgroundColorWhileHosting:(UIColor *)arg1 ;
-(void)setBackgroundColorWhileNotHosting:(UIColor *)arg1 ;
-(id)_existingLayerPresentationContextCreatingIfNecessary:(BOOL)arg1 ;
-(void)setHostTransformer:(UITransformer *)arg1 ;
-(void)modifyLayerPresentationOverrideContextForLayerTarget:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)removeLayerPresentationOverrideForLayerTarget:(id)arg1 ;
-(void)removeAllLayerPresentationOverrides;
-(void)_setDefaultPresentationContext:(id)arg1 ;
-(void)_setExclusiveLayerTargetsToInclude:(id)arg1 ;
-(void)_setLayerTargetsToExclude:(id)arg1 ;
@end

