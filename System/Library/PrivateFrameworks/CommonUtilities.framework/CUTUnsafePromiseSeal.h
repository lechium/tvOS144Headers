/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CUTUnsafePromise;

@interface CUTUnsafePromiseSeal : NSObject {

	CUTUnsafePromise* _promise;

}

@property (nonatomic,retain) CUTUnsafePromise * promise;              //@synthesize promise=_promise - In the implementation block
-(id)init;
-(void)failWithError:(id)arg1 ;
-(CUTUnsafePromise *)promise;
-(void)fulfillWithValue:(id)arg1 ;
-(void)setPromise:(CUTUnsafePromise *)arg1 ;
@end

