/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreSpeech/CoreSpeech-Structs.h>
@interface CSUtils : NSObject
+(id)deviceProductType;
+(id)deviceBuildVersion;
+(id)_contentsOfDirectoryAtURL:(id)arg1 matchingPattern:(id)arg2 includingPropertiesForKeys:(id)arg3 error:(id*)arg4 ;
+(id)timeStampWithSaltGrain;
+(id)deviceProductVersion;
+(double)systemUpTime;
+(BOOL)supportTTS;
+(BOOL)supportPremiumAssets;
+(id)convertToShortLPCMBufFromFloatLPCMBuf:(id)arg1 ;
+(id)getSiriLanguageWithFallback:(id)arg1 ;
+(void)applyNegative12dBGain:(id)arg1 ;
+(unsigned long long)secondsToHostTime:(float)arg1 ;
+(BOOL)shouldDeinterleaveAudioOnCS;
+(unsigned)getNumElementInBitset:(unsigned long long)arg1 ;
+(id)deviceHwRevision;
+(AudioStreamBasicDescription)lpcmNonInterleavedASBDWithSampleRate:(float)arg1 numberOfChannels:(unsigned)arg2 ;
+(AudioStreamBasicDescription)lpcmInterleavedASBDWithSampleRate:(float)arg1 numberOfChannels:(unsigned)arg2 ;
+(void)removeLogFilesInDirectory:(id)arg1 matchingPattern:(id)arg2 beforeDays:(float)arg3 ;
+(void)clearLogFilesInDirectory:(id)arg1 matchingPattern:(id)arg2 exceedNumber:(unsigned long long)arg3 ;
+(AudioStreamBasicDescription)utteranceFileASBD;
+(id)_sharedDisposeLoggingQueue;
+(void)URLsInDirectory:(id)arg1 matchingPattern:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)_sortedURLsInDirectory:(id)arg1 matchingPattern:(id)arg2 completion:(/*^block*/id)arg3 ;
+(BOOL)supportZeroFilter;
+(BOOL)supportBeepCanceller;
+(id)assetHashInResourcePath:(id)arg1 ;
+(BOOL)supportCSTwoShotDecision;
+(AudioStreamBasicDescription)lpcmNarrowBandASBD;
+(AudioStreamBasicDescription)lpcmASBD;
+(BOOL)supportLanguageDetector;
+(AudioStreamBasicDescription)lpcmNonInterleavedWithRemoteVADASBD;
+(AudioStreamBasicDescription)lpcmInterleavedWithRemoteVADASBD;
+(id)getFixedHighPrioritySerialQueueWithLabel:(id)arg1 ;
+(BOOL)isRecordContextVoiceTrigger:(id)arg1 ;
+(void)applyGain:(float)arg1 toBuffer:(id)arg2 ;
+(id)convertToFloatLPCMBufFromShortLPCMBuf:(id)arg1 ;
+(void)apply12dBGain:(id)arg1 ;
+(void)iterateBitset:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
+(BOOL)shouldRunVTOnCS;
+(BOOL)isIOSDeviceSupportingBargeIn;
+(BOOL)supportHearstVoiceTrigger;
+(BOOL)supportRemoraVoiceTrigger;
+(BOOL)supportJarvisVoiceTrigger;
+(BOOL)supportBluetoothDeviceVoiceTrigger;
+(BOOL)supportSmartVolume;
+(BOOL)supportsVoiceTriggerFides;
+(BOOL)supportSelfTriggerSuppression;
+(BOOL)supportContinuousAudioFingerprint;
+(BOOL)supportAdBlocker;
+(BOOL)supportHybridEndpointer;
+(BOOL)supportsSpeakerRecognitionAssets;
+(BOOL)supportPhatic;
+(BOOL)supportContinuousVoiceTrigger;
+(BOOL)supportLazySessionActivation;
+(BOOL)supportSessionActivateDelay;
+(double)hostTimeToTimeInterval:(unsigned long long)arg1 ;
+(AudioStreamBasicDescription)lpcmInt16NarrowBandASBD;
+(AudioStreamBasicDescription)lpcmInt16ASBD;
+(BOOL)supportOpportunisticZLL;
+(AudioStreamBasicDescription)lpcmMonoNonInterleavedWithRemoteVADASBD;
+(AudioStreamBasicDescription)lpcmMonoInterleavedWithRemoteVADASBD;
+(BOOL)shouldDelayPhaticForMyriadDecision;
+(unsigned long long)hostTimeFromSampleCount:(unsigned long long)arg1 anchorHostTime:(unsigned long long)arg2 anchorSampleCount:(unsigned long long)arg3 ;
+(unsigned long long)sampleCountFromHostTime:(unsigned long long)arg1 anchorHostTime:(unsigned long long)arg2 anchorSampleCount:(unsigned long long)arg3 ;
+(AudioStreamBasicDescription)lpcmNonInterleavedASBD;
+(AudioStreamBasicDescription)lpcmInterleavedASBD;
+(float)hostTimeToSeconds:(unsigned long long)arg1 ;
+(BOOL)supportCompactPlus;
+(AudioStreamBasicDescription)opusASBD;
+(AudioStreamBasicDescription)speexASBD;
+(AudioStreamBasicDescription)lpcmFloatASBD;
+(BOOL)hasRemoteBuiltInMic;
+(id)alertMuteBehaviorDict;
+(id)voiceTriggerRecordContext;
+(id)hearstVoiceTriggerRecordContext:(id)arg1 ;
+(id)jarvisVoiceTriggerRecordContext:(id)arg1 ;
+(id)lpcmRecordSettings;
+(id)opusRecordSettings;
+(id)speexRecordSettings;
+(id)alertMuteSettings;
+(BOOL)supportHandsFree;
+(double)getHostClockFrequency;
+(BOOL)supportRaiseToSpeak;
+(BOOL)supportPremiumWatchAssets;
+(id)rootQueueWithFixedPriority:(int)arg1 ;
+(BOOL)supportKeywordDetector;
+(BOOL)supportSAT;
+(BOOL)supportPremiumModel;
+(BOOL)shouldDownloadVTAssetsOnDaemon;
+(BOOL)hasRemoteCoreSpeech;
+(BOOL)supportCircularBuffer;
+(id)getFixedPrioritySerialQueueWithLabel:(id)arg1 fixedPriority:(int)arg2 ;
+(id)deviceUserAssignedName;
+(AudioStreamBasicDescription)opusNarrowBandASBD;
+(AudioStreamBasicDescription)aiffFileASBD;
+(BOOL)readAudioChunksFrom:(id)arg1 block:(/*^block*/id)arg2 ;
+(void)getTrialIdsForAssetType:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2 ;
+(unsigned long long)getAssetTypeForNamespace:(id)arg1 ;
+(BOOL)isRecordContextHearstVoiceTrigger:(id)arg1 ;
+(BOOL)isRecordContextJarvisVoiceTrigger:(id)arg1 ;
+(BOOL)isRecordContextJarvisButtonPress:(id)arg1 ;
+(unsigned long long)macHostTimeFromBridgeHostTime:(unsigned long long)arg1 ;
+(BOOL)isRecordContextRaiseToSpeak:(id)arg1 ;
+(BOOL)xpcConnection:(id)arg1 hasEntitlement:(id)arg2 ;
+(BOOL)isRecordContextHearstDoubleTap:(id)arg1 ;
+(BOOL)isRecordContextAutoPrompt:(id)arg1 ;
+(BOOL)isRecordContextHomeButtonPress:(id)arg1 ;
+(BOOL)isRecordContextSpeakerIdTrainingTrigger:(id)arg1 ;
+(id)recordContextString:(id)arg1 ;
@end

