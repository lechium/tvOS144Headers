/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class NSArray;

@interface PKAccountWebServicePaymentsResponse : PKAccountWebServiceResponse {

	NSArray* _payments;

}

@property (nonatomic,copy,readonly) NSArray * payments;              //@synthesize payments=_payments - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSArray *)payments;
-(id)initWithData:(id)arg1 account:(id)arg2 ;
@end

