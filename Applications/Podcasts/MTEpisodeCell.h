//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "MTEpisodeCellProtocol-Protocol.h"
#import "MTEpisodeLockupDelegate-Protocol.h"

@class MTColorTheme, MTEpisode, MTEpisodeActionController, MTEpisodeLockup, NSString;
@protocol MTEpisodeCellDelegate;

@interface MTEpisodeCell : UITableViewCell <MTEpisodeLockupDelegate, MTEpisodeCellProtocol>
{
    id <MTEpisodeCellDelegate> _delegate;	// 8 = 0x8
    unsigned long long _explicitTreatment;	// 16 = 0x10
    MTEpisodeLockup *_episodeLockup;	// 24 = 0x18
}

+ (double)maximumContentWidthForStyle:(unsigned long long)arg1;	// IMP=0x000000010008fe4c
+ (struct CGSize)artworkSizeForStyle:(unsigned long long)arg1;	// IMP=0x000000010008fe38
+ (double)estimatedHeightForWidth:(double)arg1 style:(unsigned long long)arg2;	// IMP=0x000000010008fe24
+ (double)estimatedHeightForWidth:(double)arg1 showsArtwork:(_Bool)arg2;	// IMP=0x000000010008fddc
+ (unsigned long long)styleForWidth:(double)arg1 showsArtwork:(_Bool)arg2;	// IMP=0x000000010008fdc8
- (void).cxx_destruct;	// IMP=0x0000000100090b78
@property(retain, nonatomic) MTEpisodeLockup *episodeLockup; // @synthesize episodeLockup=_episodeLockup;
@property(nonatomic) unsigned long long explicitTreatment; // @synthesize explicitTreatment=_explicitTreatment;
@property(nonatomic) __weak id <MTEpisodeCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)lockupDidChangeSize:(id)arg1;	// IMP=0x0000000100090ac8
- (void)lockup:(id)arg1 moreButtonTapped:(id)arg2;	// IMP=0x0000000100090a58
- (void)updateOverlayForIsNew;	// IMP=0x0000000100090a4c
- (_Bool)swipeActionsExposed;	// IMP=0x0000000100090a2c
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000100090960
- (void)layoutSubviews;	// IMP=0x0000000100090890
- (void)prepareForReuse;	// IMP=0x00000001000907e4
- (void)fixEmptyTextContainers;	// IMP=0x00000001000907a4
- (void)updateActionSheetsAndPopovers;	// IMP=0x0000000100090764
- (void)dismissActionSheetsAndPopovers;	// IMP=0x0000000100090724
@property(readonly, nonatomic) MTEpisodeActionController *actionController;
@property(nonatomic) _Bool shouldShowNowPlaying;
@property(nonatomic, getter=isCurrentPlayerItem) _Bool currentPlayerItem;
@property(nonatomic, getter=isExpanded) _Bool expanded;
@property(retain, nonatomic) MTColorTheme *colorTheme;
@property(retain, nonatomic) MTEpisode *episode;
- (void)updateCurrentRowHeight;	// IMP=0x0000000100090128
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100090074
@property(nonatomic) unsigned long long style;
- (void)setupCell;	// IMP=0x000000010008feb8
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000010008fe60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
