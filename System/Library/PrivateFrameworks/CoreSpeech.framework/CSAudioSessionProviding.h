/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CSAudioSessionProviding <NSObject>
@required
-(void)enableMiniDucking:(BOOL)arg1;
-(void)setDuckOthersOption:(BOOL)arg1;
-(BOOL)duckOthersOption;
-(void)enableSmartRoutingConsideration:(BOOL)arg1;
-(BOOL)activateAudioSessionWithReason:(unsigned long long)arg1 dynamicAttribute:(unsigned long long)arg2 bundleID:(id)arg3 error:(id*)arg4;
-(BOOL)prewarmAudioSessionWithError:(id*)arg1;
-(BOOL)deactivateAudioSession:(unsigned long long)arg1 error:(id*)arg2;
-(void)setAudioSessionDelegate:(id)arg1;

@end

