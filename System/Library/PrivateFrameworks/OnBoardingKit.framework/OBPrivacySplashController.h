/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVSystemUI/TVSUITextAlertController.h>

@class OBPrivacyFlow, NSString;

@interface OBPrivacySplashController : TVSUITextAlertController {

	OBPrivacyFlow* _flow;
	BOOL _suppressPerPageAnalyticsLogging;
	BOOL _allowsOpeningSafari;
	BOOL _showLinkToPrivacyGateway;
	BOOL _showsLinkToUnifiedAbout;
	BOOL _forceLargeMargins;
	BOOL _useModalStyle;
	BOOL _isCombined;
	NSString* _displayLanguage;
	unsigned long long _displayDeviceType;

}

@property (assign) BOOL suppressPerPageAnalyticsLogging;                 //@synthesize suppressPerPageAnalyticsLogging=_suppressPerPageAnalyticsLogging - In the implementation block
@property (assign) BOOL allowsOpeningSafari;                             //@synthesize allowsOpeningSafari=_allowsOpeningSafari - In the implementation block
@property (assign,nonatomic) BOOL showLinkToPrivacyGateway;              //@synthesize showLinkToPrivacyGateway=_showLinkToPrivacyGateway - In the implementation block
@property (assign) BOOL showsLinkToUnifiedAbout;                         //@synthesize showsLinkToUnifiedAbout=_showsLinkToUnifiedAbout - In the implementation block
@property (assign) BOOL forceLargeMargins;                               //@synthesize forceLargeMargins=_forceLargeMargins - In the implementation block
@property (retain) NSString * displayLanguage;                           //@synthesize displayLanguage=_displayLanguage - In the implementation block
@property (assign) unsigned long long displayDeviceType;                 //@synthesize displayDeviceType=_displayDeviceType - In the implementation block
@property (assign) BOOL useModalStyle;                                   //@synthesize useModalStyle=_useModalStyle - In the implementation block
@property (assign,nonatomic) BOOL isCombined;                            //@synthesize isCombined=_isCombined - In the implementation block
+(id)splashPageWithBundleIdentifier:(id)arg1 ;
-(NSString *)displayLanguage;
-(void)viewDidLoad;
-(id)_defaultButtonTitle;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)initWithPrivacyIdentifier:(id)arg1 ;
-(void)setDisplayLanguage:(NSString *)arg1 ;
-(id)initWithFlow:(id)arg1 ;
-(BOOL)suppressPerPageAnalyticsLogging;
-(void)_initializeFromBundle;
-(void)setDismissHandlerForDefaultButton:(/*^block*/id)arg1 ;
-(void)setSuppressPerPageAnalyticsLogging:(BOOL)arg1 ;
-(BOOL)allowsOpeningSafari;
-(void)setAllowsOpeningSafari:(BOOL)arg1 ;
-(BOOL)showLinkToPrivacyGateway;
-(void)setShowLinkToPrivacyGateway:(BOOL)arg1 ;
-(BOOL)showsLinkToUnifiedAbout;
-(void)setShowsLinkToUnifiedAbout:(BOOL)arg1 ;
-(BOOL)forceLargeMargins;
-(void)setForceLargeMargins:(BOOL)arg1 ;
-(unsigned long long)displayDeviceType;
-(void)setDisplayDeviceType:(unsigned long long)arg1 ;
-(BOOL)useModalStyle;
-(void)setUseModalStyle:(BOOL)arg1 ;
-(BOOL)isCombined;
-(void)setIsCombined:(BOOL)arg1 ;
@end

