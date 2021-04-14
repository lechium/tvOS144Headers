/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AMPCoreUI.framework/AMPCoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UIAdaptivePresentationControllerDelegate <NSObject>
@optional
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
-(id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2;
-(void)presentationController:(id)arg1 willPresentWithAdaptiveStyle:(long long)arg2 transitionCoordinator:(id)arg3;
-(BOOL)presentationControllerShouldDismiss:(id)arg1;
-(void)presentationControllerWillDismiss:(id)arg1;
-(void)presentationControllerDidDismiss:(id)arg1;
-(void)presentationControllerDidAttemptToDismiss:(id)arg1;

@end

