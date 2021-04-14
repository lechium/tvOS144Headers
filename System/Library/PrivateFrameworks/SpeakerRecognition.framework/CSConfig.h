/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CSConfig : NSObject
+(unsigned)inputRecordingNumberOfChannels;
+(float)inputRecordingSampleRate;
+(unsigned)inputRecordingSampleByteDepth;
+(double)inputRecordingBufferDuration;
+(unsigned long long)zeroFilterWindowSizeInMs;
+(unsigned long long)zeroFilterWindowSizeInMsForReport;
+(float)inputRecordingSampleRateNarrowBand;
+(unsigned long long)channelForProcessedInput;
+(float)remoteVADDuration;
+(BOOL)inputRecordingIsFloat;
+(unsigned)inputRecordingFramesPerPacket;
+(unsigned)inputRecordingBytesPerFrame;
+(unsigned)inputRecordingBytesPerPacket;
+(unsigned)hearstNumberOfBytesPerChunk;
+(unsigned)hearstNumberOfSamplesPerChunk;
+(float)inputRecordingDurationInSecs;
+(unsigned)inputRecordingSampleBitDepth;
+(unsigned)EncryptionAudioSampleByteDepth;
+(long long)inputRecordingEncoderAudioQuality;
+(id)inputRecordingSampleRateConverterAlgorithm;
+(unsigned)audioConverterBitrate;
+(unsigned long long)channelForOutputReference;
+(float)zeroFilterApproxAbsSpeechThreshold;
+(int)csAudioProcessingQueuePriority;
+(float)daysBeforeRemovingLogFiles;
+(unsigned long long)serverLoggingChannelBitset;
+(double)defaultContinousFingerprintBufferDuration;
@end
