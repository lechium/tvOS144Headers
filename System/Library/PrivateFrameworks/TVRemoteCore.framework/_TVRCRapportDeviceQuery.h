/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _TVRCRapportDeviceQueryDelegate;
@class _TVRCExpiringStore, RPCompanionLinkClient, NSMutableDictionary;

@interface _TVRCRapportDeviceQuery : NSObject {

	_TVRCExpiringStore* _expiringStore;
	RPCompanionLinkClient* _companionLinkClient;
	NSMutableDictionary* _wrapperToIdentifierMapping;
	NSMutableDictionary* _deviceRecords;
	BOOL _unpairedBLEDevicesReported;
	id<_TVRCRapportDeviceQueryDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_TVRCRapportDeviceQueryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<_TVRCRapportDeviceQueryDelegate>)delegate;
-(void)setDelegate:(id<_TVRCRapportDeviceQueryDelegate>)arg1 ;
-(void)start;
-(void)stop;
-(void)_disconnectAllDevices;
-(void)_deviceFound:(id)arg1 unpairedBLE:(BOOL)arg2 ;
-(BOOL)_shouldReportDevice:(id)arg1 ;
-(void)_deviceLost:(id)arg1 ;
-(BOOL)_recordExistsForIDS:(id)arg1 ;
-(void)_updateRecordForIDS:(id)arg1 addTransportForFlag:(unsigned long long)arg2 ;
-(void)_updateRecordForIDS:(id)arg1 removeTransportForFlag:(unsigned long long)arg2 ;
-(unsigned long long)_transportForStatusFlag:(unsigned long long)arg1 ;
@end

