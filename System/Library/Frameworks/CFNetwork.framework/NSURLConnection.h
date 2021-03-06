/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:19:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSURLAuthenticationChallengeSender.h>

@class NSURLConnectionInternal, NSString, NSURLRequest;

@interface NSURLConnection : NSObject <NSURLAuthenticationChallengeSender> {

	NSURLConnectionInternal* _internal;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSURLRequest * originalRequest; 
@property (copy,readonly) NSURLRequest * currentRequest; 
+(id)connectionWithRequest:(id)arg1 delegate:(id)arg2 ;
+(id)sendSynchronousRequest:(id)arg1 returningResponse:(id*)arg2 error:(id*)arg3 ;
+(void)sendAsynchronousRequest:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(BOOL)canHandleRequest:(id)arg1 ;
+(unsigned long long)_sweeperInterval;
+(void)_setSweeperInterval:(unsigned long long)arg1 ;
+(void)_setMIMETypesWithNoSizeLimit:(id)arg1 ;
+(void)_setCollectsTimingData:(BOOL)arg1 ;
+(BOOL)_collectsTimingData;
+(void)_collectTimingDataWithOptions:(unsigned long long)arg1 ;
+(unsigned long long)_timingDataOptions;
+(CFRunLoopRef)resourceLoaderRunLoop;
+(void)_setLoaderThreadPriority:(int)arg1 ;
-(NSString *)description;
-(void)dealloc;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)cancel;
-(NSURLRequest *)currentRequest;
-(void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2 ;
-(void)performDefaultHandlingForAuthenticationChallenge:(id)arg1 ;
-(NSURLRequest *)originalRequest;
-(void)start;
-(void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1 ;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1 ;
-(void)cancelAuthenticationChallenge:(id)arg1 ;
-(id)initWithRequest:(id)arg1 delegate:(id)arg2 startImmediately:(BOOL)arg3 ;
-(id)initWithRequest:(id)arg1 delegate:(id)arg2 ;
-(void)setDelegateQueue:(id)arg1 ;
-(void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)download;
-(id)connectionProperties;
-(void)setDefersCallbacks:(BOOL)arg1 ;
-(BOOL)defersCallbacks;
-(id)_dlInternal;
-(id)_cfInternal;
-(void)_suspendLoading;
-(void)_resumeLoading;
-(id)_initWithRequest:(id)arg1 delegate:(id)arg2 usesCache:(BOOL)arg3 maxContentLength:(long long)arg4 startImmediately:(BOOL)arg5 connectionProperties:(id)arg6 ;
-(id)_timingData;
@end

