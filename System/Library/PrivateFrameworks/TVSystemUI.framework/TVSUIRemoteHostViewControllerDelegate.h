/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TVSUIRemoteHostViewControllerDelegate <NSObject>
@required
-(void)hostRemoteViewController:(id)arg1 requestsDismissWithItems:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)hostRemoteViewControllerDidExit:(id)arg1 withError:(id)arg2;
-(void)hostRemoteViewController:(id)arg1 didReceiveRemoteItems:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)hostRemoteViewController:(id)arg1 didReceiveRemoteAnimationState:(long long)arg2;

@end
