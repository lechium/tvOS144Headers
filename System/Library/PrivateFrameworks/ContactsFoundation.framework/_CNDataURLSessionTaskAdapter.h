/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:01 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@class NSString;

@interface _CNDataURLSessionTaskAdapter : NSObject <NSURLSessionDataDelegate> {

	/*^block*/id _onDataReceived;
	/*^block*/id _onCompletion;

}

@property (copy) id onDataReceived;                                 //@synthesize onDataReceived=_onDataReceived - In the implementation block
@property (copy) id onCompletion;                                   //@synthesize onCompletion=_onCompletion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)setOnDataReceived:(id)arg1 ;
-(void)setOnCompletion:(id)arg1 ;
-(id)onDataReceived;
-(id)onCompletion;
@end

