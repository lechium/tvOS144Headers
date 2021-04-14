/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:03 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIKit-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>

@class UICollectionViewCell, NSIndexPath;

@interface UICollectionViewCellAccessibilityElement : UIAccessibilityElement {

	UICollectionViewCell* _cell;
	BOOL _usingRealCell;
	NSIndexPath* _indexPath;

}

@property (nonatomic,retain) UICollectionViewCell * cell;              //@synthesize cell=_cell - In the implementation block
@property (nonatomic,retain) NSIndexPath * indexPath;                  //@synthesize indexPath=_indexPath - In the implementation block
-(void)dealloc;
-(NSIndexPath *)indexPath;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(id)accessibilityValue;
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(id)accessibilityLanguage;
-(unsigned long long)accessibilityTraits;
-(NSRange)accessibilityRowRange;
-(id)accessibilityHint;
-(CGPoint)accessibilityActivationPoint;
-(CGRect)accessibilityFrame;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(NSRange)_accessibilitySelectedTextRange;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
-(id)accessibilityIdentifier;
-(void)setCell:(UICollectionViewCell *)arg1 ;
-(UICollectionViewCell *)cell;
-(id)_accessibilityTextOperations;
-(id)_accessibilityTextViewTextOperationResponder;
-(BOOL)_accessibilitySetNativeFocus;
-(unsigned long long)_accessibilityAutomationType;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)accessibilityRespondsToUserInteraction;
-(BOOL)_accessibilityIsSpeakThisElement;
-(BOOL)_accessibilityIsScannerGroup;
-(id)_accessibilityUserTestingChildren;
-(BOOL)accessibilityScrollToVisibleWithChild:(id)arg1 ;
-(BOOL)_accessibilityShouldAttemptScrollToFrameOnParentView;
-(BOOL)shouldGroupAccessibilityChildren;
-(BOOL)_accessibilitySupportsActivateAction;
-(BOOL)accessibilityActivate;
-(id)_accessibilityUserTestingProxyView;
-(id)_accessibilityUserTestingVisibleAncestor;
-(id)_accessibilityDataDetectorScheme:(CGPoint)arg1 ;
-(BOOL)_accessibilityHasNativeFocus;
-(BOOL)_accessibilityCanBecomeNativeFocused;
-(BOOL)_accessibilityViewHierarchyHasNativeFocus;
-(BOOL)_accessibilityHasTextOperations;
-(BOOL)_accessibilityShouldIncludeRowRangeInElementDescription;
-(BOOL)_accessibilityIsAwayAlertElement;
-(BOOL)_accessibilityBackingElementIsValid;
-(long long)_accessibilityScannerActivateBehavior;
-(BOOL)_accessibilityImplementsDefaultRowRange;
-(void)_accessibilityCopy;
-(void)_accessibilityCut;
-(void)_accessibilityPaste;
-(void)_accessibilitySelectAll;
-(void)_accessibilitySelect;
-(void)_accessibilityUndo;
-(void)_accessibilityRedo;
-(id)_accessibilitySemanticContextForElement:(id)arg1 ;
-(void)accessibilityElementDidLoseFocus;
-(void)accessibilityElementDidBecomeFocused;
-(id)_accessibilityCollectionViewCellContentSubviews;
-(BOOL)_accessibilityUserTestingIsDefaultButton;
-(BOOL)_accessibilityUserTestingIsCancelButton;
-(BOOL)_accessibilityUserTestingIsDestructiveButton;
-(BOOL)_accessibilityUserTestingIsPreferredButton;
-(BOOL)_accessibilityIsOutsideParentBounds;
-(id)realCell;
@end

