/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NSURLSessionTaskDelegatePrivate <NSURLSessionTaskDelegate>
@optional
-(void)URLSession:(id)arg1 task:(id)arg2 _schemeUpgraded:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)URLSession:(id)arg1 task:(id)arg2 _isWaitingForConnectionWithError:(id)arg3;
-(void)URLSession:(id)arg1 task:(id)arg2 _isWaitingForConnectionWithReason:(long long)arg3;
-(void)URLSession:(id)arg1 _taskIsWaitingForConnection:(id)arg2;
-(void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(BOOL)arg3;

@end
