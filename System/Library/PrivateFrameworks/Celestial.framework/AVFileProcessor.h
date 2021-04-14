/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface AVFileProcessor : NSObject {

	float _percentComplete;
	/*^block*/id _progressBlock;

}
+(id)fileProcessor;
-(void)dealloc;
-(id)processPurchasedItem:(id)arg1 withAttributes:(id)arg2 resultInfo:(id*)arg3 progressBlock:(/*^block*/id)arg4 ;
-(id)processPurchasedItem:(id)arg1 withAttributes:(id)arg2 ;
-(id)processPurchasedItem:(id)arg1 withAttributes:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id)processPurchasedItem:(id)arg1 withAttributes:(id)arg2 resultInfo:(id*)arg3 ;
-(id)rentalInfo:(id)arg1 ;
-(id)sinfsFromFilePath:(id)arg1 ;
-(id)sinfInfoFromFilePath:(id)arg1 ;
@end

