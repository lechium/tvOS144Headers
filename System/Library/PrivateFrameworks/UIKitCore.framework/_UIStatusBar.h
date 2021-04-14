/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIAccessibilityHUDGestureDelegate.h>

@protocol _UIStatusBarVisualProvider, _UIStatusBarActionable;
@class UIScreen, NSDictionary, UIColor, _UIStatusBarData, UIGestureRecognizer, NSArray, NSMutableDictionary, UIView, UIAccessibilityHUDGestureManager, _UIStatusBarDataAggregator, _UIStatusBarStyleAttributes, _UIStatusBarAction, NSString, NSSet;

@interface _UIStatusBar : UIView <UIGestureRecognizerDelegate, UIAccessibilityHUDGestureDelegate> {

	id<_UIStatusBarVisualProvider> _visualProvider;
	BOOL _needsLayoutUpdateForPartFrames;
	UIScreen* _targetScreen;
	NSDictionary* _visualProviderInfo;
	long long _style;
	UIColor* _foregroundColor;
	long long _mode;
	long long _orientation;
	_UIStatusBarData* _currentData;
	UIGestureRecognizer* _actionGestureRecognizer;
	NSArray* _enabledPartIdentifiers;
	NSMutableDictionary* _items;
	NSMutableDictionary* _displayItemStates;
	/*^block*/id _updateCompletionHandler;
	UIView* _foregroundView;
	id<_UIStatusBarActionable> _targetActionable;
	UIAccessibilityHUDGestureManager* _accessibilityHUDGestureManager;
	Class _visualProviderClass;
	NSDictionary* _regions;
	_UIStatusBarDataAggregator* _dataAggregator;
	_UIStatusBarData* _currentAggregatedData;
	_UIStatusBarStyleAttributes* _styleAttributes;
	_UIStatusBarAction* _action;
	CGRect _avoidanceFrame;

}

@property (nonatomic,retain) NSMutableDictionary * items;                                                                                         //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * displayItemStates;                                                                             //@synthesize displayItemStates=_displayItemStates - In the implementation block
@property (nonatomic,copy) id updateCompletionHandler;                                                                                            //@synthesize updateCompletionHandler=_updateCompletionHandler - In the implementation block
@property (nonatomic,retain) UIView * foregroundView;                                                                                             //@synthesize foregroundView=_foregroundView - In the implementation block
@property (assign,nonatomic,__weak) id<_UIStatusBarActionable> targetActionable;                                                                  //@synthesize targetActionable=_targetActionable - In the implementation block
@property (nonatomic,retain) UIAccessibilityHUDGestureManager * accessibilityHUDGestureManager;                                                   //@synthesize accessibilityHUDGestureManager=_accessibilityHUDGestureManager - In the implementation block
@property (setter=_setVisualProviderClassName:,getter=_visualProviderClassName,nonatomic,retain) NSString * visualProviderClassName; 
@property (setter=_setVisualProviderClass:,getter=_visualProviderClass,nonatomic,retain) Class visualProviderClass;                               //@synthesize visualProviderClass=_visualProviderClass - In the implementation block
@property (nonatomic,readonly) id<_UIStatusBarVisualProvider> visualProvider; 
@property (nonatomic,readonly) NSDictionary * regions;                                                                                            //@synthesize regions=_regions - In the implementation block
@property (nonatomic,readonly) _UIStatusBarDataAggregator * dataAggregator;                                                                       //@synthesize dataAggregator=_dataAggregator - In the implementation block
@property (nonatomic,readonly) _UIStatusBarData * currentAggregatedData;                                                                          //@synthesize currentAggregatedData=_currentAggregatedData - In the implementation block
@property (nonatomic,readonly) UIView * containerView; 
@property (nonatomic,readonly) unsigned animationContextId; 
@property (getter=areAnimationsEnabled,nonatomic,readonly) BOOL animationsEnabled; 
@property (nonatomic,retain) _UIStatusBarStyleAttributes * styleAttributes;                                                                       //@synthesize styleAttributes=_styleAttributes - In the implementation block
@property (nonatomic,retain) _UIStatusBarAction * action;                                                                                         //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) UIScreen * targetScreen;                                                                                             //@synthesize targetScreen=_targetScreen - In the implementation block
@property (nonatomic,retain) NSDictionary * visualProviderInfo;                                                                                   //@synthesize visualProviderInfo=_visualProviderInfo - In the implementation block
@property (assign,nonatomic) long long style;                                                                                                     //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) UIColor * foregroundColor;                                                                                             //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (assign,nonatomic) long long mode;                                                                                                      //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) long long orientation;                                                                                               //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,readonly) _UIStatusBarData * currentData;                                                                                    //@synthesize currentData=_currentData - In the implementation block
@property (nonatomic,readonly) NSSet * dependentDataEntryKeys; 
@property (nonatomic,copy) _UIStatusBarData * overlayData; 
@property (nonatomic,readonly) UIGestureRecognizer * actionGestureRecognizer;                                                                     //@synthesize actionGestureRecognizer=_actionGestureRecognizer - In the implementation block
@property (nonatomic,copy) NSArray * enabledPartIdentifiers;                                                                                      //@synthesize enabledPartIdentifiers=_enabledPartIdentifiers - In the implementation block
@property (assign,nonatomic) CGRect avoidanceFrame;                                                                                               //@synthesize avoidanceFrame=_avoidanceFrame - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)stringForStatusBarStyle:(long long)arg1 ;
+(id)sensorActivityIndicator;
+(CGSize)intrinsicContentSizeForTargetScreen:(id)arg1 orientation:(long long)arg2 onLockScreen:(BOOL)arg3 isAzulBLinked:(BOOL)arg4 ;
+(void)setSensorActivityIndicator:(id)arg1 ;
+(id)sensorActivityIndicatorPartIdentifier;
+(CGSize)intrinsicContentSizeForTargetScreen:(id)arg1 orientation:(long long)arg2 onLockScreen:(BOOL)arg3 ;
-(NSString *)description;
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(NSMutableDictionary *)items;
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
-(_UIStatusBarAction *)action;
-(void)setAction:(_UIStatusBarAction *)arg1 ;
-(UIColor *)foregroundColor;
-(void)setForegroundColor:(UIColor *)arg1 ;
-(NSDictionary *)regions;
-(void)setItems:(NSMutableDictionary *)arg1 ;
-(_UIStatusBarStyleAttributes *)styleAttributes;
-(void)setStyleAttributes:(_UIStatusBarStyleAttributes *)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)updateWithData:(id)arg1 ;
-(void)layoutSubviews;
-(id)itemWithIdentifier:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(BOOL)areAnimationsEnabled;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIView *)containerView;
-(void)updateConstraints;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(id)updateCompletionHandler;
-(void)setUpdateCompletionHandler:(id)arg1 ;
-(UIView *)foregroundView;
-(void)_prepareVisualProviderIfNeeded;
-(void)_updateDisplayedItemsWithData:(id)arg1 styleAttributes:(id)arg2 extraAnimations:(id)arg3 ;
-(_UIStatusBarData *)currentData;
-(id<_UIStatusBarVisualProvider>)visualProvider;
-(id)_traitCollectionForChildEnvironment:(id)arg1 ;
-(id)regionWithIdentifier:(id)arg1 ;
-(void)_accessibilityHUDGestureManager:(id)arg1 showHUDItem:(id)arg2 ;
-(void)_dismissAccessibilityHUDForGestureManager:(id)arg1 ;
-(BOOL)_accessibilityHUDGestureManager:(id)arg1 shouldBeginAtPoint:(CGPoint)arg2 ;
-(BOOL)_accessibilityHUDGestureManager:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)_accessibilityHUDGestureManager:(id)arg1 shouldTerminateHUDGestureForOtherGestureRecognizer:(id)arg2 ;
-(id)_accessibilityHUDGestureManager:(id)arg1 HUDItemForPoint:(CGPoint)arg2 ;
-(void)_accessibilityHUDGestureManager:(id)arg1 gestureLiftedAtPoint:(CGPoint)arg2 ;
-(BOOL)_forceLayoutEngineSolutionInRationalEdges;
-(CGRect)avoidanceFrame;
-(void)setAvoidanceFrame:(CGRect)arg1 ;
-(void)setEnabledPartIdentifiers:(NSArray *)arg1 ;
-(void)resizeSubviewsWithOldSize:(CGSize)arg1 ;
-(_UIStatusBarData *)currentAggregatedData;
-(void)updateWithAnimations:(id)arg1 ;
-(id)styleAttributesForStyle:(long long)arg1 ;
-(id)displayItemIdentifiersInRegionsWithIdentifiers:(id)arg1 ;
-(CGRect)frameForDisplayItemWithIdentifier:(id)arg1 ;
-(CGRect)frameForPartWithIdentifier:(id)arg1 includeInternalItems:(BOOL)arg2 ;
-(_UIStatusBarDataAggregator *)dataAggregator;
-(id)displayItemWithIdentifier:(id)arg1 ;
-(id)stateForDisplayItemWithIdentifier:(id)arg1 ;
-(void)setDisplayItemStates:(NSMutableDictionary *)arg1 ;
-(void)_updateWithAggregatedData:(id)arg1 ;
-(void)statusBarGesture:(id)arg1 ;
-(void)_setVisualProviderClass:(Class)arg1 ;
-(Class)_visualProviderClass;
-(id)_effectiveTargetScreen;
-(NSDictionary *)visualProviderInfo;
-(void)setForegroundView:(UIView *)arg1 ;
-(void)_updateStyleAttributes;
-(void)_performWithInheritedAnimation:(/*^block*/id)arg1 ;
-(long long)_effectiveStyleFromStyle:(long long)arg1 ;
-(void)_updateWithData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(_UIStatusBarData *)overlayData;
-(void)setOverlayData:(_UIStatusBarData *)arg1 ;
-(void)_prepareAnimations:(id)arg1 ;
-(void)_performAnimations:(id)arg1 ;
-(void)_fixupDisplayItemAttributes;
-(void)_delayUpdatesWithKeys:(id)arg1 fromAnimation:(id)arg2 ;
-(void)_updateRegionItems;
-(void)_rearrangeOverflowedItems;
-(CGRect)_frameForActionable:(id)arg1 actionInsets:(UIEdgeInsets)arg2 ;
-(BOOL)_gestureRecognizer:(id)arg1 touchInsideActionable:(id)arg2 ;
-(BOOL)_gestureRecognizer:(id)arg1 pressInsideActionable:(id)arg2 ;
-(CGRect)_frameForActionable:(id)arg1 ;
-(CGRect)_pressFrameForActionable:(id)arg1 ;
-(BOOL)_gestureRecognizer:(id)arg1 isInsideActionable:(id)arg2 ;
-(id)_regionsForPartWithIdentifier:(id)arg1 includeInternalItems:(BOOL)arg2 ;
-(id)_actionablesForPartWithIdentifier:(id)arg1 includeInternalItems:(BOOL)arg2 onlyVisible:(BOOL)arg3 ;
-(id)_itemWithIdentifier:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(id)_statusBarWindowForAccessibilityHUD;
-(void)_setVisualProviderClassName:(id)arg1 ;
-(id)_visualProviderClassName;
-(void)resetVisualProvider;
-(void)setAction:(id)arg1 forPartWithIdentifier:(id)arg2 ;
-(id)actionForPartWithIdentifier:(id)arg1 ;
-(void)setOffset:(UIOffset)arg1 forPartWithIdentifier:(id)arg2 ;
-(UIOffset)offsetForPartWithIdentifier:(id)arg1 ;
-(void)setAlpha:(double)arg1 forPartWithIdentifier:(id)arg2 ;
-(double)alphaForPartWithIdentifier:(id)arg1 ;
-(void)setStyle:(long long)arg1 forPartWithIdentifier:(id)arg2 ;
-(long long)styleForPartWithIdentifier:(id)arg1 ;
-(CGRect)frameForPartWithIdentifier:(id)arg1 ;
-(NSSet *)dependentDataEntryKeys;
-(unsigned)animationContextId;
-(id)itemsDependingOnKeys:(id)arg1 ;
-(id)itemIdentifiersInRegionsWithIdentifiers:(id)arg1 ;
-(id)dataEntryKeysForItemsWithIdentifiers:(id)arg1 ;
-(UIScreen *)targetScreen;
-(void)setTargetScreen:(UIScreen *)arg1 ;
-(void)setVisualProviderInfo:(NSDictionary *)arg1 ;
-(UIGestureRecognizer *)actionGestureRecognizer;
-(NSArray *)enabledPartIdentifiers;
-(NSMutableDictionary *)displayItemStates;
-(id<_UIStatusBarActionable>)targetActionable;
-(void)setTargetActionable:(id<_UIStatusBarActionable>)arg1 ;
-(UIAccessibilityHUDGestureManager *)accessibilityHUDGestureManager;
-(void)setAccessibilityHUDGestureManager:(UIAccessibilityHUDGestureManager *)arg1 ;
@end

