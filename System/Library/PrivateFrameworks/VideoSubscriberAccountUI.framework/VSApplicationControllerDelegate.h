/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:42 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol VSApplicationControllerDelegate <NSObject>
@optional
-(void)applicationControllerDidStop:(id)arg1;

@required
-(BOOL)applicationController:(id)arg1 requestsAlert:(id)arg2;
-(void)applicationController:(id)arg1 request:(id)arg2 didCompleteWithResponse:(id)arg3;
-(void)applicationController:(id)arg1 didReceiveViewModel:(id)arg2;
-(void)applicationController:(id)arg1 didReceiveViewModelError:(id)arg2;
-(void)applicationController:(id)arg1 request:(id)arg2 didFailWithError:(id)arg3;
-(void)applicationControllerDidStart:(id)arg1;
-(void)applicationController:(id)arg1 startDidFailWithError:(id)arg2;

@end

