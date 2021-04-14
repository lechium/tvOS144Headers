/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libTelephonyUtilDynamic.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libTelephonyUtilDynamic.dylib/libTelephonyUtilDynamic.dylib-Structs.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@class NSString;

@interface URLSessionDelegate : NSObject <NSURLSessionTaskDelegate, NSURLSessionDataDelegate> {

	map<unsigned long, std::__1::shared_ptr<SessionTaskContext>, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::shared_ptr<SessionTaskContext> > > >* fTaskHandlers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)removeCallbackFor:(long long)arg1 ;
-(void)addCallbackHandler:(shared_ptr<ctu::Http::HttpRequestCallbackHandler>*)arg1 for:(long long)arg2 ;
-(shared_ptr<SessionTaskContext>*)getContext:(long long)arg1 ;
@end

