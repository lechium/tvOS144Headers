/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:56 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <WebKit/WebKit-Structs.h>
@class WKWebView, WKFrameInfo, NSString, WKContentWorld;

@interface WKScriptMessage : NSObject {

	RetainPtr<id>* _body;
	WeakObjCPtr<WKWebView> _webView;
	RetainPtr<WKFrameInfo>* _frameInfo;
	RetainPtr<NSString>* _name;
	RetainPtr<WKContentWorld>* _world;

}

@property (nonatomic,copy,readonly) id body; 
@property (nonatomic,__weak,readonly) WKWebView * webView; 
@property (nonatomic,copy,readonly) WKFrameInfo * frameInfo; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) WKContentWorld * world; 
-(NSString *)name;
-(id)body;
-(WKWebView *)webView;
-(WKContentWorld *)world;
-(id)_initWithBody:(id)arg1 webView:(id)arg2 frameInfo:(id)arg3 name:(id)arg4 world:(id)arg5 ;
-(WKFrameInfo *)frameInfo;
@end

