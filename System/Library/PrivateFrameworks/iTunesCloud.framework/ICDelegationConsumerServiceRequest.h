/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ICRequestContext, NSDictionary;

@interface ICDelegationConsumerServiceRequest : NSObject {

	ICRequestContext* _requestContext;
	double _timeoutInterval;
	NSDictionary* _userIdentityDelegationAccountUUIDs;

}

@property (nonatomic,copy,readonly) ICRequestContext * requestContext;                              //@synthesize requestContext=_requestContext - In the implementation block
@property (nonatomic,readonly) double timeoutInterval;                                              //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * userIdentityDelegationAccountUUIDs;              //@synthesize userIdentityDelegationAccountUUIDs=_userIdentityDelegationAccountUUIDs - In the implementation block
-(double)timeoutInterval;
-(ICRequestContext *)requestContext;
-(NSDictionary *)userIdentityDelegationAccountUUIDs;
-(id)initWithUserIdentityDelegationAccountUUIDs:(id)arg1 requestContext:(id)arg2 timeoutInterval:(double)arg3 ;
@end

