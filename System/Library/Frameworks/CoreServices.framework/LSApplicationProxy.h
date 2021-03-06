/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:01 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/LSBundleProxy.h>
#import <libobjc.A.dylib/LSDetachable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, LSApplicationRecord, NSArray, NSDate, NSNumber, NSUUID, NSProgress, _LSDiskUsage, _LSApplicationState, NSDictionary, NSSet;

@interface LSApplicationProxy : LSBundleProxy <LSDetachable, NSSecureCoding> {

	NSString* _deviceIdentifierVendorName;
	LSApplicationRecord* _record;
	NSArray* _plugInKitPlugins;
	BOOL _userInitiatedUninstall;

}

@property (nonatomic,readonly) double installPercentage; 
@property (nonatomic,readonly) long long installProgressState; 
@property (getter=isInstallPaused,nonatomic,readonly) BOOL installPaused; 
@property (nonatomic,readonly) BOOL tvs_isLegacyApp; 
@property (readonly) NSArray * if_userActivityTypes; 
@property (assign,nonatomic) BOOL userInitiatedUninstall;                                          //@synthesize userInitiatedUninstall=_userInitiatedUninstall - In the implementation block
@property (nonatomic,readonly) BOOL supportsAlternateIconNames; 
@property (nonatomic,readonly) int bundleModTime; 
@property (nonatomic,readonly) LSApplicationRecord * correspondingApplicationRecord; 
@property (nonatomic,readonly) NSString * applicationIdentifier; 
@property (nonatomic,readonly) NSString * companionApplicationIdentifier; 
@property (nonatomic,readonly) NSArray * counterpartIdentifiers; 
@property (nonatomic,readonly) NSDate * registeredDate; 
@property (nonatomic,readonly) NSNumber * itemID; 
@property (nonatomic,readonly) NSString * vendorName; 
@property (nonatomic,readonly) NSString * itemName; 
@property (nonatomic,readonly) NSString * storeCohortMetadata; 
@property (nonatomic,readonly) NSString * genre; 
@property (nonatomic,readonly) NSNumber * genreID; 
@property (nonatomic,readonly) NSArray * subgenres; 
@property (nonatomic,readonly) NSArray * staticShortcutItems; 
@property (nonatomic,readonly) NSString * minimumSystemVersion; 
@property (nonatomic,readonly) NSString * maximumSystemVersion; 
@property (nonatomic,readonly) NSString * shortVersionString; 
@property (nonatomic,readonly) NSString * preferredArchitecture; 
@property (nonatomic,readonly) NSString * applicationType; 
@property (nonatomic,readonly) NSArray * directionsModes; 
@property (nonatomic,readonly) NSArray * UIBackgroundModes; 
@property (nonatomic,readonly) NSArray * audioComponents; 
@property (nonatomic,readonly) NSUUID * deviceIdentifierForVendor; 
@property (nonatomic,readonly) NSUUID * deviceIdentifierForAdvertising; 
@property (nonatomic,readonly) NSProgress * installProgress; 
@property (nonatomic,readonly) NSNumber * staticDiskUsage; 
@property (nonatomic,readonly) NSNumber * dynamicDiskUsage; 
@property (nonatomic,readonly) NSNumber * ODRDiskUsage; 
@property (nonatomic,readonly) _LSDiskUsage * diskUsage; 
@property (nonatomic,readonly) _LSApplicationState * appState; 
@property (getter=isInstalled,nonatomic,readonly) BOOL installed; 
@property (getter=isPlaceholder,nonatomic,readonly) BOOL placeholder; 
@property (getter=isRestricted,nonatomic,readonly) BOOL restricted; 
@property (getter=isRemovedSystemApp,nonatomic,readonly) BOOL removedSystemApp; 
@property (nonatomic,readonly) NSArray * VPNPlugins; 
@property (nonatomic,readonly) NSArray * plugInKitPlugins; 
@property (nonatomic,readonly) NSArray * appTags; 
@property (nonatomic,readonly) NSString * applicationDSID; 
@property (nonatomic,readonly) NSNumber * purchaserDSID; 
@property (nonatomic,readonly) NSNumber * downloaderDSID; 
@property (nonatomic,readonly) NSNumber * familyID; 
@property (nonatomic,readonly) unsigned long long installType; 
@property (nonatomic,readonly) unsigned long long originalInstallType; 
@property (nonatomic,readonly) NSArray * requiredDeviceCapabilities; 
@property (nonatomic,readonly) NSArray * deviceFamily; 
@property (nonatomic,readonly) NSArray * activityTypes; 
@property (nonatomic,readonly) NSArray * externalAccessoryProtocols; 
@property (nonatomic,readonly) NSString * teamID; 
@property (nonatomic,readonly) NSString * appIDPrefix; 
@property (nonatomic,readonly) NSNumber * storeFront; 
@property (nonatomic,readonly) NSNumber * externalVersionIdentifier; 
@property (nonatomic,readonly) NSNumber * betaExternalVersionIdentifier; 
@property (nonatomic,readonly) NSNumber * ratingRank; 
@property (nonatomic,readonly) NSString * ratingLabel; 
@property (nonatomic,readonly) NSString * sourceAppIdentifier; 
@property (nonatomic,readonly) NSString * applicationVariant; 
@property (getter=isAppUpdate,nonatomic,readonly) BOOL appUpdate; 
@property (nonatomic,readonly) BOOL hasParallelPlaceholder; 
@property (getter=isNewsstandApp,nonatomic,readonly) BOOL newsstandApp; 
@property (getter=isWhitelisted,nonatomic,readonly) BOOL whitelisted; 
@property (getter=isAppStoreVendable,nonatomic,readonly) BOOL appStoreVendable; 
@property (getter=isDeviceBasedVPP,nonatomic,readonly) BOOL deviceBasedVPP; 
@property (getter=isBetaApp,nonatomic,readonly) BOOL betaApp; 
@property (getter=isAdHocCodeSigned,nonatomic,readonly) BOOL adHocCodeSigned; 
@property (nonatomic,readonly) BOOL supportsAudiobooks; 
@property (getter=isLaunchProhibited,nonatomic,readonly) BOOL launchProhibited; 
@property (nonatomic,readonly) BOOL supportsODR; 
@property (nonatomic,readonly) BOOL hasSettingsBundle; 
@property (nonatomic,readonly) BOOL supportsExternallyPlayableContent; 
@property (nonatomic,readonly) BOOL supportsOpenInPlace; 
@property (nonatomic,readonly) BOOL fileSharingEnabled; 
@property (nonatomic,readonly) BOOL iconIsPrerendered; 
@property (nonatomic,readonly) BOOL iconUsesAssetCatalog; 
@property (getter=isPurchasedReDownload,nonatomic,readonly) BOOL purchasedReDownload; 
@property (nonatomic,readonly) BOOL hasMIDBasedSINF; 
@property (nonatomic,readonly) BOOL missingRequiredSINF; 
@property (nonatomic,readonly) BOOL supportsPurgeableLocalStorage; 
@property (getter=isDeletable,nonatomic,readonly) BOOL deletable; 
@property (nonatomic,readonly) NSArray * managedPersonas; 
@property (getter=isRemoveableSystemApp,nonatomic,readonly) BOOL removeableSystemApp; 
@property (getter=isWatchKitApp,nonatomic,readonly) BOOL watchKitApp; 
@property (nonatomic,readonly) NSString * watchKitVersion; 
@property (nonatomic,readonly) NSString * complicationPrincipalClass; 
@property (nonatomic,readonly) NSArray * supportedComplicationFamilies; 
@property (nonatomic,readonly) BOOL hasCustomNotification; 
@property (nonatomic,readonly) BOOL hasComplication; 
@property (nonatomic,readonly) BOOL hasGlance; 
@property (nonatomic,readonly) BOOL shouldSkipWatchAppInstall; 
@property (getter=isGameCenterEnabled,nonatomic,readonly) BOOL gameCenterEnabled; 
@property (nonatomic,readonly) BOOL gameCenterEverEnabled; 
@property (nonatomic,readonly) NSNumber * installFailureReason; 
@property (nonatomic,readonly) long long deviceManagementPolicy; 
@property (nonatomic,readonly) NSDictionary * siriActionDefinitionURLs; 
@property (nonatomic,readonly) NSString * appStoreToolsBuildVersion; 
@property (nonatomic,readonly) NSSet * claimedDocumentContentTypes; 
@property (nonatomic,readonly) NSSet * claimedURLSchemes; 
@property (nonatomic,readonly) BOOL canHandleWebAuthentication; 
@property (nonatomic,readonly) BOOL supportsMultiwindow; 
@property (nonatomic,readonly) NSNumber * platform; 
@property (nonatomic,readonly) NSArray * backgroundTaskSchedulerPermittedIdentifiers; 
@property (getter=isStandaloneWatchApp,nonatomic,readonly) BOOL standaloneWatchApp; 
@property (nonatomic,readonly) BOOL runsIndependentlyOfCompanionApp; 
@property (getter=isArcadeApp,nonatomic,readonly) BOOL arcadeApp; 
@property (nonatomic,readonly) NSArray * carPlayInstrumentClusterURLSchemes; 
+(id)_tv_placeholderIconImage;
+(id)tv_placeholderLayeredIcon;
+(void)tv_initializeFlatIconCache;
+(void)tv_disableLSWorkspaceInstallHandling;
+(id)_tvsui_placeholderLayeredIconAtSystemScale;
+(id)_tvsui_placeholderIconImage;
+(id)tvsui_placeholderLayeredIcon;
+(void)tvsui_initializeFlatIconCache;
+(BOOL)clipTreatmentIsWhitelisted;
+(id)__IS_appClipIconDataWithUnmaskedIconData:(id)arg1 variant:(int)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)applicationProxyForIdentifier:(id)arg1 ;
+(id)applicationProxyForBundleURL:(id)arg1 ;
+(id)applicationProxyForIdentifier:(id)arg1 placeholder:(BOOL)arg2 ;
+(id)applicationProxyForCompanionIdentifier:(id)arg1 ;
+(id)applicationProxyForSystemPlaceholder:(id)arg1 ;
+(id)applicationProxyWithBundleUnitID:(unsigned)arg1 withContext:(LSContext*)arg2 ;
+(id)applicationProxyForIdentifier:(id)arg1 withContext:(LSContext*)arg2 ;
+(id)applicationProxyForBundleType:(unsigned long long)arg1 identifier:(id)arg2 isCompanion:(BOOL)arg3 URL:(id)arg4 itemID:(id)arg5 bundleUnit:(unsigned*)arg6 ;
+(id)applicationProxyForItemID:(id)arg1 ;
-(void)vs_primaryIconWithCompletion:(/*^block*/id)arg1 ;
-(id)tv_applicationFlatIcon;
-(double)installPercentage;
-(id)tv_cacheKey;
-(id)tv_supportedUserInterfaceStyles;
-(double)tv_lastModifiedDate;
-(id)tv_bundlePathHash;
-(id)_tv_applicationIconName;
-(id)tv_iconCacheKey;
-(id)_tv_uncachedAssetManager;
-(id)_tv_cachedFlatApplicationIcon;
-(id)_tv_cachedSmallFlatApplicationIcon;
-(id)_tv_assetManager;
-(id)tv_displayNameForAppState:(id)arg1 withLocalizedAppName:(id)arg2 ;
-(BOOL)isInstallPaused;
-(long long)installProgressState;
-(void)tv_preheatApplicationIcon;
-(void)tv_preheatSmallApplicationIcon;
-(void)tv_preheatApplicationName;
-(void)tv_flushApplicationCachedImages;
-(id)tv_smallApplicationFlatIcon;
-(id)tv_volatileApplicationLayeredIcon;
-(id)tv_volatileTopShelfImage;
-(id)tv_applicationLaunchImageName;
-(BOOL)tv_applicationLaunchImageIsTemplate;
-(long long)tv_preferredUserInterfaceStyle;
-(id)tv_displayNameForAppState:(id)arg1 ;
-(BOOL)asd_isOcelot;
-(id)_tvsui_applicationIconName;
-(id)tvsui_cacheKey;
-(double)tvsui_lastModifiedDate;
-(id)tvsui_iconCacheKey;
-(id)_tvsui_uncachedAssetManager;
-(id)_tvsui_cachedFlatApplicationIcon;
-(id)tvsui_supportedUserInterfaceStyles;
-(id)tvsui_applicationFlatIcon;
-(id)tvsui_applicationLaunchImageName;
-(BOOL)tvsui_applicationLaunchImageIsTemplate;
-(long long)tvsui_preferredUserInterfaceStyle;
-(id)_tvsui_cachedSmallFlatApplicationIcon;
-(id)_tvsui_assetManager;
-(BOOL)_isNotInstalled;
-(BOOL)_tvsui_isSoftFailure;
-(id)pbsAppTags;
-(BOOL)tvs_isLegacyApp;
-(id)tvs_bundle;
-(NSArray *)if_userActivityTypes;
-(id)__IS_iconDataForVariant:(int)arg1 withOptions:(int)arg2 ;
-(id)__IS_iconDataForVariant:(int)arg1 preferredIconName:(id)arg2 withOptions:(int)arg3 ;
-(id)un_applicationBundleURL;
-(id)un_applicationBundleIdentifier;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(NSString *)teamID;
-(NSString *)vendorName;
-(NSNumber *)itemID;
-(NSString *)storeCohortMetadata;
-(NSString *)applicationType;
-(NSString *)applicationVariant;
-(_LSApplicationState *)appState;
-(id)dataContainerURL;
-(BOOL)profileValidated;
-(BOOL)UPPValidated;
-(BOOL)freeProfileValidated;
-(BOOL)isRestricted;
-(BOOL)isBetaApp;
-(NSArray *)deviceFamily;
-(NSArray *)requiredDeviceCapabilities;
-(NSNumber *)ratingRank;
-(NSNumber *)purchaserDSID;
-(NSNumber *)downloaderDSID;
-(long long)deviceManagementPolicy;
-(id)environmentVariables;
-(unsigned long long)installType;
-(NSProgress *)installProgress;
-(id)bundleType;
-(BOOL)isInstalled;
-(BOOL)isPlaceholder;
-(NSString *)sourceAppIdentifier;
-(NSNumber *)platform;
-(NSArray *)plugInKitPlugins;
-(NSString *)applicationIdentifier;
-(NSString *)genre;
-(NSArray *)activityTypes;
-(void)detach;
-(id)localizedNameForContext:(id)arg1 ;
-(NSString *)companionApplicationIdentifier;
-(NSString *)itemName;
-(NSNumber *)betaExternalVersionIdentifier;
-(BOOL)isDeviceBasedVPP;
-(BOOL)isGameCenterEnabled;
-(NSNumber *)externalVersionIdentifier;
-(NSString *)ratingLabel;
-(BOOL)isWatchKitApp;
-(NSString *)applicationDSID;
-(BOOL)hasMIDBasedSINF;
-(BOOL)missingRequiredSINF;
-(BOOL)isRemovedSystemApp;
-(id)groupContainerURLs;
-(void)clearAdvertisingIdentifier;
-(NSNumber *)genreID;
-(NSNumber *)familyID;
-(BOOL)gameCenterEverEnabled;
-(NSNumber *)storeFront;
-(NSNumber *)staticDiskUsage;
-(NSArray *)managedPersonas;
-(BOOL)isAppUpdate;
-(BOOL)fileSharingEnabled;
-(id)localizedNameForContext:(id)arg1 preferredLocalizations:(id)arg2 ;
-(id)primaryIconDataForVariant:(int)arg1 ;
-(BOOL)isNewsstandApp;
-(BOOL)isDeletableIgnoringRestrictions;
-(int)bundleModTime;
-(id)_initWithBundleUnit:(unsigned)arg1 context:(LSContext*)arg2 bundleIdentifier:(id)arg3 ;
-(id)_initWithContext:(LSContext*)arg1 bundleUnit:(unsigned)arg2 applicationRecord:(id)arg3 bundleID:(id)arg4 resolveAndDetach:(BOOL)arg5 ;
-(NSArray *)subgenres;
-(unsigned long long)originalInstallType;
-(id)_managedPersonas;
-(id)alternateIconName;
-(id)iconDataForVariant:(int)arg1 withOptions:(int)arg2 ;
-(void)getDeviceManagementPolicyWithCompletionHandler:(/*^block*/id)arg1 ;
-(LSApplicationRecord *)correspondingApplicationRecord;
-(NSDate *)registeredDate;
-(NSString *)preferredArchitecture;
-(NSNumber *)dynamicDiskUsage;
-(NSNumber *)ODRDiskUsage;
-(NSString *)appIDPrefix;
-(BOOL)isWhitelisted;
-(BOOL)supportsODR;
-(BOOL)iconIsPrerendered;
-(BOOL)iconUsesAssetCatalog;
-(BOOL)isPurchasedReDownload;
-(BOOL)_usesSystemPersona;
-(BOOL)isRemoveableSystemApp;
-(NSString *)complicationPrincipalClass;
-(NSNumber *)installFailureReason;
-(void)setAlternateIconName:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(id)iconDataForVariant:(int)arg1 ;
-(NSDictionary *)siriActionDefinitionURLs;
-(NSSet *)claimedDocumentContentTypes;
-(NSSet *)claimedURLSchemes;
-(id)handlerRankOfClaimForContentType:(id)arg1 ;
-(BOOL)isStandaloneWatchApp;
-(BOOL)getGenericTranslocationTargetURL:(id*)arg1 error:(id*)arg2 ;
-(id)getBundleMetadata;
-(id)installProgressSync;
-(BOOL)userInitiatedUninstall;
-(void)setUserInitiatedUninstall:(BOOL)arg1 ;
-(id)localizedNameForContext:(id)arg1 preferredLocalizations:(id)arg2 useShortNameOnly:(BOOL)arg3 ;
-(id)_localizedNameWithPreferredLocalizations:(id)arg1 useShortNameOnly:(BOOL)arg2 ;
@end

