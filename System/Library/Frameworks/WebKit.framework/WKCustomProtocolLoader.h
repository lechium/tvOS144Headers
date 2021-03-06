/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/NSURLConnectionDelegate.h>

@class NSURLConnection, NSString;

@interface WKCustomProtocolLoader : NSObject <NSURLConnectionDelegate> {

	WeakPtr<WebKit::LegacyCustomProtocolManagerProxy, WTF::EmptyCounter>* _customProtocolManagerProxy;
	ObjectIdentifier<WebKit::LegacyCustomProtocolIDType> _customProtocolID;
	unsigned long long _storagePolicy;
	NSURLConnection* _urlConnection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)cancel;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(id)connection:(id)arg1 willCacheResponse:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(id)initWithLegacyCustomProtocolManagerProxy:(LegacyCustomProtocolManagerProxy*)arg1 customProtocolID:(ObjectIdentifier<WebKit::LegacyCustomProtocolIDType>)arg2 request:(id)arg3 ;
@end

