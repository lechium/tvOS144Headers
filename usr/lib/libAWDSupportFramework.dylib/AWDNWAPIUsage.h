/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDNWAPIUsage : PBCodable <NSCopying> {

	long long _ifFltrAttach;
	long long _ifFltrAttachOs;
	long long _ifnetAlloc;
	long long _ifnetAllocOs;
	long long _ipFltrAdd;
	long long _ipFltrAddOs;
	long long _nexusFlowInet6Datagram;
	long long _nexusFlowInet6Stream;
	long long _nexusFlowInetDatagram;
	long long _nexusFlowInetStream;
	long long _pfAddrule;
	long long _pfAddruleOs;
	long long _sockAlloc;
	long long _sockAllocKernel;
	long long _sockAllocKernelOs;
	long long _sockDomainInet;
	long long _sockDomainInet6;
	long long _sockDomainKey;
	long long _sockDomainLocal;
	long long _sockDomainMultipath;
	long long _sockDomainNdrv;
	long long _sockDomainOther;
	long long _sockDomainRoute;
	long long _sockDomainSystem;
	long long _sockFltrRegister;
	long long _sockFltrRegisterOs;
	long long _sockInetMcastJoin;
	long long _sockInetMcastJoinOs;
	long long _sockNecpClientuuidCount;
	long long _sockNetInet6Dgram;
	long long _sockNetInet6DgramConnected;
	long long _sockNetInet6DgramDns;
	long long _sockNetInet6DgramNoData;
	long long _sockNetInet6Stream;
	long long _sockNetInetDgram;
	long long _sockNetInetDgramConnected;
	long long _sockNetInetDgramDns;
	long long _sockNetInetDgramNoData;
	long long _sockNetInetStream;
	unsigned long long _timeSinceLastReport;
	unsigned long long _timestamp;
	long long _vmnetStart;
	BOOL _ifNetagentEnabled;
	SCD_Struct_AW28 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasIfFltrAttach; 
@property (assign,nonatomic) long long ifFltrAttach;                              //@synthesize ifFltrAttach=_ifFltrAttach - In the implementation block
@property (assign,nonatomic) BOOL hasIfFltrAttachOs; 
@property (assign,nonatomic) long long ifFltrAttachOs;                            //@synthesize ifFltrAttachOs=_ifFltrAttachOs - In the implementation block
@property (assign,nonatomic) BOOL hasIpFltrAdd; 
@property (assign,nonatomic) long long ipFltrAdd;                                 //@synthesize ipFltrAdd=_ipFltrAdd - In the implementation block
@property (assign,nonatomic) BOOL hasIpFltrAddOs; 
@property (assign,nonatomic) long long ipFltrAddOs;                               //@synthesize ipFltrAddOs=_ipFltrAddOs - In the implementation block
@property (assign,nonatomic) BOOL hasSockFltrRegister; 
@property (assign,nonatomic) long long sockFltrRegister;                          //@synthesize sockFltrRegister=_sockFltrRegister - In the implementation block
@property (assign,nonatomic) BOOL hasSockFltrRegisterOs; 
@property (assign,nonatomic) long long sockFltrRegisterOs;                        //@synthesize sockFltrRegisterOs=_sockFltrRegisterOs - In the implementation block
@property (assign,nonatomic) BOOL hasSockAlloc; 
@property (assign,nonatomic) long long sockAlloc;                                 //@synthesize sockAlloc=_sockAlloc - In the implementation block
@property (assign,nonatomic) BOOL hasSockAllocKernel; 
@property (assign,nonatomic) long long sockAllocKernel;                           //@synthesize sockAllocKernel=_sockAllocKernel - In the implementation block
@property (assign,nonatomic) BOOL hasSockAllocKernelOs; 
@property (assign,nonatomic) long long sockAllocKernelOs;                         //@synthesize sockAllocKernelOs=_sockAllocKernelOs - In the implementation block
@property (assign,nonatomic) BOOL hasSockNecpClientuuidCount; 
@property (assign,nonatomic) long long sockNecpClientuuidCount;                   //@synthesize sockNecpClientuuidCount=_sockNecpClientuuidCount - In the implementation block
@property (assign,nonatomic) BOOL hasSockDomainLocal; 
@property (assign,nonatomic) long long sockDomainLocal;                           //@synthesize sockDomainLocal=_sockDomainLocal - In the implementation block
@property (assign,nonatomic) BOOL hasSockDomainRoute; 
@property (assign,nonatomic) long long sockDomainRoute;                           //@synthesize sockDomainRoute=_sockDomainRoute - In the implementation block
@property (assign,nonatomic) BOOL hasSockDomainInet; 
@property (assign,nonatomic) long long sockDomainInet;                            //@synthesize sockDomainInet=_sockDomainInet - In the implementation block
@property (assign,nonatomic) BOOL hasSockDomainInet6; 
@property (assign,nonatomic) long long sockDomainInet6;                           //@synthesize sockDomainInet6=_sockDomainInet6 - In the implementation block
@property (assign,nonatomic) BOOL hasSockDomainSystem; 
@property (assign,nonatomic) long long sockDomainSystem;                          //@synthesize sockDomainSystem=_sockDomainSystem - In the implementation block
@property (assign,nonatomic) BOOL hasSockDomainMultipath; 
@property (assign,nonatomic) long long sockDomainMultipath;                       //@synthesize sockDomainMultipath=_sockDomainMultipath - In the implementation block
@property (assign,nonatomic) BOOL hasSockDomainKey; 
@property (assign,nonatomic) long long sockDomainKey;                             //@synthesize sockDomainKey=_sockDomainKey - In the implementation block
@property (assign,nonatomic) BOOL hasSockDomainNdrv; 
@property (assign,nonatomic) long long sockDomainNdrv;                            //@synthesize sockDomainNdrv=_sockDomainNdrv - In the implementation block
@property (assign,nonatomic) BOOL hasSockDomainOther; 
@property (assign,nonatomic) long long sockDomainOther;                           //@synthesize sockDomainOther=_sockDomainOther - In the implementation block
@property (assign,nonatomic) BOOL hasSockNetInetStream; 
@property (assign,nonatomic) long long sockNetInetStream;                         //@synthesize sockNetInetStream=_sockNetInetStream - In the implementation block
@property (assign,nonatomic) BOOL hasSockNetInetDgram; 
@property (assign,nonatomic) long long sockNetInetDgram;                          //@synthesize sockNetInetDgram=_sockNetInetDgram - In the implementation block
@property (assign,nonatomic) BOOL hasSockNetInetDgramConnected; 
@property (assign,nonatomic) long long sockNetInetDgramConnected;                 //@synthesize sockNetInetDgramConnected=_sockNetInetDgramConnected - In the implementation block
@property (assign,nonatomic) BOOL hasSockNetInetDgramDns; 
@property (assign,nonatomic) long long sockNetInetDgramDns;                       //@synthesize sockNetInetDgramDns=_sockNetInetDgramDns - In the implementation block
@property (assign,nonatomic) BOOL hasSockNetInetDgramNoData; 
@property (assign,nonatomic) long long sockNetInetDgramNoData;                    //@synthesize sockNetInetDgramNoData=_sockNetInetDgramNoData - In the implementation block
@property (assign,nonatomic) BOOL hasSockNetInet6Stream; 
@property (assign,nonatomic) long long sockNetInet6Stream;                        //@synthesize sockNetInet6Stream=_sockNetInet6Stream - In the implementation block
@property (assign,nonatomic) BOOL hasSockNetInet6Dgram; 
@property (assign,nonatomic) long long sockNetInet6Dgram;                         //@synthesize sockNetInet6Dgram=_sockNetInet6Dgram - In the implementation block
@property (assign,nonatomic) BOOL hasSockNetInet6DgramConnected; 
@property (assign,nonatomic) long long sockNetInet6DgramConnected;                //@synthesize sockNetInet6DgramConnected=_sockNetInet6DgramConnected - In the implementation block
@property (assign,nonatomic) BOOL hasSockNetInet6DgramDns; 
@property (assign,nonatomic) long long sockNetInet6DgramDns;                      //@synthesize sockNetInet6DgramDns=_sockNetInet6DgramDns - In the implementation block
@property (assign,nonatomic) BOOL hasSockNetInet6DgramNoData; 
@property (assign,nonatomic) long long sockNetInet6DgramNoData;                   //@synthesize sockNetInet6DgramNoData=_sockNetInet6DgramNoData - In the implementation block
@property (assign,nonatomic) BOOL hasSockInetMcastJoin; 
@property (assign,nonatomic) long long sockInetMcastJoin;                         //@synthesize sockInetMcastJoin=_sockInetMcastJoin - In the implementation block
@property (assign,nonatomic) BOOL hasSockInetMcastJoinOs; 
@property (assign,nonatomic) long long sockInetMcastJoinOs;                       //@synthesize sockInetMcastJoinOs=_sockInetMcastJoinOs - In the implementation block
@property (assign,nonatomic) BOOL hasNexusFlowInetStream; 
@property (assign,nonatomic) long long nexusFlowInetStream;                       //@synthesize nexusFlowInetStream=_nexusFlowInetStream - In the implementation block
@property (assign,nonatomic) BOOL hasNexusFlowInetDatagram; 
@property (assign,nonatomic) long long nexusFlowInetDatagram;                     //@synthesize nexusFlowInetDatagram=_nexusFlowInetDatagram - In the implementation block
@property (assign,nonatomic) BOOL hasNexusFlowInet6Stream; 
@property (assign,nonatomic) long long nexusFlowInet6Stream;                      //@synthesize nexusFlowInet6Stream=_nexusFlowInet6Stream - In the implementation block
@property (assign,nonatomic) BOOL hasNexusFlowInet6Datagram; 
@property (assign,nonatomic) long long nexusFlowInet6Datagram;                    //@synthesize nexusFlowInet6Datagram=_nexusFlowInet6Datagram - In the implementation block
@property (assign,nonatomic) BOOL hasIfnetAlloc; 
@property (assign,nonatomic) long long ifnetAlloc;                                //@synthesize ifnetAlloc=_ifnetAlloc - In the implementation block
@property (assign,nonatomic) BOOL hasIfnetAllocOs; 
@property (assign,nonatomic) long long ifnetAllocOs;                              //@synthesize ifnetAllocOs=_ifnetAllocOs - In the implementation block
@property (assign,nonatomic) BOOL hasPfAddrule; 
@property (assign,nonatomic) long long pfAddrule;                                 //@synthesize pfAddrule=_pfAddrule - In the implementation block
@property (assign,nonatomic) BOOL hasPfAddruleOs; 
@property (assign,nonatomic) long long pfAddruleOs;                               //@synthesize pfAddruleOs=_pfAddruleOs - In the implementation block
@property (assign,nonatomic) BOOL hasVmnetStart; 
@property (assign,nonatomic) long long vmnetStart;                                //@synthesize vmnetStart=_vmnetStart - In the implementation block
@property (assign,nonatomic) BOOL hasIfNetagentEnabled; 
@property (assign,nonatomic) BOOL ifNetagentEnabled;                              //@synthesize ifNetagentEnabled=_ifNetagentEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasTimeSinceLastReport; 
@property (assign,nonatomic) unsigned long long timeSinceLastReport;              //@synthesize timeSinceLastReport=_timeSinceLastReport - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setIfFltrAttach:(long long)arg1 ;
-(void)setHasIfFltrAttach:(BOOL)arg1 ;
-(BOOL)hasIfFltrAttach;
-(void)setIfFltrAttachOs:(long long)arg1 ;
-(void)setHasIfFltrAttachOs:(BOOL)arg1 ;
-(BOOL)hasIfFltrAttachOs;
-(void)setIpFltrAdd:(long long)arg1 ;
-(void)setHasIpFltrAdd:(BOOL)arg1 ;
-(BOOL)hasIpFltrAdd;
-(void)setIpFltrAddOs:(long long)arg1 ;
-(void)setHasIpFltrAddOs:(BOOL)arg1 ;
-(BOOL)hasIpFltrAddOs;
-(void)setSockFltrRegister:(long long)arg1 ;
-(void)setHasSockFltrRegister:(BOOL)arg1 ;
-(BOOL)hasSockFltrRegister;
-(void)setSockFltrRegisterOs:(long long)arg1 ;
-(void)setHasSockFltrRegisterOs:(BOOL)arg1 ;
-(BOOL)hasSockFltrRegisterOs;
-(void)setSockAlloc:(long long)arg1 ;
-(void)setHasSockAlloc:(BOOL)arg1 ;
-(BOOL)hasSockAlloc;
-(void)setSockAllocKernel:(long long)arg1 ;
-(void)setHasSockAllocKernel:(BOOL)arg1 ;
-(BOOL)hasSockAllocKernel;
-(void)setSockAllocKernelOs:(long long)arg1 ;
-(void)setHasSockAllocKernelOs:(BOOL)arg1 ;
-(BOOL)hasSockAllocKernelOs;
-(void)setSockNecpClientuuidCount:(long long)arg1 ;
-(void)setHasSockNecpClientuuidCount:(BOOL)arg1 ;
-(BOOL)hasSockNecpClientuuidCount;
-(void)setSockDomainLocal:(long long)arg1 ;
-(void)setHasSockDomainLocal:(BOOL)arg1 ;
-(BOOL)hasSockDomainLocal;
-(void)setSockDomainRoute:(long long)arg1 ;
-(void)setHasSockDomainRoute:(BOOL)arg1 ;
-(BOOL)hasSockDomainRoute;
-(void)setSockDomainInet:(long long)arg1 ;
-(void)setHasSockDomainInet:(BOOL)arg1 ;
-(BOOL)hasSockDomainInet;
-(void)setSockDomainInet6:(long long)arg1 ;
-(void)setHasSockDomainInet6:(BOOL)arg1 ;
-(BOOL)hasSockDomainInet6;
-(void)setSockDomainSystem:(long long)arg1 ;
-(void)setHasSockDomainSystem:(BOOL)arg1 ;
-(BOOL)hasSockDomainSystem;
-(void)setSockDomainMultipath:(long long)arg1 ;
-(void)setHasSockDomainMultipath:(BOOL)arg1 ;
-(BOOL)hasSockDomainMultipath;
-(void)setSockDomainKey:(long long)arg1 ;
-(void)setHasSockDomainKey:(BOOL)arg1 ;
-(BOOL)hasSockDomainKey;
-(void)setSockDomainNdrv:(long long)arg1 ;
-(void)setHasSockDomainNdrv:(BOOL)arg1 ;
-(BOOL)hasSockDomainNdrv;
-(void)setSockDomainOther:(long long)arg1 ;
-(void)setHasSockDomainOther:(BOOL)arg1 ;
-(BOOL)hasSockDomainOther;
-(void)setSockNetInetStream:(long long)arg1 ;
-(void)setHasSockNetInetStream:(BOOL)arg1 ;
-(BOOL)hasSockNetInetStream;
-(void)setSockNetInetDgram:(long long)arg1 ;
-(void)setHasSockNetInetDgram:(BOOL)arg1 ;
-(BOOL)hasSockNetInetDgram;
-(void)setSockNetInetDgramConnected:(long long)arg1 ;
-(void)setHasSockNetInetDgramConnected:(BOOL)arg1 ;
-(BOOL)hasSockNetInetDgramConnected;
-(void)setSockNetInetDgramDns:(long long)arg1 ;
-(void)setHasSockNetInetDgramDns:(BOOL)arg1 ;
-(BOOL)hasSockNetInetDgramDns;
-(void)setSockNetInetDgramNoData:(long long)arg1 ;
-(void)setHasSockNetInetDgramNoData:(BOOL)arg1 ;
-(BOOL)hasSockNetInetDgramNoData;
-(void)setSockNetInet6Stream:(long long)arg1 ;
-(void)setHasSockNetInet6Stream:(BOOL)arg1 ;
-(BOOL)hasSockNetInet6Stream;
-(void)setSockNetInet6Dgram:(long long)arg1 ;
-(void)setHasSockNetInet6Dgram:(BOOL)arg1 ;
-(BOOL)hasSockNetInet6Dgram;
-(void)setSockNetInet6DgramConnected:(long long)arg1 ;
-(void)setHasSockNetInet6DgramConnected:(BOOL)arg1 ;
-(BOOL)hasSockNetInet6DgramConnected;
-(void)setSockNetInet6DgramDns:(long long)arg1 ;
-(void)setHasSockNetInet6DgramDns:(BOOL)arg1 ;
-(BOOL)hasSockNetInet6DgramDns;
-(void)setSockNetInet6DgramNoData:(long long)arg1 ;
-(void)setHasSockNetInet6DgramNoData:(BOOL)arg1 ;
-(BOOL)hasSockNetInet6DgramNoData;
-(void)setSockInetMcastJoin:(long long)arg1 ;
-(void)setHasSockInetMcastJoin:(BOOL)arg1 ;
-(BOOL)hasSockInetMcastJoin;
-(void)setSockInetMcastJoinOs:(long long)arg1 ;
-(void)setHasSockInetMcastJoinOs:(BOOL)arg1 ;
-(BOOL)hasSockInetMcastJoinOs;
-(void)setNexusFlowInetStream:(long long)arg1 ;
-(void)setHasNexusFlowInetStream:(BOOL)arg1 ;
-(BOOL)hasNexusFlowInetStream;
-(void)setNexusFlowInetDatagram:(long long)arg1 ;
-(void)setHasNexusFlowInetDatagram:(BOOL)arg1 ;
-(BOOL)hasNexusFlowInetDatagram;
-(void)setNexusFlowInet6Stream:(long long)arg1 ;
-(void)setHasNexusFlowInet6Stream:(BOOL)arg1 ;
-(BOOL)hasNexusFlowInet6Stream;
-(void)setNexusFlowInet6Datagram:(long long)arg1 ;
-(void)setHasNexusFlowInet6Datagram:(BOOL)arg1 ;
-(BOOL)hasNexusFlowInet6Datagram;
-(void)setIfnetAlloc:(long long)arg1 ;
-(void)setHasIfnetAlloc:(BOOL)arg1 ;
-(BOOL)hasIfnetAlloc;
-(void)setIfnetAllocOs:(long long)arg1 ;
-(void)setHasIfnetAllocOs:(BOOL)arg1 ;
-(BOOL)hasIfnetAllocOs;
-(void)setPfAddrule:(long long)arg1 ;
-(void)setHasPfAddrule:(BOOL)arg1 ;
-(BOOL)hasPfAddrule;
-(void)setPfAddruleOs:(long long)arg1 ;
-(void)setHasPfAddruleOs:(BOOL)arg1 ;
-(BOOL)hasPfAddruleOs;
-(void)setVmnetStart:(long long)arg1 ;
-(void)setHasVmnetStart:(BOOL)arg1 ;
-(BOOL)hasVmnetStart;
-(void)setIfNetagentEnabled:(BOOL)arg1 ;
-(void)setHasIfNetagentEnabled:(BOOL)arg1 ;
-(BOOL)hasIfNetagentEnabled;
-(void)setTimeSinceLastReport:(unsigned long long)arg1 ;
-(void)setHasTimeSinceLastReport:(BOOL)arg1 ;
-(BOOL)hasTimeSinceLastReport;
-(long long)ifFltrAttach;
-(long long)ifFltrAttachOs;
-(long long)ipFltrAdd;
-(long long)ipFltrAddOs;
-(long long)sockFltrRegister;
-(long long)sockFltrRegisterOs;
-(long long)sockAlloc;
-(long long)sockAllocKernel;
-(long long)sockAllocKernelOs;
-(long long)sockNecpClientuuidCount;
-(long long)sockDomainLocal;
-(long long)sockDomainRoute;
-(long long)sockDomainInet;
-(long long)sockDomainInet6;
-(long long)sockDomainSystem;
-(long long)sockDomainMultipath;
-(long long)sockDomainKey;
-(long long)sockDomainNdrv;
-(long long)sockDomainOther;
-(long long)sockNetInetStream;
-(long long)sockNetInetDgram;
-(long long)sockNetInetDgramConnected;
-(long long)sockNetInetDgramDns;
-(long long)sockNetInetDgramNoData;
-(long long)sockNetInet6Stream;
-(long long)sockNetInet6Dgram;
-(long long)sockNetInet6DgramConnected;
-(long long)sockNetInet6DgramDns;
-(long long)sockNetInet6DgramNoData;
-(long long)sockInetMcastJoin;
-(long long)sockInetMcastJoinOs;
-(long long)nexusFlowInetStream;
-(long long)nexusFlowInetDatagram;
-(long long)nexusFlowInet6Stream;
-(long long)nexusFlowInet6Datagram;
-(long long)ifnetAlloc;
-(long long)ifnetAllocOs;
-(long long)pfAddrule;
-(long long)pfAddruleOs;
-(long long)vmnetStart;
-(BOOL)ifNetagentEnabled;
-(unsigned long long)timeSinceLastReport;
@end

