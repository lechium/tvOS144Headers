/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/WKNavigationDelegate.h>
#import <libobjc.A.dylib/IAMWebProcessDelegate.h>

@protocol IAMWebProcessProxy, IAMWebMessageControllerDelegate;
@class _WKRemoteObjectInterface, ICInAppMessageEntry, IAMWebView, NSArray, NSString;

@interface IAMWebMessageController : NSObject <WKNavigationDelegate, IAMWebProcessDelegate> {

	id<IAMWebProcessProxy> _webProcessProxy;
	_WKRemoteObjectInterface* _remoteObjectInterface;
	ICInAppMessageEntry* _messageEntry;
	BOOL _isGlobalJSOAvailable;
	BOOL _didMainNavigationFinish;
	BOOL _hasSentContentPages;
	IAMWebView* _webView;
	id<IAMWebMessageControllerDelegate> _delegate;
	NSArray* _contentPages;
	/*^block*/id _loadCompletion;

}

@property (nonatomic,retain) NSArray * contentPages;                                           //@synthesize contentPages=_contentPages - In the implementation block
@property (nonatomic,copy) id loadCompletion;                                                  //@synthesize loadCompletion=_loadCompletion - In the implementation block
@property (nonatomic,readonly) IAMWebView * webView;                                           //@synthesize webView=_webView - In the implementation block
@property (assign,nonatomic,__weak) id<IAMWebMessageControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<IAMWebMessageControllerDelegate>)delegate;
-(void)setDelegate:(id<IAMWebMessageControllerDelegate>)arg1 ;
-(IAMWebView *)webView;
-(void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 ;
-(NSArray *)contentPages;
-(void)setContentPages:(NSArray *)arg1 ;
-(void)setLoadCompletion:(id)arg1 ;
-(id)loadCompletion;
-(void)loadMessageFromMessageEntry:(id)arg1 withWebArchiveURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)unregisterExportedObjectInterface;
-(void)webProcessPlugInDidCreateBrowserContextController;
-(void)webProcessPlugInWillDestroyBrowserContextController;
-(void)webProcessPlugInBrowserContextControllerGlobalObjectIsAvailableForFrame;
-(void)webProcessJSODidReportEvent:(id)arg1 ;
-(void)webProcessJSODidCallPerformAction:(id)arg1 options:(id)arg2 ;
-(void)webProcessJSODidCallOpen:(id)arg1 options:(id)arg2 ;
-(void)webProcessJSODidCallClose;
-(void)_callLoadCompletionWithError:(id)arg1 ;
-(void)_createJSOContentPages:(id)arg1 fromMessageEntry:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)_checkReadyForLoadCompletion;
@end

