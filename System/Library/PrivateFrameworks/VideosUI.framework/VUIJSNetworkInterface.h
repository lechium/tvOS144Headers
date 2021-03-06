/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/VUIJSNetworkInterface.h>

@protocol VUIJSNetworkInterface <JSExport>
@required
-(void)cancelRequest:(id)arg1;
-(id)makeRequest:(id)arg1 :(id)arg2;
-(void)fetchConfiguration:(BOOL)arg1 :(id)arg2;
-(void)invalidateConfiguration;
-(id)makeUpNextRequest:(id)arg1 :(id)arg2;

@end


@interface VUIJSNetworkInterface : IKJSObject <VUIJSNetworkInterface> {

	int _playbackReportToken;
	BOOL _suppressServerConfigNotifications;

}

@property (assign) BOOL suppressServerConfigNotifications;              //@synthesize suppressServerConfigNotifications=_suppressServerConfigNotifications - In the implementation block
-(void)dealloc;
-(void)cancelRequest:(id)arg1 ;
-(id)initWithAppContext:(id)arg1 ;
-(void)AMSURLSession:(id)arg1 task:(id)arg2 handleDialogRequest:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_handleAppLibChange:(id)arg1 ;
-(void)_handleServerConfigChange:(id)arg1 ;
-(long long)_requestOptionsFromJSOptions:(id)arg1 ;
-(void)_enqueueNetworkOp:(id)arg1 withJSCallback:(id)arg2 ;
-(void)setSuppressServerConfigNotifications:(BOOL)arg1 ;
-(id)makeRequest:(id)arg1 :(id)arg2 ;
-(void)fetchConfiguration:(BOOL)arg1 :(id)arg2 ;
-(void)invalidateConfiguration;
-(BOOL)suppressServerConfigNotifications;
-(id)makeUpNextRequest:(id)arg1 :(id)arg2 ;
@end

