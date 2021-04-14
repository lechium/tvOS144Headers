/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/ICRequestOperation.h>

@class ICStoreRequestContext;

@interface ICSagaGetAccountStatusRequest : ICRequestOperation {

	ICStoreRequestContext* _storeRequestContext;
	BOOL _isEnabled;
	BOOL _canSubscribe;
	BOOL _isSubscriber;

}
-(void)execute;
-(void)performRequestWithResponseHandler:(/*^block*/id)arg1 ;
-(id)initWithStoreRequestContext:(id)arg1 ;
@end

