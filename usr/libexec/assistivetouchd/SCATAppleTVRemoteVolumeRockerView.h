//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCATCustomFocusingView.h"

#import "SCATAppleTVRemoteVolumeButtonViewDelegate-Protocol.h"

@class NSString, SCATAppleTVRemoteVolumeButtonView, UIImage, UIImageView;

@interface SCATAppleTVRemoteVolumeRockerView : SCATCustomFocusingView <SCATAppleTVRemoteVolumeButtonViewDelegate>
{
    UIImageView *_backgroundImageView;	// 8 = 0x8
    UIImage *_unfocusedBackgroundImage;	// 16 = 0x10
    UIImage *_containingGroupFocusedBackgroundImage;	// 24 = 0x18
    UIImage *_increaseVolumeFocusedBackgroundImage;	// 32 = 0x20
    UIImage *_decreaseVolumeFocusedBackgroundImage;	// 40 = 0x28
    SCATAppleTVRemoteVolumeButtonView *_increaseVolumeViewInternal;	// 48 = 0x30
    SCATAppleTVRemoteVolumeButtonView *_decreaseVolumeViewInternal;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000010000d144
@property(retain, nonatomic) SCATAppleTVRemoteVolumeButtonView *decreaseVolumeViewInternal; // @synthesize decreaseVolumeViewInternal=_decreaseVolumeViewInternal;
@property(retain, nonatomic) SCATAppleTVRemoteVolumeButtonView *increaseVolumeViewInternal; // @synthesize increaseVolumeViewInternal=_increaseVolumeViewInternal;
@property(retain, nonatomic) UIImage *decreaseVolumeFocusedBackgroundImage; // @synthesize decreaseVolumeFocusedBackgroundImage=_decreaseVolumeFocusedBackgroundImage;
@property(retain, nonatomic) UIImage *increaseVolumeFocusedBackgroundImage; // @synthesize increaseVolumeFocusedBackgroundImage=_increaseVolumeFocusedBackgroundImage;
@property(retain, nonatomic) UIImage *containingGroupFocusedBackgroundImage; // @synthesize containingGroupFocusedBackgroundImage=_containingGroupFocusedBackgroundImage;
@property(retain, nonatomic) UIImage *unfocusedBackgroundImage; // @synthesize unfocusedBackgroundImage=_unfocusedBackgroundImage;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void)volumeButton:(id)arg1 didChangeFocusState:(long long)arg2;	// IMP=0x000000010000ccdc
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000010000cc80
@property(readonly, nonatomic) SCATCustomFocusingView *decreaseVolumeView;
@property(readonly, nonatomic) SCATCustomFocusingView *increaseVolumeView;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010000c4bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

