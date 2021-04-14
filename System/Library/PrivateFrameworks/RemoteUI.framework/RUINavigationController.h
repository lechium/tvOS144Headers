/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:56 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UINavigationController.h>

@class UIView, RUIStyle, UIViewController;

@interface RUINavigationController : UINavigationController {

	unsigned long long _ruiSupportedInterfaceOrientations;
	UIView* _blurBackgroundView;
	RUIStyle* _style;
	unsigned long long _ruiModalPresentationStyle;
	UIViewController* _hostViewController;
	/*^block*/id _menuDismissalHandler;
	/*^block*/id _viewDidDisappearHandler;

}

@property (nonatomic,retain) RUIStyle * style;                                          //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) unsigned long long ruiModalPresentationStyle;              //@synthesize ruiModalPresentationStyle=_ruiModalPresentationStyle - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * hostViewController;              //@synthesize hostViewController=_hostViewController - In the implementation block
@property (nonatomic,copy) id menuDismissalHandler;                                     //@synthesize menuDismissalHandler=_menuDismissalHandler - In the implementation block
@property (nonatomic,copy) id viewDidDisappearHandler;                                  //@synthesize viewDidDisappearHandler=_viewDidDisappearHandler - In the implementation block
-(RUIStyle *)style;
-(void)setStyle:(RUIStyle *)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setSupportedInterfaceOrientations:(unsigned long long)arg1 ;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewDidLoad;
-(void)loadView;
-(BOOL)canBeShownFromSuspendedState;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setHostViewController:(UIViewController *)arg1 ;
-(UIViewController *)hostViewController;
-(unsigned long long)ruiModalPresentationStyle;
-(void)setViewDidDisappearHandler:(id)arg1 ;
-(void)setRuiModalPresentationStyle:(unsigned long long)arg1 ;
-(void)setMenuDismissalHandler:(id)arg1 ;
-(void)_menuButtonPressed:(id)arg1 ;
-(id)menuDismissalHandler;
-(id)viewDidDisappearHandler;
@end

