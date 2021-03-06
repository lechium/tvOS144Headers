/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:21 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UINavigationController.h>

@protocol WLKInstallable;
@class VUIAppInstallConfirmationViewController, VUIASDDialogObserver, NSString;

@interface VUIAppInstallerViewController : UINavigationController {

	/*^block*/id _completionBlock;
	double _lastProgress;
	/*^block*/id _progressBlock;
	VUIAppInstallConfirmationViewController* _confirmationController;
	VUIASDDialogObserver* _dialogObserver;
	BOOL _displayAppStoreLink;
	BOOL _displaySecondaryLink;
	id<WLKInstallable> _installable;
	NSString* _localizedContentTitle;
	NSString* _contentType;
	NSString* _confirmationTitle;
	NSString* _confirmationBody;
	NSString* _updateBody;
	NSString* _updateTitle;
	NSString* _confirmationInstallButtonTitle;
	NSString* _secondaryLinkTitle;
	/*^block*/id _secondaryLinkHandler;

}

@property (nonatomic,readonly) id<WLKInstallable> installable;                     //@synthesize installable=_installable - In the implementation block
@property (nonatomic,copy) NSString * localizedContentTitle;                       //@synthesize localizedContentTitle=_localizedContentTitle - In the implementation block
@property (nonatomic,copy) NSString * contentType;                                 //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,copy) NSString * confirmationTitle;                           //@synthesize confirmationTitle=_confirmationTitle - In the implementation block
@property (nonatomic,copy) NSString * confirmationBody;                            //@synthesize confirmationBody=_confirmationBody - In the implementation block
@property (nonatomic,copy) NSString * updateBody;                                  //@synthesize updateBody=_updateBody - In the implementation block
@property (nonatomic,copy) NSString * updateTitle;                                 //@synthesize updateTitle=_updateTitle - In the implementation block
@property (nonatomic,copy) NSString * confirmationInstallButtonTitle;              //@synthesize confirmationInstallButtonTitle=_confirmationInstallButtonTitle - In the implementation block
@property (assign,nonatomic) BOOL displayAppStoreLink;                             //@synthesize displayAppStoreLink=_displayAppStoreLink - In the implementation block
@property (assign,nonatomic) BOOL displaySecondaryLink;                            //@synthesize displaySecondaryLink=_displaySecondaryLink - In the implementation block
@property (nonatomic,copy) NSString * secondaryLinkTitle;                          //@synthesize secondaryLinkTitle=_secondaryLinkTitle - In the implementation block
@property (nonatomic,copy) id secondaryLinkHandler;                                //@synthesize secondaryLinkHandler=_secondaryLinkHandler - In the implementation block
-(id)init;
-(NSString *)contentType;
-(void)setContentType:(NSString *)arg1 ;
-(void)loadView;
-(NSString *)confirmationTitle;
-(id<WLKInstallable>)installable;
-(void)setConfirmationTitle:(NSString *)arg1 ;
-(id)initWithInstallable:(id)arg1 ;
-(void)setConfirmationBody:(NSString *)arg1 ;
-(void)beginInstallingAppWithProgressHandler:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setUpdateTitle:(NSString *)arg1 ;
-(void)_dismissAppInstallWithCompletion:(/*^block*/id)arg1 ;
-(void)_beginInstallingApp;
-(void)setSecondaryLinkTitle:(NSString *)arg1 ;
-(id)secondaryLinkHandler;
-(void)setSecondaryLinkHandler:(id)arg1 ;
-(void)_initConfirmation;
-(void)_updateWithInstallProgress:(double)arg1 ;
-(void)_finishInstallationWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)localizedContentTitle;
-(void)setLocalizedContentTitle:(NSString *)arg1 ;
-(NSString *)confirmationBody;
-(NSString *)updateBody;
-(void)setUpdateBody:(NSString *)arg1 ;
-(NSString *)updateTitle;
-(NSString *)confirmationInstallButtonTitle;
-(void)setConfirmationInstallButtonTitle:(NSString *)arg1 ;
-(BOOL)displayAppStoreLink;
-(void)setDisplayAppStoreLink:(BOOL)arg1 ;
-(BOOL)displaySecondaryLink;
-(void)setDisplaySecondaryLink:(BOOL)arg1 ;
-(NSString *)secondaryLinkTitle;
@end

