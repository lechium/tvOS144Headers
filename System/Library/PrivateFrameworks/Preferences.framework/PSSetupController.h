/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/PSRootController.h>

@protocol PSController;
@class NSDictionary, UIViewController, PSRootController;

@interface PSSetupController : PSRootController {

	NSDictionary* _rootInfo;
	UIViewController*<PSController> _parentController;
	PSRootController* _parentRootController;

}
-(id)init;
-(void)dismiss;
-(void)handleURL:(id)arg1 ;
-(void)dismissAnimated:(BOOL)arg1 ;
-(id)controller;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setParentController:(id)arg1 ;
-(id)parentController;
-(void)showController:(id)arg1 animate:(BOOL)arg2 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setupController;
-(BOOL)usePopupStyle;
-(BOOL)popupStyleIsModal;
-(void)statusBarWillChangeHeight:(id)arg1 ;
-(void)dismissAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissWithCompletion:(/*^block*/id)arg1 ;
-(void)pushControllerOnParentWithSpecifier:(id)arg1 ;
-(void)popControllerOnParent;
@end

