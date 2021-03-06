/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CSVoiceTriggerEnabledMonitorDelegate.h>
#import <libobjc.A.dylib/CSSpeakerRecognitionAssetDownloadMonitorDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface CSVoiceProfileRetrainManager : NSObject <CSVoiceTriggerEnabledMonitorDelegate, CSSpeakerRecognitionAssetDownloadMonitorDelegate> {

	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)CSSpeakerRecognitionAssetDownloadMonitor:(id)arg1 didInstallNewAsset:(BOOL)arg2 assetProviderType:(unsigned long long)arg3 ;
-(void)triggerVoiceProfileRetrainingWithAsset:(id)arg1 ;
-(void)CSLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2 ;
-(void)CSVoiceTriggerEnabledMonitor:(id)arg1 didReceiveEnabled:(BOOL)arg2 ;
-(void)_speakerRecognitionModelRetrainCallback;
-(void)_speakerRecognitionCleanupDuplicatedProfilesCallback;
-(void)_runVoiceProfileRetrainerWithAsset:(id)arg1 withLanguageCode:(id)arg2 ;
@end

