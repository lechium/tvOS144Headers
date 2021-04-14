/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:15 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PineBoardServices/PineBoardServices-Structs.h>
#import <PineBoardServices/PBSAppInfo.h>

@class NSString, NSURL, NSArray, NSNumber, PBSBadgeValue;

@interface PBSMutableAppInfo : PBSAppInfo

@property (nonatomic,copy) NSString * bundleIdentifier; 
@property (nonatomic,copy) NSURL * bundleURL; 
@property (nonatomic,copy) NSString * localizedName; 
@property (assign,nonatomic) double lastModifiedDate; 
@property (nonatomic,copy) NSArray * tags; 
@property (assign,nonatomic) long long applicationType; 
@property (assign,getter=isPlaceholder,nonatomic) BOOL placeholder; 
@property (assign,getter=isBetaApp,nonatomic) BOOL betaApp; 
@property (assign,getter=isXcodeApp,nonatomic) BOOL xcodeApp; 
@property (assign,getter=isAdHocCodeSigned,nonatomic) BOOL adHocCodeSigned; 
@property (assign,getter=isUsingCloudKit,nonatomic) BOOL usingCloudKit; 
@property (assign,nonatomic) long long ratingRank; 
@property (nonatomic,retain) NSNumber * itemID; 
@property (nonatomic,retain) NSNumber * purchaserDSID; 
@property (nonatomic,copy) PBSBadgeValue * badgeValue; 
@property (assign,getter=isBadgeEnabled,nonatomic) BOOL badgeEnabled; 
@property (assign,getter=isRecentlyUpdated,nonatomic) BOOL recentlyUpdated; 
@property (assign,getter=isCacheDeleting,nonatomic) BOOL cacheDeleting; 
@property (assign,getter=isRestricted,nonatomic) BOOL restricted; 
@property (assign,getter=isSignatureTrusted,nonatomic) BOOL signatureTrusted; 
@property (assign,getter=isHidden,nonatomic) BOOL hidden; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,nonatomic) unsigned long long disabledReasons; 
@property (nonatomic,copy) NSString * alternateIconName; 
@property (nonatomic,copy) NSString * iconFile; 
@property (nonatomic,copy) NSString * primaryIconName; 
@property (nonatomic,copy) NSString * liveIconName; 
@property (nonatomic,copy) NSString * topShelfStaticImageName; 
@property (assign,nonatomic) long long installState; 
@property (assign,nonatomic) double installPercentage; 
@property (assign,nonatomic) long long installType; 
@property (assign,nonatomic) long long installFailureReason; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setBadgeValue:(PBSBadgeValue *)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)setLocalizedName:(NSString *)arg1 ;
-(void)setPlaceholder:(BOOL)arg1 ;
-(void)setItemID:(NSNumber *)arg1 ;
-(void)setLastModifiedDate:(double)arg1 ;
-(void)setInstallType:(long long)arg1 ;
-(void)setRestricted:(BOOL)arg1 ;
-(void)setBetaApp:(BOOL)arg1 ;
-(void)setTags:(NSArray *)arg1 ;
-(void)setRatingRank:(long long)arg1 ;
-(void)setBundleURL:(NSURL *)arg1 ;
-(void)setInstallState:(long long)arg1 ;
-(void)setPurchaserDSID:(NSNumber *)arg1 ;
-(id)_initWithSettings:(id)arg1 ;
-(void)setBadgeEnabled:(BOOL)arg1 ;
-(void)setRecentlyUpdated:(BOOL)arg1 ;
-(void)setDisabledReasons:(unsigned long long)arg1 ;
-(void)setAlternateIconName:(NSString *)arg1 ;
-(void)setApplicationType:(long long)arg1 ;
-(void)setXcodeApp:(BOOL)arg1 ;
-(void)setAdHocCodeSigned:(BOOL)arg1 ;
-(void)setUsingCloudKit:(BOOL)arg1 ;
-(void)setCacheDeleting:(BOOL)arg1 ;
-(void)setSignatureTrusted:(BOOL)arg1 ;
-(void)setInstallPercentage:(double)arg1 ;
-(void)setIconFile:(NSString *)arg1 ;
-(void)setPrimaryIconName:(NSString *)arg1 ;
-(void)setLiveIconName:(NSString *)arg1 ;
-(void)setInstallFailureReason:(long long)arg1 ;
-(void)setTopShelfStaticImageName:(NSString *)arg1 ;
@end

