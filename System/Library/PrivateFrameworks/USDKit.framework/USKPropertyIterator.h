/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <USDKit/USDKit-Structs.h>
#import <USDKit/USKIterator.h>

@interface USKPropertyIterator : NSObject <USKIterator> {

	vector<pxrInternal_v0_20__pxrReserved__usdkit__::UsdProperty, std::__1::allocator<pxrInternal_v0_20__pxrReserved__usdkit__::UsdProperty> >* _properties;
	wrap_iter<pxrInternal_v0_20__pxrReserved__usdkit__::UsdProperty *>* _it;

}
-(id)nextObject;
-(id)initWithProperties:(const vector<pxrInternal_v0_20__pxrReserved__usdkit__::UsdProperty, std::__1::allocator<pxrInternal_v0_20__pxrReserved__usdkit__::UsdProperty> >*)arg1 ;
@end
