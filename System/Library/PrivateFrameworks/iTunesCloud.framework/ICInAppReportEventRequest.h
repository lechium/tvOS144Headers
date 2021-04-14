/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/ICRequestOperation.h>

@class ICStoreRequestContext, NSString, NSDictionary;

@interface ICInAppReportEventRequest : ICRequestOperation {

	ICStoreRequestContext* _storeRequestContext;
	NSString* _messageIdentifier;
	NSDictionary* _params;

}
-(void)execute;
-(id)initWithStoreRequestContext:(id)arg1 messageIdentifier:(id)arg2 params:(id)arg3 ;
-(void)performRequestWithResponseHandler:(/*^block*/id)arg1 ;
@end

