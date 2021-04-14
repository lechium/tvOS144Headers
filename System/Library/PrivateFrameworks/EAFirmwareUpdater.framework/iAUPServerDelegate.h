/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/EAFirmwareUpdater.framework/EAFirmwareUpdater
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol iAUPServerDelegate
@required
-(id)writeData:(id)arg1;
-(void)updateProgress:(double)arg1;
-(void)logStatusString:(id)arg1;
-(void)firmwareUpdateComplete:(id)arg1 error:(id)arg2;
-(void)handleFirmwareUpdateStatus:(id)arg1;
-(unsigned)getWhitelistedPersonalizationFields;
-(void)processPersonalizationInfoFromAccessory:(id)arg1;
-(unsigned char)getPersonalizationID;
-(BOOL)updateRequiresPersonalization;
-(void)handleSessionError:(unsigned)arg1 message:(id)arg2;
-(id)getDeviceClassName;

@end
