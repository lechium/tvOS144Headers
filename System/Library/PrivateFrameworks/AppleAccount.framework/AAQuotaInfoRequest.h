/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleAccount/AARequest.h>

@class ACAccount;

@interface AAQuotaInfoRequest : AARequest {

	BOOL _isDetailedRequest;
	ACAccount* _account;

}

@property (nonatomic,readonly) ACAccount * account;              //@synthesize account=_account - In the implementation block
+(Class)responseClass;
-(id)initWithAccount:(id)arg1 ;
-(id)urlString;
-(ACAccount *)account;
-(id)urlRequest;
-(id)initDetailedRequestWithAccount:(id)arg1 ;
@end

