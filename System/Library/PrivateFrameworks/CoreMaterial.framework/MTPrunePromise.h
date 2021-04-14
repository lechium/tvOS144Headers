/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:08 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class MTMaterialLayer, NSDate;

@interface MTPrunePromise : NSObject {

	MTMaterialLayer* _materialLayer;
	NSDate* _timeStamp;
	BOOL _promiseFulfilled;

}

@property (assign,getter=isPromiseFulfilled,nonatomic) BOOL promiseFulfilled;              //@synthesize promiseFulfilled=_promiseFulfilled - In the implementation block
-(void)dealloc;
-(id)initWithMaterialLayer:(id)arg1 ;
-(void)fulfillPromise;
-(double)timeIntervalSincePromise;
-(BOOL)isPromiseFulfilled;
-(void)setPromiseFulfilled:(BOOL)arg1 ;
@end
