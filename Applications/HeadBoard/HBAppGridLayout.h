//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCompositionalLayout.h>

@class HBMainAppGridLayoutSolver, NSArray, NSIndexPath, NSIndexSet;

@interface HBAppGridLayout : UICollectionViewCompositionalLayout
{
    _Bool _dockMode;	// 8 = 0x8
    _Bool _appGridHidden;	// 9 = 0x9
    long long _topShelfContentStyle;	// 16 = 0x10
    NSIndexPath *_appGridEditingIndexPath;	// 24 = 0x18
    HBMainAppGridLayoutSolver *_mainLayoutSolver;	// 32 = 0x20
    NSIndexSet *_updatingItemIndexes;	// 40 = 0x28
}

+ (id)layoutAttributesNearPosition:(struct CGPoint)arg1 inLayoutAttributes:(id)arg2;	// IMP=0x000000010009a4c8
+ (Class)layoutAttributesClass;	// IMP=0x00000001000980ec
+ (id)makeFolderLayout;	// IMP=0x0000000100097c10
+ (id)makeMainLayout;	// IMP=0x0000000100097878
- (void).cxx_destruct;	// IMP=0x000000010009b828
@property(copy, nonatomic) NSIndexSet *updatingItemIndexes; // @synthesize updatingItemIndexes=_updatingItemIndexes;
@property(readonly, nonatomic) HBMainAppGridLayoutSolver *mainLayoutSolver; // @synthesize mainLayoutSolver=_mainLayoutSolver;
@property(copy, nonatomic) NSIndexPath *appGridEditingIndexPath; // @synthesize appGridEditingIndexPath=_appGridEditingIndexPath;
@property(nonatomic, getter=isAppGridHidden) _Bool appGridHidden; // @synthesize appGridHidden=_appGridHidden;
@property(nonatomic) long long topShelfContentStyle; // @synthesize topShelfContentStyle=_topShelfContentStyle;
@property(readonly, nonatomic) _Bool dockMode; // @synthesize dockMode=_dockMode;
- (id)_delegateRespondingToHoverOverlayRect;	// IMP=0x000000010009b740
@property(readonly, nonatomic) unsigned long long indexOfLastRow;
@property(readonly, nonatomic) unsigned long long numberOfRows;
- (unsigned long long)colFromIndexPath:(id)arg1;	// IMP=0x000000010009b5d0
- (unsigned long long)rowFromIndexPath:(id)arg1;	// IMP=0x000000010009b58c
- (id)_layoutAttributesForCellsInRowNearPosition:(struct CGPoint)arg1 positionContainedInRow:(_Bool *)arg2 constrainToHoverRect:(_Bool)arg3;	// IMP=0x000000010009b140
- (struct CGRect)_searchRectForConstrainToHoverRect:(_Bool)arg1;	// IMP=0x000000010009b044
- (id)_layoutAttributesForCellsInRect:(struct CGRect)arg1;	// IMP=0x000000010009ae88
- (id)indexPathInRowNearestPosition:(struct CGPoint)arg1 constrainToHoverRect:(_Bool)arg2;	// IMP=0x000000010009addc
- (id)indexPathInRowNearestPosition:(struct CGPoint)arg1;	// IMP=0x000000010009adcc
- (id)indexPathNearPosition:(struct CGPoint)arg1 constrainToHoverRect:(_Bool)arg2;	// IMP=0x000000010009abb8
- (id)indexPathNearPosition:(struct CGPoint)arg1;	// IMP=0x000000010009aba8
- (id)indexPathAdjacentToItemsNearPosition:(struct CGPoint)arg1 fromIndexPath:(id)arg2 constrainToHoverRect:(_Bool)arg3;	// IMP=0x000000010009a6b0
- (id)indexPathAdjacentToItemsNearPosition:(struct CGPoint)arg1 fromIndexPath:(id)arg2;	// IMP=0x000000010009a6a0
- (id)indexPathInDirection:(long long)arg1 fromIndexPath:(id)arg2;	// IMP=0x000000010009a310
- (_Bool)isIndexPathInDock:(id)arg1;	// IMP=0x000000010009a288
@property(readonly, nonatomic) NSIndexPath *firstIndexPathOutOfDock;
@property(readonly, nonatomic) NSArray *indexPathsInDock;
@property(readonly, nonatomic) unsigned long long numberOfColumns;
- (void)_updateSceneSettingsForAppGridHidden:(_Bool)arg1;	// IMP=0x0000000100099f94
- (id)_dockBackgroundLayoutAttributes;	// IMP=0x0000000100099e50
- (id)_topShelfContentLayoutAttributes;	// IMP=0x0000000100099d74
- (id)_commonAccessoryViewIndexPath;	// IMP=0x0000000100099d58
- (void)_updateInvalidationContext:(id)arg1 forLayoutChanges:(unsigned long long)arg2;	// IMP=0x0000000100099bb4
- (_Bool)_invalidateLayoutForLayoutChanges:(unsigned long long)arg1;	// IMP=0x0000000100099b14
- (unsigned long long)_focusStateForIndexPath:(id)arg1;	// IMP=0x00000001000999f8
@property(nonatomic, getter=isAppGridEditing) _Bool appGridEditing;
- (void)setAppGridHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100099508
- (void)invalidateLayoutWithNextFocusedIndexPath:(id)arg1 animationCoordinator:(id)arg2;	// IMP=0x0000000100099314
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000001000990f8
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000100099038
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x0000000100098ef0
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x0000000100098a84
- (void)prepareLayout;	// IMP=0x0000000100098960
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;	// IMP=0x0000000100098838
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;	// IMP=0x00000001000987c0
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;	// IMP=0x00000001000986e4
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;	// IMP=0x0000000100098608
- (id)finalLayoutAttributesForDisappearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x000000010009855c
- (id)initialLayoutAttributesForAppearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000001000984b0
- (void)finalizeCollectionViewUpdates;	// IMP=0x000000010009845c
- (void)prepareForCollectionViewUpdates:(id)arg1;	// IMP=0x0000000100098214
- (struct CGSize)collectionViewContentSize;	// IMP=0x00000001000980f8
- (_Bool)_shouldAdjustTargetContentOffsetToValidateContentExtents;	// IMP=0x00000001000980e4

@end
