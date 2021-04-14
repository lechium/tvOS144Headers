/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:47 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFRemoteExecutionSession.h>

@interface WFRemoteExecutionOutgoingAlertSession : WFRemoteExecutionSession {

	/*^block*/id _completion;

}

@property (nonatomic,copy,readonly) id completion;              //@synthesize completion=_completion - In the implementation block
-(id)completion;
-(void)finish;
-(void)finishWithError:(id)arg1 ;
-(id)initWithService:(id)arg1 request:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sendToDestinations:(id)arg1 options:(id)arg2 ;
-(void)handleIncomingProtobuf:(id)arg1 ;
-(void)handleTimeout;
-(double)timeoutLimitInSeconds;
@end

