//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MTPodcast, UIImageView;

@interface MTTVPodcastEpisodePlaceholderViewController : UIViewController
{
    MTPodcast *_podcast;	// 8 = 0x8
    UIImageView *_imageView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010003164c
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) MTPodcast *podcast; // @synthesize podcast=_podcast;
- (id)_fetchArtwork;	// IMP=0x0000000100031494
- (_Bool)_isDarkBackground;	// IMP=0x0000000100031444
- (void)_updateColors;	// IMP=0x0000000100031380
- (void)_update;	// IMP=0x00000001000312dc
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001000311a8
- (void)viewDidLayoutSubviews;	// IMP=0x00000001000310d4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100031084
- (void)viewDidLoad;	// IMP=0x0000000100031034
- (void)loadView;	// IMP=0x0000000100030f98
- (id)initWithPodcast:(id)arg1;	// IMP=0x0000000100030f24

@end

