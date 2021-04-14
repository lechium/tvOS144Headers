/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol RBSClientProtocol
@required
-(oneway void)async_didChangeInheritances:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)async_willExpireAssertionsSoon;
-(oneway void)async_assertionWillInvalidate:(id)arg1;
-(oneway void)async_assertionsDidInvalidate:(id)arg1 withError:(id)arg2;
-(oneway void)async_processDidExit:(id)arg1 withContext:(id)arg2;
-(oneway void)async_observedProcessStatesDidChange:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)async_observedProcessExitEvents:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)async_observedPreventLaunchPredicatesUpdate:(id)arg1 completion:(/*^block*/id)arg2;

@end

