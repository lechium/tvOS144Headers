/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray;

@interface AMSPromiseCompletionBlocks : NSObject {

	NSMutableArray* _completionBlocks;
	BOOL _shouldCallImmediately;

}
-(id)init;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(void)addCompletionBlock:(/*^block*/id)arg1 ;
-(void)addErrorBlock:(/*^block*/id)arg1 ;
-(void)callErrorBlock:(/*^block*/id)arg1 withPromiseResult:(id)arg2 ;
-(void)callCompletionBlock:(/*^block*/id)arg1 withPromiseResult:(id)arg2 ;
-(void)callSuccessBlock:(/*^block*/id)arg1 withPromiseResult:(id)arg2 ;
-(void)flushCompletionBlocksWithPromiseResult:(id)arg1 ;
@end

