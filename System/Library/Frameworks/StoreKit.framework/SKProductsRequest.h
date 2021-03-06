/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKit/SKRequest.h>

@interface SKProductsRequest : SKRequest {

	id _productsRequestInternal;

}

@property (assign,nonatomic,__weak) id<SKProductsRequestDelegate> delegate; 
-(id)init;
-(void)_start;
-(void)_startWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithProductIdentifiers:(id)arg1 ;
-(id)_newResponseForProducts:(id)arg1 invalidIdentifiers:(id)arg2 ;
@end

