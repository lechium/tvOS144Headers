/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:19:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSURLAuthenticationChallengeSender.h>

@class NSURLDownloadInternal, NSString, NSURLRequest, NSData;

@interface NSURLDownload : NSObject <NSURLAuthenticationChallengeSender> {

	NSURLDownloadInternal* _internal;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSURLRequest * request; 
@property (copy,readonly) NSData * resumeData; 
@property (assign) BOOL deletesFileUponFailure; 
+(id)_downloadWithLoadingConnection:(id)arg1 request:(id)arg2 response:(id)arg3 delegate:(id)arg4 proxy:(id)arg5 ;
+(id)_downloadWithLoadingCFURLConnection:(CFURLConnectionRef)arg1 request:(CFURLRequestRef)arg2 response:(CFURLResponseRef)arg3 delegate:(id)arg4 proxy:(id)arg5 ;
+(id)_downloadWithRequest:(id)arg1 delegate:(id)arg2 directory:(id)arg3 ;
+(BOOL)canResumeDownloadDecodedWithEncodingMIMEType:(id)arg1 ;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(NSURLRequest *)request;
-(NSData *)resumeData;
-(void)cancel;
-(void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2 ;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1 ;
-(void)cancelAuthenticationChallenge:(id)arg1 ;
-(id)initWithRequest:(id)arg1 delegate:(id)arg2 ;
-(void)_setDelegateQueue:(id)arg1 ;
-(id)url;
-(id)_initWithLoadingConnection:(id)arg1 request:(id)arg2 response:(id)arg3 delegate:(id)arg4 proxy:(id)arg5 ;
-(id)_initWithLoadingCFURLConnection:(CFURLConnectionRef)arg1 request:(CFURLRequestRef)arg2 response:(CFURLResponseRef)arg3 delegate:(id)arg4 proxy:(id)arg5 ;
-(id)_initWithRequest:(id)arg1 delegate:(id)arg2 directory:(id)arg3 ;
-(id)_initWithResumeInformation:(id)arg1 delegate:(id)arg2 path:(id)arg3 ;
-(id)initWithResumeData:(id)arg1 delegate:(id)arg2 path:(id)arg3 ;
-(id)_resumeInformation;
-(void)setDestination:(id)arg1 allowOverwrite:(BOOL)arg2 ;
-(void)setDeletesFileUponFailure:(BOOL)arg1 ;
-(BOOL)deletesFileUponFailure;
-(id)_directoryPath;
-(void)_setDelegate:(id)arg1 ;
-(void)_setDirectoryPath:(id)arg1 ;
-(void)withDelegate:(/*^block*/id)arg1 ;
@end

