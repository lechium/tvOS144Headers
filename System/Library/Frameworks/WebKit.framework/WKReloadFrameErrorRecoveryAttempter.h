/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/_WKErrorRecoveryAttempting.h>

@class NSString;

@interface WKReloadFrameErrorRecoveryAttempter : NSObject <_WKErrorRecoveryAttempting> {

	WeakObjCPtr<WKWebView> _webView;
	RetainPtr<_WKFrameHandle>* _frameHandle;
	String* _urlString;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithWebView:(id)arg1 frameHandle:(id)arg2 urlString:(const String*)arg3 ;
-(BOOL)attemptRecovery;
@end

