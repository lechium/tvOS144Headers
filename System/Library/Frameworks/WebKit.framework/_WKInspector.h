/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:57 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class WKWebView, NSString;

@interface _WKInspector : NSObject <WKObject> {

	ObjectStorage<WebKit::WebInspectorProxy> _inspector;

}

@property (nonatomic,readonly) WKWebView * webView; 
@property (nonatomic,readonly) BOOL isConnected; 
@property (nonatomic,readonly) BOOL isVisible; 
@property (nonatomic,readonly) BOOL isFront; 
@property (nonatomic,readonly) BOOL isProfilingPage; 
@property (nonatomic,readonly) BOOL isElementSelectionActive; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)close;
-(void)connect;
-(BOOL)isConnected;
-(BOOL)isVisible;
-(void)show;
-(void)detach;
-(WKWebView *)webView;
-(void)showConsole;
-(void)attach;
-(Object*)_apiObject;
-(void)_setDiagnosticLoggingDelegate:(id)arg1 ;
-(id)inspectorWebView;
-(BOOL)isFront;
-(BOOL)isProfilingPage;
-(BOOL)isElementSelectionActive;
-(void)hide;
-(void)showResources;
-(void)showMainResourceForFrame:(id)arg1 ;
-(void)togglePageProfiling;
-(void)toggleElementSelection;
-(void)printErrorToConsole:(id)arg1 ;
-(void)_browserExtensionsEnabled:(id)arg1 ;
-(void)_browserExtensionsDisabled:(id)arg1 ;
@end

