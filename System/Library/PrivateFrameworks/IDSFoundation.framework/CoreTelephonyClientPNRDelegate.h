/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CoreTelephonyClientPNRDelegate <NSObject>
@optional
-(void)pnrRequestSent:(id)arg1 pnrReqData:(id)arg2;
-(void)pnrResponseReceived:(id)arg1 pnrRspData:(id)arg2;
-(void)pnrReadyStateNotification:(id)arg1 regState:(BOOL)arg2;
-(void)context:(id)arg1 pnrSupportChanged:(BOOL)arg2;

@end

