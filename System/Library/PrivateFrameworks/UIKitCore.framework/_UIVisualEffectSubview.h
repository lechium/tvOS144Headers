/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIVisualEffectViewParticipating.h>

@protocol _UIVisualEffectViewParticipating, _UIVisualEffectViewSubviewMonitoring;
@class _UIVisualEffectViewBackdropCaptureGroup, NSArray, UIView, NSString;

@interface _UIVisualEffectSubview : UIView <_UIVisualEffectViewParticipating> {

	NSArray* _filters;
	_UIVisualEffectViewBackdropCaptureGroup* _primaryCaptureGroup;
	UIView*<_UIVisualEffectViewParticipating> _containedView;
	NSArray* _viewEffects;
	id<_UIVisualEffectViewSubviewMonitoring> _subviewMonitor;

}

@property (assign,nonatomic,__weak) id<_UIVisualEffectViewSubviewMonitoring> subviewMonitor;              //@synthesize subviewMonitor=_subviewMonitor - In the implementation block
@property (assign,nonatomic) BOOL disableGroupFiltering; 
@property (nonatomic,retain) _UIVisualEffectViewBackdropCaptureGroup * primaryCaptureGroup;               //@synthesize primaryCaptureGroup=_primaryCaptureGroup - In the implementation block
@property (nonatomic,retain) UIView*<_UIVisualEffectViewParticipating> containedView;                     //@synthesize containedView=_containedView - In the implementation block
@property (nonatomic,copy) NSArray * viewEffects;                                                         //@synthesize viewEffects=_viewEffects - In the implementation block
@property (nonatomic,copy) NSArray * filters;                                                             //@synthesize filters=_filters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)filters;
-(void)setFilters:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)willMoveToWindow:(id)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(UIView*<_UIVisualEffectViewParticipating>)containedView;
-(void)_monitoredView:(id)arg1 willMoveFromSuperview:(id)arg2 toSuperview:(id)arg3 ;
-(void)setContainedView:(UIView*<_UIVisualEffectViewParticipating>)arg1 ;
-(void)setPrimaryCaptureGroup:(_UIVisualEffectViewBackdropCaptureGroup *)arg1 ;
-(void)applyRequestedFilterEffects;
-(void)setSubviewMonitor:(id<_UIVisualEffectViewSubviewMonitoring>)arg1 ;
-(NSArray *)viewEffects;
-(void)setViewEffects:(NSArray *)arg1 ;
-(void)applyIdentityFilterEffects;
-(void)applyIdentityViewEffects;
-(void)applyRequestedViewEffects;
-(_UIVisualEffectViewBackdropCaptureGroup *)primaryCaptureGroup;
-(BOOL)disableGroupFiltering;
-(void)setDisableGroupFiltering:(BOOL)arg1 ;
-(id)_initialValueForLayer:(id)arg1 keyPath:(id)arg2 usePresentationValue:(BOOL)arg3 ;
-(id<_UIVisualEffectViewSubviewMonitoring>)subviewMonitor;
@end

