/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SVXClientService <NSObject>
@required
-(oneway void)pingWithReply:(/*^block*/id)arg1;
-(oneway void)synthesizeRequest:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)fetchSessionStateWithCompletion:(/*^block*/id)arg1;
-(oneway void)deactivateWithContext:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)fetchSessionActivityStateWithCompletion:(/*^block*/id)arg1;
-(oneway void)preheatWithActivationSource:(long long)arg1;
-(oneway void)prewarmWithContext:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)activateWithContext:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)performManualEndpointing;
-(oneway void)transitToAutomaticEndpointing;
-(oneway void)fetchAudioPowerWithType:(long long)arg1 completion:(/*^block*/id)arg2;
-(oneway void)prewarmRequest:(id)arg1;
-(oneway void)enqueueSpeechSynthesisRequest:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)cancelPendingSpeechSynthesisRequest:(id)arg1;
-(oneway void)stopSpeechSynthesisRequest:(id)arg1;
-(oneway void)setDeviceSetupContext:(id)arg1;
-(oneway void)prepareForDeviceSetupWithContext:(id)arg1 completion:(/*^block*/id)arg2;

@end

