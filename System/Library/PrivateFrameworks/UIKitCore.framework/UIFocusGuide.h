/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:21 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UILayoutGuide.h>
#import <UIKit/UIFocusItem.h>
#import <UIKitCore/_UILegacyFocusRegion.h>
#import <UIKitCore/_UIFocusRegionContainer.h>
#import <UIKitCore/_UIFocusGuideRegionDelegate.h>

@class NSArray, UIView, NSString;

@interface UIFocusGuide : UILayoutGuide <UIFocusItem, _UILegacyFocusRegion, _UIFocusRegionContainer, _UIFocusGuideRegionDelegate> {

	BOOL _didSetPreferredFocusedEnvironments;
	BOOL _enabled;
	BOOL _automaticallyPreferOwningView;
	BOOL _automaticallyDisableWhenIntersectingFocus;
	NSArray* _preferredFocusEnvironments;

}

@property (assign,setter=_setAutomaticallyPreferOwningView:,getter=_automaticallyPreferOwningView,nonatomic) BOOL automaticallyPreferOwningView;                                                  //@synthesize automaticallyPreferOwningView=_automaticallyPreferOwningView - In the implementation block
@property (assign,setter=_setAutomaticallyDisableWhenIntersectingFocus:,getter=_automaticallyDisableWhenIntersectingFocus,nonatomic) BOOL automaticallyDisableWhenIntersectingFocus;              //@synthesize automaticallyDisableWhenIntersectingFocus=_automaticallyDisableWhenIntersectingFocus - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                                                                                                                       //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,copy) NSArray * preferredFocusEnvironments;                                                                                                                                  //@synthesize preferredFocusEnvironments=_preferredFocusEnvironments - In the implementation block
@property (assign,nonatomic,__weak) UIView * preferredFocusedView; 
@property (nonatomic,readonly) BOOL canBecomeFocused; 
@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,__weak,readonly) id<UIFocusEnvironment> parentFocusEnvironment; 
@property (nonatomic,readonly) id<UIFocusItemContainer> focusItemContainer; 
@property (nonatomic,copy,readonly) NSString * focusGroupIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL areChildrenFocused; 
@property (getter=_isEligibleForFocusInteraction,nonatomic,readonly) BOOL eligibleForFocusInteraction; 
@property (getter=_preferredFocusMovementStyle,nonatomic,readonly) long long preferredFocusMovementStyle; 
@property (getter=_linearFocusMovementSequences,nonatomic,copy,readonly) NSArray * linearFocusMovementSequences; 
@property (nonatomic,readonly) id<UIFocusItem> focusItemForSorting; 
+(id)smu_focusContainerGuide;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(CGRect)frame;
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(void)setNeedsFocusUpdate;
-(NSArray *)preferredFocusEnvironments;
-(UIView *)preferredFocusedView;
-(void)updateFocusIfNeeded;
-(id<UIFocusEnvironment>)parentFocusEnvironment;
-(id<UIFocusItemContainer>)focusItemContainer;
-(void)setPreferredFocusEnvironments:(NSArray *)arg1 ;
-(BOOL)_isEligibleForFocusInteraction;
-(void)_searchForFocusRegionsInContext:(id)arg1 ;
-(id)_regionForFocusedItem:(id)arg1 inCoordinateSpace:(id)arg2 ;
-(void)_setAutomaticallyDisableWhenIntersectingFocus:(BOOL)arg1 ;
-(id)_childFocusRegionsInRect:(CGRect)arg1 inCoordinateSpace:(id)arg2 ;
-(id)_preferredFocusRegionCoordinateSpace;
-(id)_focusRegionFocusSystem;
-(id)_fulfillPromisedFocusRegion;
-(CGRect)_focusRegionFrame;
-(BOOL)_legacy_isEligibleForFocusInteraction;
-(BOOL)_isPromiseFocusRegion;
-(BOOL)_isTransparentFocusRegion;
-(id)_focusRegionView;
-(id)_focusRegionGuides;
-(id)_focusDebugOverlayParentView;
-(void)setPreferredFocusedView:(UIView *)arg1 ;
-(double)_focusPriority;
-(void)_setAutomaticallyPreferOwningView:(BOOL)arg1 ;
-(id)_encodablePreferredFocusEnvironments;
-(BOOL)_automaticallyPreferOwningView;
-(BOOL)_isUnoccludable;
-(id)focusGuideRegion:(id)arg1 preferredFocusEnvironmentsForMovementRequest:(id)arg2 ;
-(void)focusGuideRegion:(id)arg1 willParticipateAsDestinationRegionInFocusUpdate:(id)arg2 ;
-(id<UIFocusItem>)focusItemForSorting;
-(void)_didUpdateFocusToPreferredFocusedView;
-(BOOL)_uili_isFocusGuide;
-(BOOL)_automaticallyDisableWhenIntersectingFocus;
@end

