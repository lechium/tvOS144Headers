/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_nw_interface;
#import <NetworkExtension/NetworkExtension-Structs.h>
@class NEFilterPacketProvider, NSObject, NEFilterPacketContext, NSUUID;

@interface NEFilterPacketInterpose : NSObject {

	os_unfair_lock_s _lock;
	channelRef _channel;
	channel_attrRef _attributes;
	int _channel_fd;
	unsigned short _slot_size;
	slot_descRef _rx_last_slot;
	interpose_frame* _frame_buffer;
	interpose_frame* _current_frame;
	channel_ring_descRef _rx_ring_ingress;
	channel_ring_descRef _tx_ring_ingress;
	channel_ring_descRef _rx_ring_egress;
	channel_ring_descRef _tx_ring_egress;
	NEFilterPacketProvider* _provider;
	NSObject*<OS_nw_interface> _interface;
	NEFilterPacketContext* _context;
	BOOL _input_suspended;
	unsigned _nexusPort;
	unsigned _keyLength;
	NSUUID* _flowId;
	NSUUID* _nexusInstance;
	void* _key;
	void* _input_source;

}

@property (retain) NSUUID * flowId;                     //@synthesize flowId=_flowId - In the implementation block
@property (retain) NSUUID * nexusInstance;              //@synthesize nexusInstance=_nexusInstance - In the implementation block
@property (assign) unsigned nexusPort;                  //@synthesize nexusPort=_nexusPort - In the implementation block
@property (assign) void* key;                           //@synthesize key=_key - In the implementation block
@property (assign) unsigned keyLength;                  //@synthesize keyLength=_keyLength - In the implementation block
@property (assign) void* input_source;                  //@synthesize input_source=_input_source - In the implementation block
@property (assign) BOOL input_suspended;                //@synthesize input_suspended=_input_suspended - In the implementation block
-(id)description;
-(void)dealloc;
-(void)close;
-(void*)key;
-(void)setKey:(void*)arg1 ;
-(BOOL)input_suspended;
-(void)close:(BOOL)arg1 ;
-(unsigned)keyLength;
-(NSUUID *)nexusInstance;
-(void)setNexusInstance:(NSUUID *)arg1 ;
-(void)freePacket:(id)arg1 ;
-(void*)input_source;
-(void)setInput_source:(void*)arg1 ;
-(void)setInput_suspended:(BOOL)arg1 ;
-(void)setNexusPort:(unsigned)arg1 ;
-(void)setKeyLength:(unsigned)arg1 ;
-(unsigned)nexusPort;
-(NSUUID *)flowId;
-(interpose_frame*)allocateFrame:(interpose_frame*)arg1 ;
-(void)deallocateFrame:(interpose_frame*)arg1 ;
-(id)initWithInterface:(id)arg1 flowId:(unsigned char)arg2 nexusInstance:(unsigned char)arg3 nexusPort:(unsigned)arg4 key:(void*)arg5 keyLength:(unsigned)arg6 provider:(id)arg7 ;
-(BOOL)matchFlow:(unsigned char)arg1 flowId:(unsigned char)arg2 ;
-(BOOL)createChannel;
-(id)delayCurrentPacket;
-(void)allowPacket:(id)arg1 ;
-(void)setFlowId:(NSUUID *)arg1 ;
@end

