/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFRemoteExecutionSession.h>

@class NSData;

@interface WFRemoteExecutionOutgoingRunRequestResponseSession : WFRemoteExecutionSession {

	NSData* _responseData;

}

@property (nonatomic,readonly) NSData * responseData;              //@synthesize responseData=_responseData - In the implementation block
-(NSData *)responseData;
-(void)sendToDestinations:(id)arg1 options:(id)arg2 ;
-(void)handleTimeout;
-(double)timeoutLimitInSeconds;
-(id)initWithService:(id)arg1 responseData:(id)arg2 ;
@end

