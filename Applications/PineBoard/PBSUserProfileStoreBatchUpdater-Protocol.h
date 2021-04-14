//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, NSString, PBSCreateUserProfileAttributes, PBSUpdateUserProfileAttributes, PBSUserProfile;

@protocol PBSUserProfileStoreBatchUpdater
@property(readonly, nonatomic) NSString *selectedUserProfileIdentifier;
@property(readonly, nonatomic) NSString *primaryUserProfileIdentifier;
@property(readonly, nonatomic) NSDictionary *userProfiles;
- (void)updateUserProfileWithIdentifier:(NSString *)arg1 usingBlock:(void (^)(PBSMutableUserProfile *))arg2;
- (void)removeUserProfileWithIdentifier:(NSString *)arg1;
- (void)addUserProfile:(PBSUserProfile *)arg1;
- (PBSUserProfile *)updateUserProfileWithIdentifier:(NSString *)arg1 attributes:(PBSUpdateUserProfileAttributes *)arg2 error:(id *)arg3;
- (PBSUserProfile *)updateUserProfileWithIdentifier:(NSString *)arg1 usingBlock:(void (^)(PBSMutableUserProfile *))arg2 error:(id *)arg3;
- (PBSUserProfile *)createUserProfileWithAttributes:(PBSCreateUserProfileAttributes *)arg1 error:(id *)arg2;
- (_Bool)addUserProfile:(PBSUserProfile *)arg1 error:(id *)arg2;
@end

