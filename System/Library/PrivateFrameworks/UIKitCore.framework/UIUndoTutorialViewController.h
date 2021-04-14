/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>

@class UIUndoTutorialView;

@interface UIUndoTutorialViewController : UIViewController {

	/*^block*/id _completionHandler;
	UIUndoTutorialView* _tutorialView;

}

@property (nonatomic,copy) id completionHandler;                             //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) UIUndoTutorialView * tutorialView;              //@synthesize tutorialView=_tutorialView - In the implementation block
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)_canShowWhileLocked;
-(id)initWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)doneButtonPressed;
-(UIUndoTutorialView *)tutorialView;
-(void)setTutorialView:(UIUndoTutorialView *)arg1 ;
@end

