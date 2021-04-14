/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServices/AMSTask.h>

@class ACAccount, AMSURLSession, NSURLSessionTask;

@interface AMSBiometricsIdentityMapChangeTask : AMSTask {

	ACAccount* _account;
	AMSURLSession* _session;
	NSURLSessionTask* _task;

}

@property (nonatomic,retain) ACAccount * account;                  //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) AMSURLSession * session;              //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSURLSessionTask * task;              //@synthesize task=_task - In the implementation block
-(AMSURLSession *)session;
-(void)setSession:(AMSURLSession *)arg1 ;
-(NSURLSessionTask *)task;
-(void)setTask:(NSURLSessionTask *)arg1 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(id)perform;
-(id)initWithAccount:(id)arg1 session:(id)arg2 task:(id)arg3 ;
@end
