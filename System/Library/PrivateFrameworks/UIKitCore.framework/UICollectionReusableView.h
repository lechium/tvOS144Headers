/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIEditable.h>

@class UICollectionViewLayoutAttributes, UICollectionView, NSString;

@interface UICollectionReusableView : UIView <UIEditable> {

	UICollectionViewLayoutAttributes* _layoutAttributes;
	UICollectionView* _collectionView;
	long long _updateAnimationCount;
	UIEdgeInsets _defaultLayoutMargins;
	SCD_Struct_UI14 _reusableViewFlags;
	BOOL _preferredAttributesValid;
	NSString* _reuseIdentifier;

}

@property (assign,setter=tv_setBelongsToOldIndexPath:,nonatomic) BOOL tv_belongsToOldIndexPath; 
@property (assign,setter=tv_setDisplayed:,getter=tv_isDisplayed,nonatomic) BOOL tv_displayed; 
@property (assign,setter=tv_setFocused:,getter=tv_isFocused,nonatomic) BOOL tv_focused; 
@property (setter=_setLayoutAttributes:,getter=_layoutAttributes,nonatomic,copy) UICollectionViewLayoutAttributes * layoutAttributes; 
@property (setter=_setReuseIdentifier:,nonatomic,copy) NSString * reuseIdentifier;                                                                 //@synthesize reuseIdentifier=_reuseIdentifier - In the implementation block
@property (assign,setter=_setCollectionView:,getter=_collectionView,nonatomic,__weak) UICollectionView * collectionView; 
@property (getter=_isInUpdateAnimation,nonatomic,readonly) BOOL inUpdateAnimation; 
@property (assign,setter=_setShouldConstrainWidth:,getter=_shouldConstrainWidth,nonatomic) BOOL shouldConstrainWidth; 
@property (assign,setter=_setShouldConstrainHeight:,getter=_shouldConstrainHeight,nonatomic) BOOL shouldConstrainHeight; 
@property (assign,setter=_setIsBeingReused:,getter=_isBeingReused,nonatomic) BOOL isBeingReused; 
@property (assign,getter=_arePreferredAttributesValid,nonatomic) BOOL preferredAttributesValid;                                                    //@synthesize preferredAttributesValid=_preferredAttributesValid - In the implementation block
@property (nonatomic,readonly) BOOL canBeEdited; 
@property (assign,getter=isEditing,nonatomic) BOOL editing; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)registerSupplementaryViewClassesForKind:(id)arg1 withCollectionView:(id)arg2 ;
+(void)_gkAdjustConstraintMargins:(id)arg1 leading:(double)arg2 trailing:(double)arg3 ;
+(id)_gkStandardConstraintMetricsForIdiom:(long long)arg1 ;
+(id)_gkStandardConstraintMetricsForIdiom:(long long)arg1 withOverrides:(id)arg2 ;
+(id)_gkSetupTwoLineLayoutWithSuperview:(id)arg1 icon:(id)arg2 upperLabel:(id)arg3 lowerLabel:(id)arg4 leadingBetween:(double)arg5 fontTextStyle:(id)arg6 metricOverrides:(id)arg7 ;
+(id)_gkSetupThreeLineLayoutWithSuperview:(id)arg1 icon:(id)arg2 upperLine:(id)arg3 middleLine:(id)arg4 lowerLine:(id)arg5 metricOverrides:(id)arg6 ;
+(void)_gkSetupSelectableTwoLineLayoutWithCell:(id)arg1 icon:(id)arg2 selectionView:(id)arg3 upperLine:(id)arg4 lowerLine:(id)arg5 metricOverrides:(id)arg6 ;
+(void)_gkSetupSelectableThreeLineLayoutWithCell:(id)arg1 icon:(id)arg2 selectionView:(id)arg3 upperLine:(id)arg4 middleLine:(id)arg5 lowerLine:(id)arg6 metricOverrides:(id)arg7 ;
-(void)_gkSetLeadingGuideConstraint:(id)arg1 trailingGuideConstraint:(id)arg2 ;
-(id)_gkNewStandardTitleLabel;
-(id)_gkNewStandardInfoLabel;
-(id)_gkNewStandardImageView;
-(void)tv_setDisplayed:(BOOL)arg1 ;
-(void)tv_setBelongsToOldIndexPath:(BOOL)arg1 ;
-(BOOL)tv_belongsToOldIndexPath;
-(BOOL)tv_isDisplayed;
-(void)tv_setFocused:(BOOL)arg1 ;
-(BOOL)tv_isFocused;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)prepareForReuse;
-(BOOL)isEditing;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setEditing:(BOOL)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(NSString *)reuseIdentifier;
-(id)_collectionView;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(void)didMoveToSuperview;
-(BOOL)_disableRasterizeInAnimations;
-(BOOL)canBeEdited;
-(id)_layoutAttributes;
-(void)_setMaskView:(id)arg1 ;
-(void)_setCollectionView:(id)arg1 ;
-(void)_invalidatePreferredAttributes;
-(void)_setShouldConstrainWidth:(BOOL)arg1 ;
-(void)_setShouldConstrainHeight:(BOOL)arg1 ;
-(BOOL)_isStyledAsHeaderFromLayoutAttributes:(id)arg1 ;
-(void)_setLayoutAttributes:(id)arg1 ;
-(id)_preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(UIEdgeInsets)_concreteDefaultLayoutMargins;
-(BOOL)_isFocusableWhenStyledAsHeader;
-(void)willTransitionFromLayout:(id)arg1 toLayout:(id)arg2 ;
-(void)didTransitionFromLayout:(id)arg1 toLayout:(id)arg2 ;
-(void)_setReuseIdentifier:(id)arg1 ;
-(BOOL)_isInUpdateAnimation;
-(BOOL)_arePreferredAttributesValid;
-(BOOL)_wasDequeued;
-(void)_markAsDequeued;
-(void)_addUpdateAnimation;
-(void)_setBaseLayoutAttributes:(id)arg1 ;
-(void)_clearUpdateAnimation;
-(BOOL)_isBeingReused;
-(void)_setIsBeingReused:(BOOL)arg1 ;
-(void)_performBlocksForReuse;
-(void)_updateMaskingUsingAttributes:(id)arg1 ;
-(void)_updateMaskViewUsingAttributes:(id)arg1 previousRemoveMaskAfterAnimation:(BOOL)arg2 ;
-(void)_updateDefaultLayoutMarginsUsingAttributes:(id)arg1 ;
-(BOOL)_appliesLayoutAttributesMaskingToReusableView;
-(void)_addBackdropViewForMaskingIfNeeded;
-(void)_removeExistingBackdropViewForMasking;
-(BOOL)_shouldConstrainWidth;
-(BOOL)_shouldConstrainHeight;
-(void)_performBlockWhenReused:(/*^block*/id)arg1 ;
-(void)setPreferredAttributesValid:(BOOL)arg1 ;
@end

