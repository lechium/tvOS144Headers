//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTTVSettingsSplitViewController.h"

@class MTPodcast, MTTVPodcastInfoViewController, MTTVPodcastSettingsListViewController, UINavigationController;
@protocol MTShowSettingsViewControllerDelegate;

@interface MTTVPodcastSettingsSplitViewController : MTTVSettingsSplitViewController
{
    MTPodcast *_podcast;	// 8 = 0x8
    id <MTShowSettingsViewControllerDelegate> _settingsDelegate;	// 16 = 0x10
    MTTVPodcastInfoViewController *_podcastInfoViewController;	// 24 = 0x18
    MTTVPodcastSettingsListViewController *_podcastSettingsViewController;	// 32 = 0x20
    UINavigationController *_settingsNavigationController;	// 40 = 0x28
}

+ (double)rightViewControllerTopMargin;	// IMP=0x00000001000ce0e4
- (void).cxx_destruct;	// IMP=0x00000001000ce368
@property(retain, nonatomic) UINavigationController *settingsNavigationController; // @synthesize settingsNavigationController=_settingsNavigationController;
@property(retain, nonatomic) MTTVPodcastSettingsListViewController *podcastSettingsViewController; // @synthesize podcastSettingsViewController=_podcastSettingsViewController;
@property(retain, nonatomic) MTTVPodcastInfoViewController *podcastInfoViewController; // @synthesize podcastInfoViewController=_podcastInfoViewController;
@property(nonatomic) __weak id <MTShowSettingsViewControllerDelegate> settingsDelegate; // @synthesize settingsDelegate=_settingsDelegate;
@property(retain, nonatomic) MTPodcast *podcast; // @synthesize podcast=_podcast;
- (void)_updateTitle;	// IMP=0x00000001000ce0f0
- (void)viewDidLoad;	// IMP=0x00000001000cddb0
- (id)initWithPodcast:(id)arg1 delegate:(id)arg2;	// IMP=0x00000001000cdcec
- (id)initWithPodcast:(id)arg1;	// IMP=0x00000001000cdcdc
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001000cdccc
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000cdcbc

@end
