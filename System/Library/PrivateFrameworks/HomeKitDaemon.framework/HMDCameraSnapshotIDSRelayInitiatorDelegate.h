/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HMDCameraSnapshotIDSRelayInitiatorDelegate <NSObject>
@required
-(void)relayInitiatorIDSSessionDidStart:(id)arg1;
-(void)relayInitiatorDidSendIDSInvitation:(id)arg1;
-(void)relayInitiator:(id)arg1 didEndIDSSessionWithError:(id)arg2;
-(void)relayInitiatorDidSendDataSuccessfully:(id)arg1;
-(void)relayInitiatorDidStartDataSend:(id)arg1;

@end
