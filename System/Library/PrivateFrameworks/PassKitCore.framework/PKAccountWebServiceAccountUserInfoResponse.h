/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class CNContact;

@interface PKAccountWebServiceAccountUserInfoResponse : PKAccountWebServiceResponse {

	CNContact* _userInfo;

}

@property (nonatomic,readonly) CNContact * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
-(CNContact *)userInfo;
-(id)initWithData:(id)arg1 ;
-(id)_stringValueFromDictionary:(id)arg1 key:(id)arg2 isOptional:(BOOL)arg3 ;
@end

