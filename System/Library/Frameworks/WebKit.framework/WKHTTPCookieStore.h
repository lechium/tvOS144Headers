/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString;

@interface WKHTTPCookieStore : NSObject <WKObject> {

	ObjectStorage<API::HTTPCookieStore> _cookieStore;
	HashMap<const void *, std::__1::unique_ptr<WKHTTPCookieStoreObserver, std::__1::default_delete<WKHTTPCookieStoreObserver> >, WTF::DefaultHash<const void *>, WTF::HashTraits<const void *>, WTF::HashTraits<std::__1::unique_ptr<WKHTTPCookieStoreObserver, std::__1::default_delete<WKHTTPCookieStoreObserver> > > >* _observers;

}

@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(Object*)_apiObject;
-(void)getAllCookies:(/*^block*/id)arg1 ;
-(void)setCookie:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteCookie:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_getCookiesForURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

