/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface TSMTIEMaskError : NSObject {

	double _observationInterval;
	double _mask;
	double _mtie;

}

@property (assign,nonatomic) double observationInterval;              //@synthesize observationInterval=_observationInterval - In the implementation block
@property (assign,nonatomic) double mask;                             //@synthesize mask=_mask - In the implementation block
@property (assign,nonatomic) double mtie;                             //@synthesize mtie=_mtie - In the implementation block
-(id)description;
-(double)mask;
-(void)setMask:(double)arg1 ;
-(double)observationInterval;
-(double)mtie;
-(void)setObservationInterval:(double)arg1 ;
-(void)setMtie:(double)arg1 ;
@end

