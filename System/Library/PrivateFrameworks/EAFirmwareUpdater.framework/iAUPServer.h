/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/EAFirmwareUpdater.framework/EAFirmwareUpdater
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HSModelDelegate.h>

@protocol iAUPServerDelegate, OS_dispatch_queue;
@class FirmwareBundle, HSModel, NSMutableData, NSObject;

@interface iAUPServer : NSObject <HSModelDelegate> {

	id<iAUPServerDelegate> _delegate;
	int _serverState;
	int _parserState;
	BOOL _escapeInProgress;
	BOOL _byteEscape;
	BOOL _ackAppReentry;
	FirmwareBundle* _firmwareBundle;
	HSModel* _hsModel;
	unsigned _telegramLength;
	unsigned char _telegramChecksum;
	NSMutableData* _telegramDataIn;
	unsigned short objectBlockTransferSizes[4];
	unsigned _firmwareImageBaseTransferAddress;
	unsigned short _accessoryCapabilities;
	unsigned _totalBytesDownloadedInCurrentSession;
	BOOL _startEventSent;
	BOOL _restartRequired;
	BOOL _sleepWakeRequired;
	BOOL _urgentUpdate;
	unsigned char _iAUPVersion;
	unsigned char _currentAsset;
	NSObject*<OS_dispatch_queue> _dispatchQ;

}

@property (assign) id<iAUPServerDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FirmwareBundle * firmwareBundle;                     //@synthesize firmwareBundle=_firmwareBundle - In the implementation block
@property (assign,nonatomic) BOOL byteEscape;                                     //@synthesize byteEscape=_byteEscape - In the implementation block
@property (assign,nonatomic) BOOL ackAppReentry;                                  //@synthesize ackAppReentry=_ackAppReentry - In the implementation block
@property (assign,nonatomic) int serverState;                                     //@synthesize serverState=_serverState - In the implementation block
@property (assign,nonatomic) int parserState;                                     //@synthesize parserState=_parserState - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQ;              //@synthesize dispatchQ=_dispatchQ - In the implementation block
@property (assign,nonatomic) unsigned char iAUPVersion;                           //@synthesize iAUPVersion=_iAUPVersion - In the implementation block
@property (assign,nonatomic) unsigned char currentAsset;                          //@synthesize currentAsset=_currentAsset - In the implementation block
@property (nonatomic,readonly) BOOL restartRequired;                              //@synthesize restartRequired=_restartRequired - In the implementation block
@property (nonatomic,readonly) BOOL sleepWakeRequired;                            //@synthesize sleepWakeRequired=_sleepWakeRequired - In the implementation block
@property (nonatomic,readonly) BOOL urgentUpdate;                                 //@synthesize urgentUpdate=_urgentUpdate - In the implementation block
-(void)dealloc;
-(id<iAUPServerDelegate>)delegate;
-(void)setDelegate:(id<iAUPServerDelegate>)arg1 ;
-(int)serverState;
-(void)setCurrentAsset:(unsigned char)arg1 ;
-(unsigned char)currentAsset;
-(BOOL)restartRequired;
-(void)setServerState:(int)arg1 ;
-(void)appendToLog:(id)arg1 ;
-(void)setHSModel:(id)arg1 fallbackModel:(id)arg2 error:(id)arg3 ;
-(void)resetParser;
-(char*)serverStateString:(int)arg1 ;
-(char*)parserStateString:(int)arg1 ;
-(void)setParserState:(int)arg1 ;
-(int)parserState;
-(char*)commandString:(int)arg1 ;
-(void)processInByte:(unsigned char)arg1 ;
-(void)processInTelegram;
-(void)logCommand:(unsigned char)arg1 payload:(char*)arg2 length:(unsigned)arg3 ;
-(void)processPersonalizationInfo:(char*)arg1 length:(unsigned)arg2 ;
-(id)sendCommand:(unsigned char)arg1 payload:(char*)arg2 payload_length:(unsigned short)arg3 ;
-(void)setResumeInfo:(char*)arg1 length:(unsigned)arg2 ;
-(void)processIdentifyCommand:(char*)arg1 length:(unsigned)arg2 ;
-(void)processRequestDownloadCommand:(char*)arg1 length:(unsigned)arg2 ;
-(void)processDownloadCompleteCommand:(char*)arg1 length:(unsigned)arg2 ;
-(void)processNotifyAccessoryErrorCommand:(char*)arg1 length:(unsigned)arg2 ;
-(unsigned char)appendByteWithEscaping:(unsigned char)arg1 toObject:(id*)arg2 ;
-(id)processManifestProperties:(char*)arg1 length:(unsigned)arg2 ;
-(void)setIAUPVersion:(unsigned char)arg1 ;
-(unsigned char)iAUPVersion;
-(id)initInstanceWithByteEscape:(BOOL)arg1 ;
-(id)getNumberOfBytesDownloadedInCurrentSession;
-(unsigned)supportedTargetProductIDCode;
-(void)setFirmwareBundle:(FirmwareBundle *)arg1 ;
-(void)processDataFromAccessory:(id)arg1 ;
-(void)setBootloaderEntry;
-(BOOL)personalizationComplete;
-(char*)assetTypeString:(int)arg1 ;
-(FirmwareBundle *)firmwareBundle;
-(BOOL)byteEscape;
-(void)setByteEscape:(BOOL)arg1 ;
-(BOOL)sleepWakeRequired;
-(BOOL)urgentUpdate;
-(BOOL)ackAppReentry;
-(void)setAckAppReentry:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQ;
-(void)setDispatchQ:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

