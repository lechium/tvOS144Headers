/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CLSilo;

@interface CLServiceVendorHeartbeatRecord : NSObject {

	int _synCount;
	int _ackCount;
	int _residentCount;
	CLSilo* _silo;
	Class _svcClass;

}

@property (nonatomic,readonly) CLSilo * silo;                //@synthesize silo=_silo - In the implementation block
@property (nonatomic,readonly) Class svcClass;               //@synthesize svcClass=_svcClass - In the implementation block
@property (assign,nonatomic) int residentCount;              //@synthesize residentCount=_residentCount - In the implementation block
@property (nonatomic,readonly) int synCount;                 //@synthesize synCount=_synCount - In the implementation block
@property (nonatomic,readonly) int ackCount;                 //@synthesize ackCount=_ackCount - In the implementation block
-(void)ack;
-(CLSilo *)silo;
-(id)initTrackingServiceClass:(Class)arg1 ;
-(void)syn;
-(Class)svcClass;
-(int)residentCount;
-(void)setResidentCount:(int)arg1 ;
-(int)synCount;
-(int)ackCount;
@end

