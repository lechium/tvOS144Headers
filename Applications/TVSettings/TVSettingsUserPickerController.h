//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBSUserProfileManagerObserver-Protocol.h"

@class NSDictionary, NSDiffableDataSourceSnapshot, NSString, PBSUserProfileManager, TVSUIProfilePictureCache, TVSUIProfilePictureStore;
@protocol TVSettingsUserPickerControllerDelegate;

@interface TVSettingsUserPickerController : NSObject <PBSUserProfileManagerObserver>
{
    id <TVSettingsUserPickerControllerDelegate> _delegate;	// 8 = 0x8
    NSDiffableDataSourceSnapshot *_diffableSnapshot;	// 16 = 0x10
    PBSUserProfileManager *_userProfileManager;	// 24 = 0x18
    TVSUIProfilePictureCache *_pictureCache;	// 32 = 0x20
    TVSUIProfilePictureStore *_pictureStore;	// 40 = 0x28
    NSDictionary *_userProfilesByID;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010006815c
@property(retain, nonatomic) NSDictionary *userProfilesByID; // @synthesize userProfilesByID=_userProfilesByID;
@property(retain, nonatomic) TVSUIProfilePictureStore *pictureStore; // @synthesize pictureStore=_pictureStore;
@property(retain, nonatomic) TVSUIProfilePictureCache *pictureCache; // @synthesize pictureCache=_pictureCache;
@property(retain, nonatomic) PBSUserProfileManager *userProfileManager; // @synthesize userProfileManager=_userProfileManager;
@property(readonly, nonatomic) NSDiffableDataSourceSnapshot *diffableSnapshot; // @synthesize diffableSnapshot=_diffableSnapshot;
@property(nonatomic) __weak id <TVSettingsUserPickerControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)userProfileManagerDidUpdate:(id)arg1;	// IMP=0x0000000100068078
- (void)_fetchProfilePhotosForAllUsers;	// IMP=0x00000001000677e0
- (void)_setCachedProfilePictureInUserPickerModel:(id)arg1;	// IMP=0x0000000100067704
- (void)_updateSnapshot;	// IMP=0x0000000100067270
- (void)selectUserWithIdentifier:(id)arg1;	// IMP=0x000000010006707c
- (id)userPickerModelWithIdentifier:(id)arg1;	// IMP=0x0000000100066fd8
- (void)dealloc;	// IMP=0x0000000100066f84
- (id)init;	// IMP=0x0000000100066e88

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

