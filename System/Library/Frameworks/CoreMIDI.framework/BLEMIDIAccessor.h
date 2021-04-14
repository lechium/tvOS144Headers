/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:04 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface BLEMIDIAccessor : NSObject
+(unsigned)midiDeviceForUUID:(id)arg1 ;
+(unsigned)midiDeviceForUUID:(id)arg1 isLocalPeripheral:(BOOL)arg2 isRemotePeripheral:(BOOL)arg3 ;
+(unsigned)nullDevice;
+(unsigned)localPeripheral;
+(id)localPeripheralName;
+(id)uuidForMIDIDevice:(unsigned)arg1 ;
+(id)nameForMIDIDevice:(unsigned)arg1 ;
+(BOOL)deviceIsRemotePeripheral:(unsigned)arg1 ;
+(BOOL)deviceIsLocalPeripheral:(unsigned)arg1 ;
+(BOOL)deviceIsNullDevice:(unsigned)arg1 ;
+(BOOL)deviceIsOnline:(unsigned)arg1 ;
+(BOOL)uuidIsForgettable:(id)arg1 ;
+(unsigned short)timeStampOffset:(unsigned long long)arg1 ;
+(unsigned short)reconstructWithHighByte:(unsigned char)arg1 lowByte:(unsigned char)arg2 overflow:(BOOL)arg3 ;
+(unsigned long long)timeStampWithEpoch:(unsigned long long)arg1 offset:(unsigned short)arg2 ;
+(void)splitOffset:(unsigned short)arg1 intoHeaderByte:(char*)arg2 timeStampByte:(char*)arg3 ;
+(void)logEvent:(char*)arg1 length:(unsigned short)arg2 timeStamp:(unsigned long long)arg3 intoBuffer:(char*)arg4 ;
@end

