/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPaymentCredentialMetadata.h>

@class NSString;

@interface PKPaymentCredentialMetadataCurrency : PKPaymentCredentialMetadata {

	NSString* _currencyCode;

}

@property (nonatomic,copy,readonly) NSString * currencyCode;              //@synthesize currencyCode=_currencyCode - In the implementation block
-(NSString *)currencyCode;
-(id)initWithConfiguration:(id)arg1 ;
-(id)displayString;
@end
