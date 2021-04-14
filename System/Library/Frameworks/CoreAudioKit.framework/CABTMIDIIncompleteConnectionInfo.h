/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:12 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AMSBTLEPeripheral;

@interface CABTMIDIIncompleteConnectionInfo : NSObject {

	BOOL _connecting;
	unsigned long long _timeOutInterval;
	AMSBTLEPeripheral* _peripheral;

}

@property (getter=isConnecting) BOOL connecting;                          //@synthesize connecting=_connecting - In the implementation block
@property (assign) unsigned long long timeOutInterval;                    //@synthesize timeOutInterval=_timeOutInterval - In the implementation block
@property (nonatomic,retain) AMSBTLEPeripheral * peripheral;              //@synthesize peripheral=_peripheral - In the implementation block
-(void)dealloc;
-(AMSBTLEPeripheral *)peripheral;
-(BOOL)isConnecting;
-(void)setPeripheral:(AMSBTLEPeripheral *)arg1 ;
-(void)setConnecting:(BOOL)arg1 ;
-(void)setTimeOutInterval:(unsigned long long)arg1 ;
-(id)initWithPeripheral:(id)arg1 isConnecting:(BOOL)arg2 ;
-(unsigned long long)timeOutInterval;
@end

