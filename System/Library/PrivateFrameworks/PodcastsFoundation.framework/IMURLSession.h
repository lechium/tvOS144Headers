/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@protocol OS_dispatch_queue;
@class NSURLSession, NSObject, NSString;

@interface IMURLSession : NSObject <NSURLSessionDataDelegate> {

	NSURLSession* _session;
	NSObject*<OS_dispatch_queue> _sessionQueue;
	BOOL _requireIDSHost;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedSession;
+(id)sharedSessionRequiringIDSHost;
+(id)sessionWithConfiguration:(id)arg1 queue:(id)arg2 requiresIDSHost:(BOOL)arg3 ;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithConfiguration:(id)arg1 queue:(id)arg2 requiresIDSHost:(BOOL)arg3 ;
-(void)performRequest:(id)arg1 completionBlockWithTimingData:(/*^block*/id)arg2 ;
-(void)performRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

