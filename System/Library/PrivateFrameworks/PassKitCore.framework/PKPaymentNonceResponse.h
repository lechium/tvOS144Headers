/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPaymentAugmentBaseResponse.h>

@class NSData;

@interface PKPaymentNonceResponse : PKPaymentAugmentBaseResponse {

	NSData* _nonceData;

}

@property (nonatomic,copy) NSData * nonceData;              //@synthesize nonceData=_nonceData - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSData *)nonceData;
-(void)setNonceData:(NSData *)arg1 ;
@end

