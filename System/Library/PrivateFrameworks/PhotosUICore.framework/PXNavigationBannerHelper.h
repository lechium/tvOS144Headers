/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:47 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIViewController, _UINavigationControllerPalette;

@interface PXNavigationBannerHelper : NSObject {

	BOOL _enabled;
	UIViewController* _viewController;
	_UINavigationControllerPalette* _palette;

}

@property (nonatomic,retain) _UINavigationControllerPalette * palette;                //@synthesize palette=_palette - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                           //@synthesize enabled=_enabled - In the implementation block
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(UIViewController *)viewController;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithViewController:(id)arg1 ;
-(_UINavigationControllerPalette *)palette;
-(void)setPalette:(_UINavigationControllerPalette *)arg1 ;
@end

