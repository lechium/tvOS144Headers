/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUARP.framework/CoreUARP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreUARP/CoreUARP-Structs.h>
@interface UARPPacketDumper : NSObject {

	pcapRef _pcap;
	pcap_dumperRef _dumper;
	unsigned _bloodhoundPacketType;

}
-(void)dealloc;
-(id)initWithFileName:(id)arg1 ;
-(void)dump:(id)arg1 accessoryID:(id)arg2 uarpStatus:(unsigned)arg3 direction:(unsigned long long)arg4 ;
@end

