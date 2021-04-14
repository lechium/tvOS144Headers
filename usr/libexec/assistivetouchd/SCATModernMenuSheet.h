//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCATModernMenuItemDelegate-Protocol.h"

@class NSArray, NSString, SCATMenu, SCATModernMenuSheetCollectionViewController, SCATModernMenuViewController, SCATStaticElementProvider, UICollectionView, UICollectionViewLayout, UIViewController;

@interface SCATModernMenuSheet : NSObject <SCATModernMenuItemDelegate>
{
    NSArray *_menuItems;	// 8 = 0x8
    _Bool _shouldIncludeBackItem;	// 16 = 0x10
    SCATStaticElementProvider *_elementProvider;	// 24 = 0x18
    UIViewController *_viewController;	// 32 = 0x20
    UICollectionViewLayout *_collectionViewLayout;	// 40 = 0x28
    SCATMenu *_menu;	// 48 = 0x30
    UICollectionView *_collectionView;	// 56 = 0x38
}

+ (_Bool)isValidForElement:(id)arg1;	// IMP=0x00000001000a7948
- (void).cxx_destruct;	// IMP=0x00000001000a9c94
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) _Bool shouldIncludeBackItem; // @synthesize shouldIncludeBackItem=_shouldIncludeBackItem;
@property(retain, nonatomic) SCATMenu *menu; // @synthesize menu=_menu;
@property(retain, nonatomic) UICollectionViewLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (id)_capitalizedMenuTitle:(id)arg1;	// IMP=0x00000001000a9a90
- (_Bool)shouldUpdateMenuItem:(id)arg1;	// IMP=0x00000001000a9a88
- (void)menuItemWasActivated:(id)arg1;	// IMP=0x00000001000a9860
- (id)_scannerGroupsForMenuItems:(id)arg1;	// IMP=0x00000001000a9290
- (id)_filteredMenuItemsForGuidedAccessIfNeeded:(id)arg1;	// IMP=0x00000001000a917c
- (id)_fallbackImageForCustomActionMenuItem:(id)arg1 charactersInUse:(id)arg2;	// IMP=0x00000001000a8ef8
- (id)menuItemsForCustomActions:(id)arg1 activateBehavior:(unsigned long long)arg2;	// IMP=0x00000001000a8958
- (void)reload;	// IMP=0x00000001000a88cc
- (_Bool)isBackItemIdentifier:(id)arg1;	// IMP=0x00000001000a88b4
- (unsigned long long)currentPage;	// IMP=0x00000001000a8768
- (unsigned long long)numberOfItemsInFirstPage;	// IMP=0x00000001000a8760
- (unsigned long long)numberOfPagesRequired;	// IMP=0x00000001000a8670
- (void)invalidateMenuItems;	// IMP=0x00000001000a8660
- (id)itemWithIdentifier:(id)arg1;	// IMP=0x00000001000a84cc
@property(readonly, nonatomic) SCATModernMenuSheetCollectionViewController *scatCollectionViewController;
@property(readonly, retain, nonatomic) SCATStaticElementProvider *elementProvider; // @synthesize elementProvider=_elementProvider;
@property(readonly, nonatomic) SCATModernMenuViewController *menuViewController;
@property(retain, nonatomic) NSArray *menuItems;
- (Class)_menuItemClass;	// IMP=0x00000001000a7bc0
@property(readonly, copy) NSString *description;
- (void)_setupMenuSheet;	// IMP=0x00000001000a7a20
- (id)initWithMenu:(id)arg1;	// IMP=0x00000001000a799c
- (id)init;	// IMP=0x00000001000a7950
- (id)menuItemStruts;	// IMP=0x00000001000aa4b0
- (id)alternateTipElement;	// IMP=0x00000001000aa4a8
- (long long)preferredTipObject;	// IMP=0x00000001000aa4a0
- (_Bool)shouldIncludeTextLabels;	// IMP=0x00000001000aa44c
- (id)backTitle;	// IMP=0x00000001000aa40c
- (_Bool)shouldUseBackItemAsDoneItem;	// IMP=0x00000001000aa404
- (_Bool)delegatesScannerControl;	// IMP=0x00000001000aa3fc
- (unsigned long long)presentationMode;	// IMP=0x00000001000aa3f4
- (_Bool)shouldAllowDwellSelection;	// IMP=0x00000001000aa3ec
- (_Bool)shouldKeepScannerAwake;	// IMP=0x00000001000aa3e4
- (id)makeMenuItemsIfNeeded;	// IMP=0x00000001000aa3dc
- (struct CGRect)rectToClear;	// IMP=0x00000001000aa3c8
- (_Bool)allowsExitAction;	// IMP=0x00000001000aa3c0
- (_Bool)allowsBackAction;	// IMP=0x00000001000aa3b8
- (void)viewControllerViewWillDisappear:(_Bool)arg1;	// IMP=0x00000001000aa3b4
- (void)viewControllerViewWillAppear:(_Bool)arg1;	// IMP=0x00000001000aa3b0
- (void)didChangeOrientation;	// IMP=0x00000001000aa3ac
- (void)willUnfocusFromContext:(id)arg1;	// IMP=0x00000001000aa3a8
- (void)didFocusOnContext:(id)arg1 oldContext:(id)arg2;	// IMP=0x00000001000a9cf8
- (void)willFocusOnContext:(id)arg1;	// IMP=0x00000001000a9cf4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

