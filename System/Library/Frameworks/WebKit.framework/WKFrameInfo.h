/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _WKFrameHandle, NSURLRequest, WKSecurityOrigin, WKWebView, NSString;

@interface WKFrameInfo : NSObject <WKObject, NSCopying> {

	ObjectStorage<API::FrameInfo> _frameInfo;

}

@property (nonatomic,copy,readonly) _WKFrameHandle * _handle; 
@property (nonatomic,copy,readonly) _WKFrameHandle * _parentFrameHandle; 
@property (getter=isMainFrame,nonatomic,readonly) BOOL mainFrame; 
@property (nonatomic,copy,readonly) NSURLRequest * request; 
@property (nonatomic,readonly) WKSecurityOrigin * securityOrigin; 
@property (nonatomic,__weak,readonly) WKWebView * webView; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)dealloc;
-(NSURLRequest *)request;
-(_WKFrameHandle *)_handle;
-(WKWebView *)webView;
-(Object*)_apiObject;
-(BOOL)isMainFrame;
-(WKSecurityOrigin *)securityOrigin;
-(_WKFrameHandle *)_parentFrameHandle;
@end

