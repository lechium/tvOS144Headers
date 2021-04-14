/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:14 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PKBusinessChatContext.h>

@class PKAccount, PKPaymentPass, NSString;

@interface PKBusinessChatAccountStateContext : NSObject <PKBusinessChatContext> {

	PKAccount* _account;
	PKPaymentPass* _paymentPass;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)requiresAuthorization;
-(id)bodyText;
-(id)initWithAccount:(id)arg1 paymentPass:(id)arg2 ;
-(id)businessIdentifier;
-(id)intentParameters;
-(id)groupParameters;
@end
