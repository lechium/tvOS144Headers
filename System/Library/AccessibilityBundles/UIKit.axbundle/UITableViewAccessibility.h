/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UITableViewAccessibility_super.h>

@interface UITableViewAccessibility : __UITableViewAccessibility_super

@property (assign,setter=_accessibilitySetShouldConsiderSwipeDeletionCommitted:,nonatomic) BOOL _accessibilityShouldConsiderSwipeDeletionCommitted; 
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(id)description;
-(void)dealloc;
-(void)reloadData;
-(void)insertRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2 ;
-(void)reloadRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2 ;
-(void)deleteRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2 ;
-(id)dequeueReusableCellWithIdentifier:(id)arg1 ;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(unsigned long long)accessibilityTraits;
-(id)accessibilityElementForRow:(unsigned long long)arg1 andColumn:(unsigned long long)arg2 ;
-(CGRect)accessibilityFrame;
-(BOOL)accessibilityPerformEscape;
-(void)reloadSections:(id)arg1 withRowAnimation:(long long)arg2 ;
-(void)insertSections:(id)arg1 withRowAnimation:(long long)arg2 ;
-(void)deleteSections:(id)arg1 withRowAnimation:(long long)arg2 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)dequeueReusableCellWithIdentifier:(id)arg1 forIndexPath:(id)arg2 ;
-(id)dequeueReusableHeaderFooterViewWithIdentifier:(id)arg1 ;
-(void)setCountString:(id)arg1 ;
-(void)setTableHeaderViewShouldAutoHide:(BOOL)arg1 ;
-(id)_accessibilitySortedElementsWithin;
-(unsigned long long)_accessibilityAutomationType;
-(BOOL)isAccessibilityOpaqueElementProvider;
-(BOOL)canBecomeFocused;
-(id)preferredFocusEnvironments;
-(id)preferredFocusedView;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)accessibilityRespondsToUserInteraction;
-(BOOL)_accessibilitySpeakThisShouldOnlyIncludeVisibleElements;
-(BOOL)_accessibilityIsScannerGroup;
-(id)_accessibilityScannerGroupElements;
-(id)_accessibilityViewChildrenWithOptions:(id)arg1 ;
-(id)_accessibilityGroupIdentifier;
-(id)_accessibilitySupplementaryHeaderViews;
-(id)_accessibilitySupplementaryFooterViews;
-(id)_accessibilitySubviews;
-(long long)accessibilityContainerType;
-(id)_accessibilityUserTestingChildren;
-(id)_accessibilityScrollStatus;
-(BOOL)_accessibilityCanPerformEscapeAction;
-(BOOL)_accessibilityScrollToFrame:(CGRect)arg1 forView:(id)arg2 ;
-(BOOL)shouldGroupAccessibilityChildren;
-(id)_accessibilityFirstVisibleItem;
-(id)_accessibilitySelectedChildren;
-(id)_accessibilityUserTestingVisibleCells;
-(id)_accessibilityUserTestingVisibleSections;
-(BOOL)_accessibilityShouldIncludeArrowKeyCommandsForDirectionalFocusMovement;
-(BOOL)_accessibilityDrawsFocusRingWhenChildrenFocused;
-(id)_accessibilitySortedElementsWithinWithOptions:(id)arg1 ;
-(void)_accessibilityOpaqueElementScrollCleanup;
-(BOOL)_accessibilityOpaqueElementScrollsContentIntoView;
-(id)_accessibilityOpaqueHeaderElementInDirection:(long long)arg1 childElement:(id)arg2 ;
-(id)_accessibilityHeaderElement;
-(BOOL)accessibilityScrollLeftPageSupported;
-(BOOL)accessibilityScrollRightPageSupported;
-(BOOL)_accessibilityKeyCommandsShouldOverrideKeyCommands;
-(BOOL)_accessibilityNativeFocusPreferredElementIsValid;
-(id)_accessibilityReusableViewForOpaqueElement:(id)arg1 ;
-(id)_accessibilityInternalData;
-(void)_accessibilityClearChildren;
-(id)accessibilityCellForRowAtIndexPath:(id)arg1 ;
-(BOOL)_accessibilityShouldDisableCellReuse;
-(id)_accessibilityFuzzyHitTest:(CGPoint*)arg1 withEvent:(id)arg2 ;
-(void)setReusableCellsEnabled:(BOOL)arg1 ;
-(long long)_axNumberOfSections;
-(id)indexPathsForRowsInRect:(CGRect)arg1 ;
-(id)_accessibilityUseOpaqueElements;
-(BOOL)_automationPrefersRealElements;
-(id)_axFirstLastOpaqueHeaderElementFromSection:(long long)arg1 options:(id)arg2 direction:(long long)arg3 ;
-(id)_axFirstLastOpaqueHeaderElementInDirection:(long long)arg1 options:(id)arg2 ;
-(id)_axOpaqueHeaderElementInDirection:(long long)arg1 withinElements:(id)arg2 startIndex:(unsigned long long)arg3 ;
-(id)_axOffScreenOpaqueHeaderElementInDirection:(long long)arg1 options:(id)arg2 childElement:(id)arg3 ;
-(BOOL)_accessibilityIsSearchTableVisible;
-(id)_accessibilitySearchResultsTableView;
-(id)_accessibilityFooterElement;
-(id)_axAttemptStoryboard:(id)arg1 viewType:(int)arg2 ;
-(id)_axAttemptCreationOfViewType:(int)arg1 identifier:(id)arg2 ;
-(void)_reuseTableViewSubview:(id)arg1 viewType:(int)arg2 ;
-(void)_accessibilityInitializeInternalData;
-(void)_axPostLayoutChange;
-(BOOL)_accessibilitySearchTableViewVisible;
-(BOOL)_accessibilitySearchControllerDimmingViewVisible;
-(BOOL)_accessibilityHasAccessibleOrContainerSubviewWithSubviewTree:(id)arg1 ;
-(id)accessibilityTableViewCellElementAtGlobalRow:(long long)arg1 ;
-(id)accessibilityTableViewSectionElementAtSection:(long long)arg1 isHeader:(BOOL)arg2 ;
-(id)_accessibilityTableViewCellElementForIndexPath:(id)arg1 ;
-(BOOL)_accessibilitySkipItemsInSectionList:(id)arg1 view:(id)arg2 ;
-(BOOL)_accessibilityCheckForAlreadyExistingCellElementForCell:(id)arg1 inItems:(id)arg2 ;
-(id)_accessibilityInternalDataRetrieveOnly;
-(id)_accessibilitySortedElementsWithinPreservingFloatingHeader:(id)arg1 sortedElements:(id)arg2 ;
-(id)accessibilityTableViewCellAccessibilityElementForTableViewCell:(id)arg1 ;
-(id)_delegateViewForHeaderInSection:(long long)arg1 ;
-(id)_delegateViewForFooterInSection:(long long)arg1 ;
-(void)_reorderPositionChangedForCell:(id)arg1 ;
-(long long)_accessibilitySwappedWithRowForInitialGlobalRow:(long long)arg1 oldGlobalRow:(long long)arg2 globalRow:(long long)arg3 ;
-(id)_accessibilityReorderMessageForNewIndexPath:(id)arg1 swappedWithRow:(long long)arg2 movingDown:(BOOL)arg3 ;
-(void)_endReorderingForCell:(id)arg1 wasCancelled:(BOOL)arg2 animated:(BOOL)arg3 ;
-(BOOL)_accessibilityShouldVerifyTableViewCellsAreVisibleByHitTesting;
-(id)_axVisibleHeadersAndFootersPriorToFirstVisibleCellSection:(long long)arg1 ;
-(id)_axVisibleHeadersAndFootersAfterLastVisibleCellSection:(long long)arg1 ;
-(void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)_accessibilityLastFocusedChild;
-(id)_axGetIndexGuide;
-(void)_axSetIndexGuide:(id)arg1 ;
-(void)_accessibilitySetUseOpaqueElements:(id)arg1 ;
-(BOOL)_accessibilityShouldConsiderSwipeDeletionCommitted;
-(void)_accessibilitySetShouldConsiderSwipeDeletionCommitted:(BOOL)arg1 ;
-(BOOL)_accessibilityHasAccessibleOrContainerSubview;
-(id)_accessibilityVisibleHeaderSections;
-(void)_setAccessibilitySearchTableViewVisible;
-(void)_setAccessibilitySearchTableViewHidden;
-(void)_setAccessibilitySearchControllerDimmingViewVisible;
-(void)_setAccessibilitySearchControllerDimmingViewHidden;
-(long long)_accessibilityDefaultTableViewCellScrollPosition;
-(void)accessibilityFindMockParentForTableViewCell:(id)arg1 ;
-(id)_accessibilityUIScrollViewScrollStatus;
-(BOOL)_axTableViewMightBeSidebar;
-(BOOL)_accessibilityIsInMasterSplitViewController;
-(void)_axSetupIndexGuide;
-(id)_axPreviousSelectableIndexPathForIndexPath:(id)arg1 ;
-(id)_axNextSelectableIndexPathForIndexPath:(id)arg1 ;
@end

