/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSArray;

@interface PKPaymentBrowseableBankAppsResponse : PKPaymentWebServiceResponse {

	NSArray* _browseableBankApps;

}

@property (nonatomic,copy,readonly) NSArray * browseableBankApps;              //@synthesize browseableBankApps=_browseableBankApps - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSArray *)browseableBankApps;
@end

