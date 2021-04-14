/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/RWIProtocolNetworkDomainHandler.h>

@class NSMutableDictionary, IKJSInspectorController, NSString;

@interface IKJSInspectorNetworkAgent : NSObject <RWIProtocolNetworkDomainHandler> {

	NSMutableDictionary* _loaders;
	IKJSInspectorController* _controller;

}

@property (nonatomic,__weak,readonly) IKJSInspectorController * controller;              //@synthesize controller=_controller - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IKJSInspectorController *)controller;
-(void)enableWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 ;
-(void)disableWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 ;
-(void)setExtraHTTPHeadersWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 headers:(id)arg3 ;
-(void)getResponseBodyWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 requestId:(id)arg3 ;
-(void)setResourceCachingDisabledWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 disabled:(BOOL)arg3 ;
-(void)loadResourceWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 frameId:(id)arg3 url:(id)arg4 ;
-(void)getSerializedCertificateWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 requestId:(id)arg3 ;
-(void)resolveWebSocketWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 requestId:(id)arg3 objectGroup:(id*)arg4 ;
-(void)setInterceptionEnabledWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 enabled:(BOOL)arg3 ;
-(void)interceptWithResponseWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 requestId:(id)arg3 content:(id)arg4 base64Encoded:(BOOL)arg5 mimeType:(id*)arg6 status:(int*)arg7 statusText:(id*)arg8 headers:(id*)arg9 ;
-(void)unregisterLoaderWithIdentifier:(id)arg1 ;
-(id)registerLoaderWithIdentifier:(id)arg1 ;
-(id)initWithInspectorController:(id)arg1 ;
-(void)clearAllTrackedLoaders;
-(void)addInterceptionWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 url:(id)arg3 stage:(long long*)arg4 ;
-(void)removeInterceptionWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 url:(id)arg3 stage:(long long*)arg4 ;
-(void)interceptContinueWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 requestId:(id)arg3 ;
@end

