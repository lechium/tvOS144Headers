/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <USDKit/USDKit-Structs.h>
#import <USDKit/USKIterator.h>

@interface USKNodeSubtreeIterator : NSObject <USKIterator> {

	UsdPrimRange* _range;
	iterator* _it;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)nextObject;
-(id)initWithScene:(const TfWeakPtr<pxrInternal_v0_20__pxrReserved__usdkit__::UsdStage>*)arg1 ;
-(id)initWithScene:(const TfWeakPtr<pxrInternal_v0_20__pxrReserved__usdkit__::UsdStage>*)arg1 withPredicate:(Usd_PrimFlagsPredicate)arg2 ;
-(id)initWithPrim:(const UsdPrim*)arg1 ;
-(id)initWithPrim:(const UsdPrim*)arg1 withPredicate:(Usd_PrimFlagsPredicate)arg2 ;
-(id)initWithSubtreeRange:(const UsdPrimRange*)arg1 ;
@end

