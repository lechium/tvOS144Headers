/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:56 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFCore/AVFCore-Structs.h>
@class NSArray, NSMutableArray;

@interface AVAudioSettingsValueConstrainer : NSObject {

	AudioStreamBasicDescription _inputASBD;
	AudioStreamBasicDescription _outputASBD;
	OpaqueAudioConverterRef _audioConverter;
	unsigned _outputDataRate;
	BOOL _needNewConverter;
	BOOL _needAvailableSampleRates;
	BOOL _needApplicableParameters;
	NSArray* _availableOutputSampleRates;
	NSMutableArray* _availableOutputDataRates;
	NSMutableArray* _applicableOutputSampleRatesForDataRate;
	NSMutableArray* _applicableOutputDataRatesForSampleRate;

}

@property (assign,nonatomic) float outputSampleRate; 
@property (assign,nonatomic) unsigned outputFormat; 
@property (assign,nonatomic) unsigned outputFormatFlags; 
@property (assign,nonatomic) unsigned outputBitsPerChannel; 
@property (assign,nonatomic) unsigned outputChannelCount; 
@property (assign,nonatomic) unsigned outputDataRate; 
-(id)init;
-(void)dealloc;
-(unsigned)outputFormat;
-(void)setOutputFormat:(unsigned)arg1 ;
-(void)setInputPropertiesFromASBD:(AudioStreamBasicDescription)arg1 ;
-(void)setOutputFormatFlags:(unsigned)arg1 ;
-(void)setOutputBitsPerChannel:(unsigned)arg1 ;
-(void)setOutputSampleRate:(float)arg1 ;
-(void)setOutputChannelCount:(unsigned)arg1 ;
-(void)setOutputDataRate:(unsigned)arg1 ;
-(unsigned)availableOutputChannelCountForDesiredChannelCount:(unsigned)arg1 rounding:(long long)arg2 ;
-(float)applicableOutputSampleRateForDesiredSampleRate:(float)arg1 rounding:(long long)arg2 ;
-(void)_buildAudioConverter;
-(id)_fetchApplicableOutputDataRates;
-(void)_buildAvailableSampleRates;
-(void)_buildApplicableDataRatesForSampleRates;
-(void)_bringUpToDate;
-(unsigned)outputDataRate;
-(float)_getAvailableOutputSampleRateFor:(float)arg1 rounding:(long long)arg2 ;
-(float)outputSampleRate;
-(unsigned)outputFormatFlags;
-(unsigned)outputBitsPerChannel;
-(unsigned)outputChannelCount;
@end

