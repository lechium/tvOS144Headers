//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCATModernMenuGestureFreehandSheetBase.h"

#import "SCATMultipleMenuItemsElementDelegate-Protocol.h"

@class NSString, SCATModernMenuGestureFreehandItem, SCATStaticElementProvider;

@interface SCATModernMenuGestureFreehandRotateSheet : SCATModernMenuGestureFreehandSheetBase <SCATMultipleMenuItemsElementDelegate>
{
    SCATStaticElementProvider *_customElementProvider;	// 16 = 0x10
    SCATModernMenuGestureFreehandItem *_rotateCCWItem;	// 24 = 0x18
    SCATModernMenuGestureFreehandItem *_rotateCWItem;	// 32 = 0x20
    SCATModernMenuGestureFreehandItem *_rotate90Item;	// 40 = 0x28
    SCATModernMenuGestureFreehandItem *_rotate90CCWItem;	// 48 = 0x30
    SCATModernMenuGestureFreehandItem *_rotate90CWItem;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000100031dcc
@property(retain, nonatomic) SCATModernMenuGestureFreehandItem *rotate90CWItem; // @synthesize rotate90CWItem=_rotate90CWItem;
@property(retain, nonatomic) SCATModernMenuGestureFreehandItem *rotate90CCWItem; // @synthesize rotate90CCWItem=_rotate90CCWItem;
@property(retain, nonatomic) SCATModernMenuGestureFreehandItem *rotate90Item; // @synthesize rotate90Item=_rotate90Item;
@property(retain, nonatomic) SCATModernMenuGestureFreehandItem *rotateCWItem; // @synthesize rotateCWItem=_rotateCWItem;
@property(retain, nonatomic) SCATModernMenuGestureFreehandItem *rotateCCWItem; // @synthesize rotateCCWItem=_rotateCCWItem;
- (id)menuItemStruts;	// IMP=0x0000000100031c68
- (_Bool)shouldUpdateItemsOnOrientationChange;	// IMP=0x0000000100031c60
- (void)didActivateMultipleMenuItemsElement:(id)arg1;	// IMP=0x0000000100031ae4
- (void)multipleMenuItemsElement:(id)arg1 didBecomeHighlighted:(_Bool)arg2;	// IMP=0x00000001000319c0
- (void)menuItemWasActivated:(id)arg1;	// IMP=0x0000000100031708
- (void)menuItem:(id)arg1 didBecomeFocused:(_Bool)arg2;	// IMP=0x0000000100031560
- (id)elementProvider;	// IMP=0x0000000100031024
- (id)makeMenuItemsIfNeeded;	// IMP=0x0000000100030768

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

