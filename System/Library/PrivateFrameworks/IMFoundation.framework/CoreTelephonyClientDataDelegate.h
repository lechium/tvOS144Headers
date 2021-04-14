/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CoreTelephonyClientDataDelegate <NSObject>
@optional
-(void)connectionStateChanged:(id)arg1 connection:(int)arg2 dataConnectionStatusInfo:(id)arg3;
-(void)connectionActivationError:(id)arg1 connection:(int)arg2 error:(int)arg3;
-(void)preferredDataSimChanged:(id)arg1;
-(void)preferredDataServiceDescriptorChanged:(id)arg1;
-(void)currentDataSimChanged:(id)arg1;
-(void)currentDataServiceDescriptorChanged:(id)arg1;
-(void)servingNetworkChanged:(id)arg1;
-(void)connectionAvailability:(id)arg1 availableConnections:(id)arg2;
-(void)dataStatus:(id)arg1 dataStatusInfo:(id)arg2;
-(void)dataSettingsChanged:(id)arg1;
-(void)internetConnectionStateChanged:(id)arg1;
-(void)internetConnectionActivationError:(int)arg1;
-(void)internetDataStatus:(id)arg1;
-(void)internetConnectionAvailability:(BOOL)arg1;
-(void)tetheringStatus:(id)arg1;
-(void)serviceDisconnection:(id)arg1 status:(id)arg2;

@end

