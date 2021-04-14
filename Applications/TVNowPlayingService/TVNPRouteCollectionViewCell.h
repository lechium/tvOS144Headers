//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVNPBaseRouteCollectionViewCell.h"

@class TVNPRoute;
@protocol TVNPRouteCollectionViewCellDelegate;

@interface TVNPRouteCollectionViewCell : TVNPBaseRouteCollectionViewCell
{
    _Bool _disableFocus;	// 8 = 0x8
    TVNPRoute *_route;	// 16 = 0x10
    id <TVNPRouteCollectionViewCellDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100009570
@property(nonatomic) __weak id <TVNPRouteCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool disableFocus; // @synthesize disableFocus=_disableFocus;
@property(retain, nonatomic) TVNPRoute *route; // @synthesize route=_route;
- (void)_updateMultiSelectionState;	// IMP=0x00000001000094c8
- (void)_updateVolumeState;	// IMP=0x000000010000941c
- (void)_updateMusicBarState;	// IMP=0x00000001000092c4
- (void)accessoryViewSelected;	// IMP=0x000000010000927c
- (void)routeViewSelected;	// IMP=0x0000000100009234
- (void)volumeSliderValueChanged:(id)arg1;	// IMP=0x00000001000091c4
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100008f40
- (_Bool)canBecomeFocused;	// IMP=0x0000000100008f20
- (void)prepareForReuse;	// IMP=0x0000000100008be0
- (void)dealloc;	// IMP=0x0000000100008b90

@end

