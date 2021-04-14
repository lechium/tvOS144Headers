/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FrontBoardServices/FBSApplicationInfo.h>

@class _UIApplicationInfoParser, NSArray, NSString;

@interface _UIApplicationInfo : FBSApplicationInfo {

	long long _launchingInterfaceOrientation;
	_UIApplicationInfoParser* _plistParser;
	NSArray* _lazy_folderNames;
	NSString* _lazy_fallbackFolderName;
	BOOL _canChangeBackgroundStyle;
	BOOL _statusBarHidden;
	BOOL _statusBarHiddenWhenVerticallyCompact;
	BOOL _systemWindowsSecure;
	BOOL _optOutOfRTL;
	BOOL _requiresHighResolution;
	BOOL _fakingRequiresHighResolution;
	int _ignoredOverrides;
	long long _requestedStatusBarStyle;
	long long _backgroundStyle;
	NSString* _launchImageFile;
	NSString* _keyColorAssetName;
	long long _supportedUserInterfaceStyle;
	unsigned long long _viewControllerBasedStatusBarAppearance;
	long long _whitePointAdaptivityStyle;

}

@property (nonatomic,readonly) int ignoredOverrides;                                                   //@synthesize ignoredOverrides=_ignoredOverrides - In the implementation block
@property (nonatomic,readonly) unsigned long long viewControllerBasedStatusBarAppearance;              //@synthesize viewControllerBasedStatusBarAppearance=_viewControllerBasedStatusBarAppearance - In the implementation block
@property (nonatomic,readonly) BOOL systemWindowsSecure;                                               //@synthesize systemWindowsSecure=_systemWindowsSecure - In the implementation block
@property (nonatomic,readonly) BOOL optOutOfRTL;                                                       //@synthesize optOutOfRTL=_optOutOfRTL - In the implementation block
@property (nonatomic,readonly) long long whitePointAdaptivityStyle;                                    //@synthesize whitePointAdaptivityStyle=_whitePointAdaptivityStyle - In the implementation block
@property (nonatomic,readonly) BOOL requiresHighResolution;                                            //@synthesize requiresHighResolution=_requiresHighResolution - In the implementation block
@property (nonatomic,readonly) BOOL fakingRequiresHighResolution;                                      //@synthesize fakingRequiresHighResolution=_fakingRequiresHighResolution - In the implementation block
@property (nonatomic,readonly) long long requestedStatusBarStyle;                                      //@synthesize requestedStatusBarStyle=_requestedStatusBarStyle - In the implementation block
@property (nonatomic,readonly) BOOL canChangeBackgroundStyle;                                          //@synthesize canChangeBackgroundStyle=_canChangeBackgroundStyle - In the implementation block
@property (nonatomic,readonly) long long backgroundStyle;                                              //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (nonatomic,readonly) BOOL statusBarHidden;                                                   //@synthesize statusBarHidden=_statusBarHidden - In the implementation block
@property (nonatomic,readonly) BOOL statusBarHiddenWhenVerticallyCompact;                              //@synthesize statusBarHiddenWhenVerticallyCompact=_statusBarHiddenWhenVerticallyCompact - In the implementation block
@property (nonatomic,copy,readonly) NSString * launchImageFile;                                        //@synthesize launchImageFile=_launchImageFile - In the implementation block
@property (nonatomic,copy,readonly) NSString * keyColorAssetName;                                      //@synthesize keyColorAssetName=_keyColorAssetName - In the implementation block
@property (nonatomic,readonly) long long supportedUserInterfaceStyle;                                  //@synthesize supportedUserInterfaceStyle=_supportedUserInterfaceStyle - In the implementation block
@property (nonatomic,readonly) NSArray * folderNames; 
@property (nonatomic,readonly) NSString * fallbackFolderName; 
+(id)_localizedFolderNameForName:(id)arg1 ;
+(id)_genreNameForID:(long long)arg1 ;
-(long long)xb_userInterfaceStyleForRequestedUserInterfaceStyle:(long long)arg1 ;
-(BOOL)xb_supportsUserInterfaceStyle:(long long)arg1 ;
-(void)_loadFromProxy:(id)arg1 ;
-(NSArray *)folderNames;
-(NSString *)fallbackFolderName;
-(long long)backgroundStyle;
-(BOOL)statusBarHiddenForInterfaceOrientation:(long long)arg1 onDisplay:(id)arg2 ;
-(long long)supportedUserInterfaceStyle;
-(BOOL)statusBarHidden;
-(long long)whitePointAdaptivityStyle;
-(NSString *)launchImageFile;
-(NSString *)keyColorAssetName;
-(BOOL)canChangeBackgroundStyle;
-(long long)requestedStatusBarStyle;
-(BOOL)statusBarHiddenWhenVerticallyCompact;
-(int)ignoredOverrides;
-(unsigned long long)viewControllerBasedStatusBarAppearance;
-(BOOL)systemWindowsSecure;
-(BOOL)optOutOfRTL;
-(void)_lock_loadFolderNamesIfNecessary;
-(BOOL)statusBarForcedHiddenForInterfaceOrientation:(long long)arg1 onDisplay:(id)arg2 withUserInterfaceIdiom:(long long)arg3 ;
-(BOOL)statusBarHiddenForInterfaceOrientation:(long long)arg1 onDisplay:(id)arg2 withUserInterfaceIdiom:(long long)arg3 ;
-(BOOL)statusBarForcedHiddenForInterfaceOrientation:(long long)arg1 onDisplay:(id)arg2 ;
-(BOOL)requiresHighResolution;
-(BOOL)fakingRequiresHighResolution;
-(long long)_launchingInterfaceOrientation;
@end

