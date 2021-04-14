/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class TVSUIOSUpdateSlowRebootView, TVSUIOSUpdateView;

@interface TVSUIOSUpdateViewController : UIViewController {

	TVSUIOSUpdateSlowRebootView* _rebootView;
	TVSUIOSUpdateView* _progressView;

}
-(void)loadView;
-(void)setProgressPercent:(float)arg1 ;
-(void)showProgressView;
-(void)showSlowUpdateViewWithCompletion:(/*^block*/id)arg1 ;
@end

