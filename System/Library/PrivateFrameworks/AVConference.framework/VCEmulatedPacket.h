/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface VCEmulatedPacket : NSObject {

	unsigned _packetID;
	unsigned _size;
	unsigned _sequenceNumber;
	double _arrivalTime;
	double _networkServiceTime;
	double _departureTime;
	BOOL _isLost;
	unsigned char _datagram[1500];
	void* _metaData;
	long long _type;

}

@property (nonatomic,readonly) unsigned packetID;                    //@synthesize packetID=_packetID - In the implementation block
@property (assign,nonatomic) unsigned size;                          //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) unsigned sequenceNumber;                //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (assign,nonatomic) double arrivalTime;                     //@synthesize arrivalTime=_arrivalTime - In the implementation block
@property (assign,nonatomic) double networkServiceTime;              //@synthesize networkServiceTime=_networkServiceTime - In the implementation block
@property (assign,nonatomic) double departureTime;                   //@synthesize departureTime=_departureTime - In the implementation block
@property (assign,nonatomic) BOOL isLost;                            //@synthesize isLost=_isLost - In the implementation block
@property (assign,nonatomic) void* metaData;                         //@synthesize metaData=_metaData - In the implementation block
@property (assign,nonatomic) long long type;                         //@synthesize type=_type - In the implementation block
-(unsigned)size;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(unsigned)sequenceNumber;
-(void)setSize:(unsigned)arg1 ;
-(void)setSequenceNumber:(unsigned)arg1 ;
-(void)setDepartureTime:(double)arg1 ;
-(double)departureTime;
-(double)arrivalTime;
-(void)setArrivalTime:(double)arg1 ;
-(void*)metaData;
-(void)setMetaData:(void*)arg1 ;
-(BOOL)isLost;
-(double)networkServiceTime;
-(unsigned)packetID;
-(id)initWithPacketID:(unsigned)arg1 ;
-(id)initWithPacketID:(unsigned)arg1 datagram:(char*)arg2 datagramSize:(unsigned)arg3 ;
-(void)setNetworkServiceTime:(double)arg1 ;
-(void)setIsLost:(BOOL)arg1 ;
@end

